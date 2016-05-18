#include <stdio.h>

void main(void) {
	int a = 71516737;
	int i;
	for (i = 0; i < 10; i++) {
		int expect = (a >> ((i << 3) & 0xff));
		printf("i << 3:%d\n^ & 0xff: %d\na >> ^: %d\nexpect: %c\n***\n", i<<3, (i<<3) & 0xff, a >> ((i<<3) & 0xff), (char) expect);
	}
	printf("\n");
}
