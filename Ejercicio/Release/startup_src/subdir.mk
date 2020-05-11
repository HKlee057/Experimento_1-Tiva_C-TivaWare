################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../startup_src/TM4C_startup.c 

OBJS += \
./startup_src/TM4C_startup.o 

C_DEPS += \
./startup_src/TM4C_startup.d 


# Each subdirectory must supply rules for building sources it contributes
startup_src/%.o: ../startup_src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	arm-none-eabi-gcc -I"C:\ti\TivaWare_C_Series-2.1.4.178" -O3 -Wall -c -fmessage-length=0 -mthumb -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -ffunction-sections -fdata-sections -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


