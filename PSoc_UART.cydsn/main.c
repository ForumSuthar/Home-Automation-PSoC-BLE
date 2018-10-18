/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

int main()
{   
    CyGlobalIntEnable; /* Enable global interrupts. */
     UART_1_Start();
     uint8 c=0;
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
     UART_1_PutString("Enter a character\n\r");
    
    for(;;)
    {  
       c=UART_1_GetChar();   
       if (c > 0)
        {
         c= c+1;
        UART_1_PutChar(c);  
        UART_1_PutString("\n\r");
        }

        /* Place your application code here. */
    }
}

/* [] END OF FILE */
