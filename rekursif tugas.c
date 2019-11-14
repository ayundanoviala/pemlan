#include <stdio.h>
#include <stdlib.h>



	
	int factorial (int a)
	{
		if(a==0 || a==1) return 1; 
    return a*faktorial(a-1); 
		
	}
	main()
	{ 
    printf("%d",faktorial(6)); 

	}
