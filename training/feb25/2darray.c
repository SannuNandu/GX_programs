#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **arr;
	int rows,cols;
	int i,j;
	printf("enter the num of rows:");
	scanf("%d", &rows);

	printf("enter the num of cols:");
	scanf("%d", &cols);

	arr=(int **)malloc(rows*sizeof(int*));

	if (arr == NULL) {
        printf("Memory allocation failed for rows\n");
        return 1;
    }
	for(i=0;i<rows;i++){
		arr[i]=(int *)malloc(cols*sizeof(int));

	if (arr[i] == NULL) {
            printf("Memory allocation failed for row %d\n", i);
            return 1;
        }
	}

	printf("enter the elements of the array:");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d", *(arr+i)+j);
		}
	
	}


	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d", *(*(arr+i)+j));
	
		}
		printf("\n");
	}

	for (int i = 0; i < rows; i++) {
                free(arr[i]);
                }
                free(arr);

	return 0;
}
