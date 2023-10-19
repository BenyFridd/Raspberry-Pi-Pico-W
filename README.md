# Raspberry-Pi-Pico-W




### **Manual de Referência do Raspberry Pi Pico W**

O Raspberry Pi Pico W é uma expansão sem fio do Raspberry Pi Pico, incorporando interfaces sem fio adicionais mantendo o mesmo fator de forma compacto. Este componente é especialmente designado para aplicações de Internet das Coisas (IoT) devido à sua capacidade de facilitar a comunicação entre computadores e a internet, além de ser capaz de atuar como um servidor web para controlar saídas digitais e receber dados de sensores.

### **Interfaces de Comunicação:**

1. **WiFi:**
   - **Padrão:** 802.11n (Banda Única 2.4 GHz).
   - **Segurança:** WPA3.
   - **Ponto de Acesso Suave:** Suporta até quatro clientes.
   - **Configuração:** Facilita a conexão com redes WiFi e a comunicação com a internet.

2. **Bluetooth:**
   - **Versão:** 5.2.
   - **Bluetooth Low Energy (LE):** Suporta os papéis Central e Periférico.
   - **Bluetooth Classic:** Suporte incluído.

3. **Serial Peripheral Interface (SPI):**
   - **Conexão com Chip Wireless:** A interface sem fio é conectada ao microcontrolador RP2040 via SPI.
   - **Operação:** A interface geralmente opera a 33MHz.
   - **Compartilhamento de Pinos:** Alguns pinos são compartilhados devido a limitações de pinos, afetando a disponibilidade de determinadas funções durante as transações SPI.

4. **Interfaces Herdadas do Raspberry Pi Pico:**
   - **2x SPI:** Permite comunicação serial com outros dispositivos.
   - **2x I2C:** Interface para comunicação entre circuitos integrados.
   - **2x UART:** Interface de comunicação assíncrona para transmissão de dados.
  

![alt text](https://user-images.githubusercontent.com/759846/132600686-8341b469-a875-4e41-8ff7-2eb18e07e9da.png))


### Conexões:
1. **LCD:**
    - `GND` no `GND.3` do Arduino.
    - `VCC` no `5V` do Arduino.
    - `SDA` no pino `A4`.
    - `SCL` no pino `A5`.

2. **Sensor de Temperatura:**
    - `GND` no `GND.2` do Arduino.
    - `VCC` no `VIN` do Arduino.
    - `OUT` no pino `A3`.

### Interfaces de Comunicação:
1. **LCD:**
    - Usa I2C, um protocolo para enviar/receber dados. `SDA` para dados, `SCL` para o clock.

2. **Sensor de Temperatura:**
    - Usa uma entrada analógica. O pino `A3` lê o valor.

### Código:
- **Início:** 
    - Liga o LCD e mostra "Hello World".

- **Loop:** 
    - A cada segundo, mostra a temperatura lida do sensor no LCD.


