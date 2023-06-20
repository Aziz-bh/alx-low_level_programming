#include "main.h" 
/** 
* main-print putchar followed by a new line
* 
*Return :always 0
*/
int main(void) 
{
	char outp[] = "_putchar";
	int i = 0;

	while (outp[i] != '\0')
	{
		_putchar(outp[i]);
		i++;
	}
	_putchar('\n');	
       return (0) ;
}  
