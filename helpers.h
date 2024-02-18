#ifndef HELPERS_H
#define HELPERS_H

#include <stdio.h>
#include <stdint.h>

#define err_log(fmt, ...) fprintf(stderr, "%s:%d : " fmt, __FILE__, __LINE__, ##__VA_ARGS__);

/**
 * @brief Read len random bytes from urandom into p
*/
int get_rand_bytes(void *p, size_t len);

/**
 * @brief Print next n bytes of a
*/
void hexdump(uint8_t* a, const size_t n);

/**
 * @brief Wrapper with error handling around strtoul
 *
 * @param str string to parse as number
 * @param base as described in strtoul doc
 * @param result result param
 * @return 0 on success
 */
int do_stroul(char *str, int base, uint64_t *result);


#endif
