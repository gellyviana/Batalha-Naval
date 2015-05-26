dsa 9na#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int mat[11][11]={0};
	int i, j, k, n;
		srand(time(NULL));
		for(i=1;i<=10;i++){
			for(j=1;j<=10;j++){
				mat[i][j]=1+(rand()%4);
					printf(" %d ", mat[i][j]);
			}
			printf("\n");
		}
		while(1){
			printf("digite a posição desejada da matriz:\n");
			scanf("%d %d", &k, &n);
					for(i=1;i<=k;i++){
						for(j=1;j<=n;j++){
							printf("%d ", mat[i][j]);
						}
						printf("\n");
					}
		}
		printf("\n");
		system("pause");
		return 0;
}
