#include <string.h>
#include <stdio.h>
char *my_buf;
void foo() {
	char buf[64];
	memcpy(buf, "hello", strlen("hello"));
	my_buf = buf;
}


int main(void) {
	foo();
	printf("%s", my_buf);
	return 0;
}