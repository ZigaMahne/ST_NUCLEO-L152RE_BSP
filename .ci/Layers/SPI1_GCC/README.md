# Board: STMicroelectronics [NUCLEO-L152RE](https://www.st.com/en/evaluation-tools/nucleo-l152re.html)

## SPI1 GCC Board Layer

Device: **STM32L152RETx**

System Core Clock: **32 MHz**

This setup is configured using **STM32CubeMX**, an interactive tool provided by STMicroelectronics for device configuration.
Refer to ["Configure STM32 Devices with CubeMX"](https://open-cmsis-pack.github.io/cmsis-toolbox/CubeMX/) for additional information.

### System Configuration

| System resource       | Setting
|:----------------------|:--------------------------------------
| Heap                  |  8 kB (configured in the STM32CubeMX)
| Stack (MSP)           |  1 kB (configured in the STM32CubeMX)

### STDIO mapping

**STDIO** is routed to Virtual COM port on the ST-LINK (using **USART2** peripheral)

### CMSIS-Driver mapping

| CMSIS-Driver          | Peripheral            | Board connector/component                             | Connection
|:----------------------|:----------------------|:------------------------------------------------------|:------------------------------
| Driver_GPIO0          | GPIO                  | Arduino digital I/O pins D0..D10, D14..D19            | ARDUINO_UNO_D0..D10, D14..D19
| Driver_I2C1           | I2C1                  | Arduino I2C pins D20..D21                             | ARDUINO_UNO_I2C
| Driver_SPI1           | SPI1                  | Arduino SPI pins D11..D13                             | ARDUINO_UNO_SPI
| Driver_USART2         | USART2                | ST-LINK connector (CN1)                               | STDIN, STDOUT, STDERR
| CMSIS-Driver VIO      | GPIO                  | USER button (B1)                                      | CMSIS_VIO

Reference to [Arduino UNO connector description](https://open-cmsis-pack.github.io/cmsis-toolbox/ReferenceApplications/#arduino-shield).

### CMSIS-Driver Virtual I/O mapping

| CMSIS-Driver VIO      | Board component
|:----------------------|:--------------------------------------
| vioBUTTON0            | USER button (B1)

> **Note:**  Layer has been created with Firmware Package STM32Cube_FW_L1_V1.10.5.
