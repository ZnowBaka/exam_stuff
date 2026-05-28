/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include <inttypes.h>

void app_main(void)
{
    int *value = malloc(sizeof(int));

    *value = 42;

    printf("Before free: %d\n", *value);

    free(value);

    // Use-after-free:
    // The pointer still exists, but the memory is no longer valid.
    // This is undefined behavior.
    printf("After free: %d\n", *value);

    value = NULL;

    return 0;
}
