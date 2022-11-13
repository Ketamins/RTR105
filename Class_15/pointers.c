#include<stdio.h>

int main()
 {
	int i_value = 10;
	printf("i_value (variable name used) = $d\n",i_value);

	int *i_pointer = &i_value; //norāde i_pointer (tas arī mainīgais)
				   //saturēs mainīgā
	printf("address of i_vaulue (value of i_pointer) = %p\n",i_pointer);
	printf("i_value (address used) = %d\n",*i_pointer);

	*i_pointer = (*i_pointer) + 10;
	printf("i_value (variable name used; after change) = %d\n\n",i_value);

return 0;
 }

