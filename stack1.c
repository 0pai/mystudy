#include <stdio.h>

int main(int argc,void** argv)
{
	char a1[16];
	char b1[32];
	char b2[16];
	char a2[16];

	snprintf(a1,sizeof(a1),"%s","a1a1a1a1a1a1a1a");
	snprintf(b1,sizeof(b1),"%s","b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b");
	snprintf(b2,sizeof(b2),"%s","b2b2b2b2b2b2b2b");
	snprintf(a2,sizeof(a2),"%s","a2a2a2a2a2a2a2a");

	printf(a1);

	return 0;
}
