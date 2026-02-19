#include <stdio.h>
#include <string.h>

#define MAX_ATTEMPTS 3
#define CORRECT_LOGIN "admin"
#define CORRECT_PASSWORD "password123"

void romantoint(void);
void program2(void);
void program3(void);

int main() {
    char login[50];
    char password[50];
    int attempts = 0;
    int login_success = 0;

    printf("Добро пожаловать! Пожалуйста, войдите в систему.\n");

    while (attempts < MAX_ATTEMPTS) {
        attempts++;
        printf("\nПопытка %d из %d:\n", attempts, MAX_ATTEMPTS);

        // Ввод логина
        printf("Введите логин: ");
        scanf("%49s", login); // Ограничиваем ввод до 49 символов + \0

        // Ввод пароля
        printf("Введите пароль: ");
        scanf("%49s", password); // Ограничиваем ввод до 49 символов + \0

        // Проверка правильности логина и пароля
        if (strcmp(login, CORRECT_LOGIN) == 0 && strcmp(password, CORRECT_PASSWORD) == 0) {
            login_success = 1;
            break; // Выходим из цикла при успешном входе
        } else {
            printf("Неверный логин или пароль\n");
        }
    }

    // Анализ результата
    if (login_success) {
        printf("\nУспешный вход! Добро пожаловать в систему!\n");
        
        
    int choice;

    printf("Выберите программу для запуска:\n");
    printf("1 — Программа 1\n");
    printf("2 — Программа 2\n");
    printf("3 — Программа 3\n");
    printf("0 — Выход\n");
    printf("Ваш выбор: ");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            romantoint();
            break;
        case 2:
            program2();
            break;
        case 3:
            program3();
            break;
        case 0:
            printf("Выход из программы.\n");
            break;
        default:
            printf("Неверный выбор!\n");
            break;
    }

    return 0;
    } 
    else {
        printf("\nПревышено количество попыток. Программа завершается.\n");
    }

    return 0;
}
