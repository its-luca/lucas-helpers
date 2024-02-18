#include "helpers.h"
#include <fcntl.h>
#include <limits.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

static int randomfd = -1;

int get_rand_bytes(void *p, size_t len) {
  if (randomfd == -1) {
    randomfd = open("/dev/urandom", O_RDWR);
    if (randomfd < 0) return randomfd;
  }

  size_t nb_read = read(randomfd, p, len);

  return nb_read != len;
}

void hexdump(uint8_t* a, const size_t n)
{
	for(size_t i = 0; i < n; i++) {
    if (a[i]) printf("\x1b[31m%02x \x1b[0m", a[i]);
    else printf("%02x ", a[i]);
    if (i % 64 == 63) printf("\n");
  }
	printf("\n");
}

int do_stroul(char *str, int base, uint64_t *result)
{
    (*result) = strtoul(str, NULL, base);
    // if commented in, we cannot enter zero, as uses zero as an error case. it's just stupid
    /*if ((*result) == 0) {
      printf("line %d: failed to convert %s to uint64_t\n", __LINE__, str);
      return 0;
    }*/
    if ((*result) == ULLONG_MAX && errno == ERANGE)
    {
        err_log( "failed to convert %s to uint64_t. errno was ERANGE\n", str);
        return -1;;
    }
    return 0;
}
