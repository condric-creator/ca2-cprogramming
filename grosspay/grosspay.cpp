#include <stdio.h>
int main()
{
float hoursworked,hourlywage,grosspay,taxes,netpay;
//prompt the user to enter
printf("Enter hours worked in a week:");
scanf("%f",hoursworked);
//prompt the user to enter
printf("Enter hourly wage:");
scanf("%f",&hourlywage);

if(hoursworked<=40){
	grosspay=hoursworked*hourlywage;
}else
{
	grosspay=(40*hourlywage)+(hoursworked-40)*hourlywage*1.5;
	
}
if(grosspay<=600){
	taxes=0.15*grosspay;
	
}else
{
	taxes=0.15*600+0.2(grosspay-600);
}
netpay=grosspay-taxes;

printf("Gross pay:$%.2f \n",grosspay);
printf("Taxes:$%.2f \n",taxes);
printf("Net pay:$%.2f \n",netpay);	
	return 0;
}