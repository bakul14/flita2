#include <stdio.h>
#define max_power 20
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int set1[max_power] = { 0 };
	int set2[max_power] = { 0 };
	int choice = 0;
	int i = 0;
	int j = 0;
	int power1 = 0;
	int power2 = 0;
	int element = 0;

	printf("Enter the power of the 1st set (no more than 20): ");
	scanf_s("%d", &power1);
	if (power1 >= max_power) {
		power1 = max_power;
		printf("\rPower of the 1st set is set to %d\n\r", power1);
	}
	else printf("Power of the 1st set is set to %d\n\r", power1);
	printf("Enter elements of the 1st set:\n\r");
	for (i = 0; i < power1; i++) scanf_s("%d", &set1[i]);
	printf("Initialization the 1st set is OK\n\n\r");


	printf("Enter the power of the 2nd set (no more than 20): ");
	scanf_s("%d", &power2);
	if (power2 >= max_power) {
		power2 = max_power;
		printf("\rPower of the 2nd set is set to %d\n\r", power2);
	}
	else printf("Power of the 2nd set is set to %d\n\r", power2);
	printf("Enter elements of the 2nd set:\n\r");
	for (i = 0; i < power2; i++) scanf_s("%d", &set2[i]);
	printf("Initialization the 2nd set is OK\n\r");


	while (1) {
		printf("\n\rSet 1 now:\n\r");
		for (int i = 0; i < power1; i++) printf("%d ", set1[i]);
		printf("\n\n\rSet 2 now:\n\r");
		for (int i = 0; i < power2; i++) printf("%d ", set2[i]);
		printf("\n\nSelect an action:\n");
		printf("1 - add element,  2 - delete element,  666 - close program\n\r");

		scanf_s("%d", &choice);
		switch (choice) {
		case 666: return 0;
		case 1: {
			choice = 0;
			printf("Select the set for add element (1 or 2): ");
			scanf_s("%d", &choice);
			if (choice == 1) {
				printf("\n\rEnter element: ");
				scanf_s("%d", &set1[power1]);
				power1++;
			}
			if (choice == 2) {
				printf("Enter element: ");
				scanf_s("%d", &set2[power2]);
				power2++;
			}
		} break;
		case 2: {
			choice = 0;
			printf("Select the set for delete element (1 or 2): ");
			scanf_s("%d", &choice);
			printf("\n\rEnter element for delete: ");
			scanf_s("%d", &element);
			if (choice == 1) {
				for (i = 0; i < power1; i++) {
					if (set1[i] == element) {
						for (j = i; j < power1; j++) set1[j] = set1[j + 1];
						power1--;
						break;
					}
				}
			}
			if (choice == 2) {
				for (i = 0; i < power2; i++) {
					if (set2[i] == element) {
						for (j = i; j < power2; j++) set2[j] = set2[j + 1];
						power2--;
						break;
					}
				}
			}
		} break;
		}
	}
	return 0;
}
