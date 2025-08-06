# NUCLEO-L152RE_BSP

The **STMicroelectronics NUCLEO-L152RE Board Support Pack (BSP)**:

- Contains examples and board layers in *csolution format* for usage with the [CMSIS-Toolbox](https://open-cmsis-pack.github.io/cmsis-toolbox/) and the  [VS Code CMSIS Solution](https://marketplace.visualstudio.com/items?itemName=Arm.cmsis-csolution) extension.
- Requires the [Device Family Pack (DFP) for the STM32L1 series](https://www.keil.arm.com/packs/stm32l1xx_dfp-keil).
- Is configured with [STM32CubeMX](https://www.st.com/en/development-tools/stm32cubemx.html) for the Arm Compiler 6 (MDK).

## Content in *csolution format*

- [Examples/Blinky](https://github.com/Open-CMSIS-Pack/ST_NUCLEO-L152RE_BSP/tree/main/Examples/Blinky) shows the basic usage of this board.

- [Board Layer (with LD2)](https://github.com/Open-CMSIS-Pack/ST_NUCLEO-L152RE_BSP/tree/main/Layers/Default) for device-agnostic [Reference Applications](https://open-cmsis-pack.github.io/cmsis-toolbox/ReferenceApplications/) that implements these API interfaces:

| Provided API Interface        | Description
|:------------------------------|:------------------------------------------------------------------------------
| CMSIS_VIO                     | CMSIS-Driver VIO connected to LED (LD2) and USER button (B1)
| STDIN, STDOUT, STDERR         | Standard I/O connected to Virtual COM port on ST-LINK connector (CN1)
| ARDUINO_UNO_D0..D12, D14..D19 | CMSIS-Driver GPIO connected to Arduino digital I/O pins D0..D12 and D14..D19
| ARDUINO_UNO_I2C               | CMSIS-Driver I2C connected to Arduino I2C pins D20..D21

- [Board Layer (with SPI1)](https://github.com/Open-CMSIS-Pack/ST_NUCLEO-L152RE_BSP/tree/main/Layers/Default) for device-agnostic [Reference Applications](https://open-cmsis-pack.github.io/cmsis-toolbox/ReferenceApplications/) that implements these API interfaces:

| Provided API Interface        | Description
|:------------------------------|:------------------------------------------------------------------------------
| CMSIS_VIO                     | CMSIS-Driver VIO connected to USER button (B1)
| STDIN, STDOUT, STDERR         | Standard I/O connected to Virtual COM port on ST-LINK connector (CN1)
| ARDUINO_UNO_D0..D10, D14..D19 | CMSIS-Driver GPIO connected to Arduino digital I/O pins D0..D10 and D14..D19
| ARDUINO_UNO_I2C               | CMSIS-Driver I2C connected to Arduino I2C pins D20..D21
| ARDUINO_UNO_SPI               | CMSIS-Driver SPI connected to Arduino SPI pins D11..D13

## Using GCC Compiler

By default the [Board Layers](https://github.com/Open-CMSIS-Pack/ST_NUCLEO-L152RE_BSP/tree/main/Layers) are configured for the Arm Compiler 6 (AC6). Using STM32CubeMX it can be reconfigured for a different compiler. To configure it for the GCC compiler execute these steps:

- In the `<solution_name>.csolution.yml` project file select `compiler: GCC`.
- Launch the STM32CubeMX generator with this CMSIS-Toolbox command:
  `csolution <solution_name>.csolution.yml run -g CubeMX -c <context>`
- In STM32CubeMX:
  - Open from the menu `Project Manager - Project - Toolchain/IDE`:
  - Select `STM32CubeIDE` and disable `Generate Under Root`.
  - Click `GENERATE CODE` to recreate the CubeMX generated files for the GCC compiler.

- In the `Board.clayer.yml` file, update `linker:` node configuration to reference appropriate GCC linker script.
  The GCC linker script is typically generated in the `STM32CubeMX/STM32CubeIDE` folder. Customize the GCC linker script file to your project's requirements.
- Rebuild the project using the CMSIS-Toolbox command `cbuild <solution_name>.csolution.yml`.
