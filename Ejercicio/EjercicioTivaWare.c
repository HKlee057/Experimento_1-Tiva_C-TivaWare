//*****************************************************************************
//Hector Alejandro Klée González
//Carné 17118
//Ejercicio 1 - TivaWare
//Electrónica Digital 2
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/debug.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "driverlib/pin_map.h"

//*****************************************************************************
int main(void)
{
	uint8_t action = 0;
    SysCtlClockSet(SYSCTL_SYSDIV_5);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);
    GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, GPIO_PIN_4);
    GPIOPadConfigSet(GPIO_PORTF_BASE, GPIO_PIN_4, GPIO_STRENGTH_8MA, GPIO_PIN_TYPE_STD_WPU);

    while(1)
    {
    	while(GPIOPinRead(GPIO_PORTF_BASE, GPIO_PIN_4) == 0)
    	{
    		action = 1;
    	}
    	if (action == 1)
    	{
    		GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0x0);
    		GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0x0);
    		//Verde
    		GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, GPIO_PIN_3);
            SysCtlDelay(2000000);

    		//Verde Parpadeando
    		GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0x0);
    		SysCtlDelay(1000000);
    		GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, GPIO_PIN_3);
    		SysCtlDelay(1000000);
    		GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0x0);
    		SysCtlDelay(1000000);
    		GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, GPIO_PIN_3);
    		SysCtlDelay(1000000);
    		GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0x0);
    		SysCtlDelay(1000000);
    		GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, GPIO_PIN_3);
    		SysCtlDelay(1000000);

    		//Amarillo
    		GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_PIN_1);
    		SysCtlDelay(2000000);

    		//Rojo
    		GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, 0x0);
    		SysCtlDelay(2000000);
    		action = 0;
    	}
    }
}

