#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char str[], int left, int rigth) {
	if (left >= rigth) {
		printf("\n errado");
	}
	if (str[left] != str[rigth]) {
		printf("\ncerto");
	}

	if (rigth == 0) {
		return 0;
	}

	return isPalindrome(str, left + 1, rigth - 1);
}

int main(void) {
	isPalindrome("ovo", 0, 3);
	return EXIT_SUCCESS;
}
