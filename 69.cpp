#include<stdio.h>

int main() {
  char s[100];
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] >= 'a' && s[i] <= 'z'){
			s[i] -= 32;
		}
	}
	printf("%s", s);
    return 0;
}
