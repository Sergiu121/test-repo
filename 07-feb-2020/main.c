#include<stdio.h>
#include <unistd.h>
#include <string.h>

#define MSG_LENGTH 100

#ifdef _DEBUG
void print(char msg[]) {
	printf("%s", msg);
}
#else
void print(char* msg) {
	return;
}
#endif

int main(void) {
	int i = 0;

	printf("Counting:\n");
	
	print("Entering debugging mode...\n");
	for (i = 0; i < 5; i++) {
		sleep(1);

		print("I'm sleeping because I'm lazy\n");
	}

	printf("%d...\n", i);
	return 0;
}