#include <iostream>

using namespace std;

// câu a
int strlen_custom(char *a) {
    int length = 0;
    while (*(a + length) != '\0') length++;
    return length;
}

void reverse(char *a) {
    int len = strlen_custom(a);
    char *start = a;
    char *end = a + len - 1;
    
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Câu b
void delete_char(char *a, char c) {
    char *src = a, *dst = a;
    while (*src) {
        if (*src != c) {
            *dst = *src;
            dst++;
        }
        src++;
    }
    *dst = '\0';
}

// Câu c
void pad_right(char *a, int n) {
    int len = strlen_custom(a);
    if (len >= n) return;
    
    for (int i = len; i < n; i++) {
        a[i] = ' ';
    }
    a[n] = '\0';
}

// Câu d
void pad_left(char* a, int n) {
    int len = strlen_custom(a);
    if (len >= n) return;
    for (int i = n - 1; i >= n - len; i--) {
        a[i] = a[i - (n - len)];
    }
    for (int i = 0; i < n - len; i++) {
        a[i] = ' ';
    }
    a[n] = '\0';
}


// Câu e
void truncate(char *a, int n) {
    if (strlen_custom(a) > n) {
        a[n] = '\0';
    }
}

// Câu f
bool is_palindrome(char *a) {
    int len = strlen_custom(a);
    char *start = a, *end = a + len - 1;
    while (start < end) {
        if (*start != *end) return false;
        start++;
        end--;
    }
    return true;
}

// Câu g
void trim_left(char* a) {
    int n = strlen(a);
    int i = 0;
    while (a[i] == ' ') {
        i++;
    }
    for (int j = 0; j < n - i; j++) {
        a[j] = a[j + i];
    }
    a[n - i] = '\0';
}

// Câu h
void trim_right(char *a) {
    int len = strlen_custom(a);
    char *end = a + len - 1;
    while (end >= a && *end == ' ') {
        *end = '\0';
        end--;
    }
}

int main() {
    char str1[] = "hello";
    reverse(str1);
    cout << "Reverse: " << str1 << endl;

    char str2[] = "banana";
    delete_char(str2, 'a');
    cout << "Delete 'a': " << str2 << endl;

    char str3[] = "test";
    pad_right(str3, 10);
    cout << "Pad Right: '" << str3 << "'" << endl;

    char str4[] = "test";
    pad_left(str4, 10);
    cout << "Pad Left: '" << str4 << "'" << endl;

    char str5[] = "truncate this string";
    truncate(str5, 10);
    cout << "Truncate: " << str5 << endl;

    char str6[] = "madam";
    cout << "Is Palindrome: " << (is_palindrome(str6) ? "Yes" : "No") << endl;

    char str7[] = "   trim left";
    trim_left(str7);
    cout << "Trim Left: '" << str7 << "'" << endl;

    char str8[] = "trim right   ";
    trim_right(str8);
    cout << "Trim Right: '" << str8 << "'" << endl;

    return 0;
}
