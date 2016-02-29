// upr1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{	
	int x[5][4],y[4][5];
	int i,j;
	for(j=0;j<4;j++)
		for(i=0;i<5;i++)
			x[i][j]=i+j*5+1;

	for(j=0;j<4;j++)
		for(i=4;i>-1;i--)
			y[j][4-i]=x[i][j];

	for(i=0;i<4;i++){
		for(j=0;j<5;j++)
			printf("%d ", y[i][j]);

		printf("\n");
	}
	system("pause");
	return 0;
}

