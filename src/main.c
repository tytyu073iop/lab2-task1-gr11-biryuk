#include <stdio.h>
#include <string.h>

// Функция для подсчета вхождений заданной буквы
int countOccurrences(char *str, char ch) {
		int count = 0;
		for (int i = 0; i < strlen(str); i++) {
				if (str[i] == ch) {
						count++;
				}
		}
		return count;
}

int main() {
		char str[100];
		char ch;

		// Ввод строки
		printf("Введите строку: ");
		fgets(str, sizeof(str), stdin);

		// Ввод буквы
		printf("Введите букву: ");
		scanf("%c", &ch);

		// Подсчет количества вхождений буквы
		int result = countOccurrences(str, ch);

		// Вывод результата
		printf("Буква '%c' встречается в строке %d раз(а).\n", ch, result);

		return 0;
}
