################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup_src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Ejercicio_Digital2.elf

# Tool invocations
Ejercicio_Digital2.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross GCC Linker'
	arm-none-eabi-gcc -L"C:\ti\TivaWare_C_Series-2.1.4.178\driverlib\gcc" -Wl,--static,--gc-sections,-T../startup_src/TM4C.ld -mthumb -mcpu=cortex-m4 -mfloat-abi=hard -o "Ejercicio_Digital2.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) Ejercicio_Digital2.elf
	-@echo ' '

post-build:
	-@echo 'Generar archivo .bin a partir del archivo .elf'
	-arm-none-eabi-objcopy -O binary Ejercicio_Digital2.elf Ejercicio_Digital2.bin
	-@echo ' '

.PHONY: all clean dependents post-build

-include ../makefile.targets
