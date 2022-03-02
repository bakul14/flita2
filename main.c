#include <stdio.h>

int manual() {
	int index = 0;
	printf("\n\rКаждая команда для работы со множествами шифруется числовым индексом:\n\n\r");
	printf("1 - добавить множество\n\r");
	printf("2 - добавить элемент в множество\n\r");
	printf("3 - показать все элементы множества\n\r");
	printf("4 - удалить элемент множества\n\r");
	printf("5 - удалить все элементы множества\n\r");
	printf("6 - удалить множество\n\n\r");
	printf("Для повторного вывода инструкции введите 666\n\n\r");
	printf("Введите числовой индекс требуемой команды:\n\r");
	scanf("%d", &index);
	return index;
}

void add_set(void);
void add_element(void);
void show_elements(void);
void delete_element(void);
void delete_all_elements(void);
void delete_set(void);

void start(void) {
	switch (manual()) {
		case 1: add_set(); break;
		case 2: add_element(); break;
		case 3: show_elements(); break;
		case 4: delete_element(); break;
		case 5: delete_all_elements(); break;
		case 6: delete_set(); break;
		case 666: manual(); break;
		default: printf("Command not found\n\r");
	}
}


    int set1[500] = {0};
    int set2[500] = {0};
    int name1 = 0;
    int name2 = 0;
    int i = 0;
    int counter1 = 0;
    int counter2 = 0;
    int element = 0;



int main() {
	start();

	while (1) {

	}

	return 0;
}


void add_set() {
	if (!(name1 && name2)) {
		printf("Придумайте и введите численный идентификатор множества, не равный нулю: ");
		if (name1 = 0) scanf("%d", &name1);
		else scanf("%d", &name2);
		printf("Успех!");
	}
	else printf("Невозможно добавить множество");
}

void add_element() {
	printf("Введите идентификатор множества: ");
	scanf("%d\n\r", &i);
	printf("Введите элемент множества:");
	scanf("%d\n\r", &element);
	if (i == name1) {
		set1[counter1] = element;
		counter1++;
	}
	if (i == name2) {
		set2[counter2] = element;
		counter2++;
	}
	else printf("Множество не найдено\n\r");
}
