#include "stdio.h"
int main()
{
	int i;
	int markah;
	int totalMarkah = 0; //totalMarkah mengira hasil tambah markah setiap kali gelung
	float purataMarkah;
	
	for(i=1; i<6; i++) //condition of loop
	{
		printf("\nmasukkan markah ke %d: ", i);
		scanf("%d",& markah);
		totalMarkah = totalMarkah + markah;
		//printf("\ntotal markah ialah = %d\n", totalMarkah);
		//printf("purata markah ialah = %.1f\n", purataMarkah);
	}
	printf("\ntotal markah ialah = %d\n", totalMarkah);
	printf("nilai i = %d\n", i)  ;
	purataMarkah = totalMarkah/(float)i;
	printf("purata markah ialah = %.1f\n", purataMarkah);      
	return 0;	
	}
