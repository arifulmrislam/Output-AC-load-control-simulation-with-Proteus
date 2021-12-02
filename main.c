#include <16f84a.h>
#use delay (clock=20MHz)
#fuses HS
void main()
{
while(TRUE){
if (input(pin_A0) == 1)
{
output_b(0x01);
delay_ms(3000);
}
else{ 
output_b(0x00);
}
}
}
