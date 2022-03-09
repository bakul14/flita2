#include <stdio.h>


int main() {
	int arr1[100];
	int arr2[100];
	int choice = 0;
	int k, l;

	
	printf("Enter 10 elements of the first set:\n");
	for (k = 0; k < 10; k++)
	{
		scanf("%d", &arr1[k]);
	}
	printf("Enter 10 elements of the second set:\n");
	for (l = 0; l < 10; l++)
	{	
		scanf("%d", &arr2[l]);
	}

	while (choice != 9) {
		printf("\nCurrent elements of the set 1:\n");
		for (int i = 0; i < k; i++)
		{
			printf("%d ", arr1[i]);
		}
		printf("\nCurrent elements of the set 2:\n");
		for (int i = 0; i < l; i++)
		{
			printf("%d ", arr2[i]);
		}
		printf("\nSelect an action:\n");
		printf("1.Add element\t");
		printf("2.Delete element\n");
		printf("9.Exit\n");

		scanf("%d", &choice);
		if (choice == 9) {
			return 0;
		}
		else if (choice == 1) {
			choice = 0;
			printf("Select the set you want to add the element to:\n");
			printf("1.First\t");
			printf("2.Second\n");
			scanf("%d", &choice);
			if (choice == 1) {
				printf("Enter element:\n");
				scanf("%d", &arr1[k]);
				k++;
			}

			if (choice == 2) {
				printf("Enter element:\n");
				scanf("%d", &arr2[l]);
				l++;
			}
				
			
		}
		else if(choice == 2) {
			choice = 0;
			printf("Select the set you want to delete the element to:\n");
			printf("1.First\t");
			printf("2.Second\n");
			scanf("%d", &choice);
			if (choice == 1) {
				arr1[k] = -858993460;
				k--;
			}

			if (choice == 2) {
				arr2[l] = -858993460;
				l++;
			}
		}
		system("cls");
	}
	return 0;
}
