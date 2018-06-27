#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

struct student {
	int id;
	char name[5];
	int gpa;
} __attribute__((packed));
// try this with removing packed attribute too

int main(void)
{
	uint8_t myarr[] = {0x01, 0x00, 0x00, 0x00, 'a', 'b', 'c', 'd', 'e', 0x10, 0x00, 0x00, 0x00}; 
	struct student *kivanc = NULL;

	kivanc = (struct student *) myarr;
	printf("id: %d %p\n", kivanc->id, &kivanc->id);
	printf("name: %s %p\n", (char *) kivanc->name, &kivanc->name);
	printf("gpa: %d %p\n", kivanc->gpa, &kivanc->gpa);

	return 0;
}
