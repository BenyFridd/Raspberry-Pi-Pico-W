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
  

![alt text](https://github.com/BenyFridd/Raspberry-Pi-Pico-W/blob/main/Screenshot%202023-10-22%20193622.png?raw=true)


### Conexões:

**LCD:**

 - GND do LCD no pino GND.8 do Pi Pico.
 - VCC do LCD no pino VBUS do Pi Pico.
 - SDA do LCD no pino GP0 do Pi Pico.
 - SCL do LCD no pino GP1 do Pi Pico.

**Botão:**

 - Um terminal do botão no pino GP2 do Pi Pico.
 - O outro terminal do botão no pino GND.1 do Pi Pico.

### Interfaces de Comunicação:

**LCD:**

 - O LCD usa a interface I2C para a comunicação. O pino SDA é utilizado para a transmissão de dados e o pino SCL é utilizado para o clock.

**Botão:**

 - O botão está conectado a um pino de entrada digital (GP2) no Pi Pico, e é utilizado para alterar a mensagem exibida no LCD.

### Código:

**Início:**

- Inicializa a interface I2C no Pi Pico com os pinos GP0 como SDA e GP1 como SCL.
- Cria uma instância do LCD I2C e o configura para usar a interface I2C configurada.
- Define um botão de entrada com um resistor pull-up no pino GP2.

**Loop:**

1. Verifica o estado do botão. Se ele for pressionado (valor 0, já que é um botão pull-up), e estava despressurizado na última verificação, altera a mensagem exibida.
2. Se a mensagem atual for "Hello world!", muda para "Beny Frid". Se for "Beny Frid", muda para "Hello world!".
3. Exibe a nova mensagem no LCD durante 5 segundos, depois limpa o LCD.
4. Aguarda 1 segundo antes da próxima verificação do botão.

**Funcionamento do Botão:**

- O botão é inicializado com um resistor pull-up, significando que seu estado normal é 'HIGH' (ou 1). Quando o botão é pressionado, ele se conecta ao GND, fazendo com que o estado seja 'LOW' (ou 0).
- O código verifica uma mudança do estado 'HIGH' para 'LOW' para identificar uma pressão de botão.




