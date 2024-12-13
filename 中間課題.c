#include <stdio.h>
#include <string.h>
#include <ctype.h>
int is_strong_password(const char *password) {
    int length = strlen(password);
    int has_upper = 0, has_lower = 0;

    
    if (length < 8) {
        printf("パスワードは8文字以上にしましょう。\n");
        return 0; 
    }

    
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            has_upper = 1;
        } else if (islower(password[i])) {
            has_lower = 1;
        }
    }

    
    if (!has_upper) {
        printf("パスワードに大文字を含めましょう。\n");
    }

    
    if (!has_lower) {
        printf("パスワードに小文字を含めましょう。\n");
    }

    
    if (!has_upper || !has_lower) {
        return 0; 
    }

    return 1; 
}

int main() {
    char password[100];

    
    printf("パスワードを入力してください: ");
    fgets(password, sizeof(password), stdin);

    
    password[strcspn(password, "\n")] = '\0';

    
    if (is_strong_password(password)) {
        printf("強いパスワードです。\n");
    } else {
        printf("強いパスワードではありません。\n");
    }

    return 0;
}