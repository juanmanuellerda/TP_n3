################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Utilities/Components/ls016b8uy/ls016b8uy.c 

OBJS += \
./Utilities/Components/ls016b8uy/ls016b8uy.o 

C_DEPS += \
./Utilities/Components/ls016b8uy/ls016b8uy.d 


# Each subdirectory must supply rules for building sources it contributes
Utilities/Components/ls016b8uy/%.o: ../Utilities/Components/ls016b8uy/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo %cd%
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F407VGTx -DSTM32F4 -DSTM32F4DISCOVERY -DSTM32 -DUSE_HAL_DRIVER -DSTM32F407xx -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/inc" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/CMSIS/core" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/CMSIS/device" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/HAL_Driver/Inc/Legacy" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/HAL_Driver/Inc" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/ampire480272" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/ampire640480" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/Common" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/cs43l22" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/exc7200" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/ft6x06" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/ili9325" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/ili9341" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/l3gd20" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/lis302dl" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/lis3dsh" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/ls016b8uy" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/lsm303dlhc" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/mfxstm32l152" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/n25q128a" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/n25q256a" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/n25q512a" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/otm8009a" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/ov2640" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/s25fl512s" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/s5k5cag" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/st7735" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/st7789h2" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/stmpe1600" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/stmpe811" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/ts3510" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/Components/wm8994" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities" -I"D:/Escritorio/PENDIENTES/Diplomatura_de_Sistemas_Embebidos/Trabajos_Practicos/TP_N3/Utilities/STM32F4-Discovery" -O3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


