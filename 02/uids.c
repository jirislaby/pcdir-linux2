#define _GNU_SOURCE
#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>

static void print_uids(void)
{
	uid_t ruid, euid, suid;

	if (getresuid(&ruid, &euid, &suid) < 0)
		err(1, "getresuid");

	printf("R=%u E=%u S=%u\n", ruid, euid, suid);
}

int main(void)
{
	print_uids();

	return 0;
}
