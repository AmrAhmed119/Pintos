#include <threads/real.h>
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include "threads/interrupt.h"

int f = (1 << 14);

int convert_to_real(int x)
{
    return x*f;
}

int convert_to_integer_with_round(int real_x)
{
    // int is_negative = (real_x >> 30);
    int ans = real_x;
    if (real_x < 0)
        ans -= f / 2;
    else
        ans += f / 2;
    ans /= f;
    return ans;
}

int convert_to_integer_with_floor(int real_x)
{
    return real_x / f;
}

int add_real(int real_r1, int real_r2)
{
    return real_r1 + real_r2;
}

int add_integer(int real_r1, int r2)
{
    return real_r1 + r2 * f;
}

int subtract(int real_r1, int real_r2)
{
    return real_r1 - real_r2;
}

int subtract_integer(int real_r1, int r2)
{
    return real_r1 - r2*f;
}

int divide_real(int real_r1, int real_r2)
{
    int64_t temp = ((int64_t)real_r1) * f / ((int64_t)real_r2);
    int ans = ((int) temp);
    return ans;
}

int divide_integer(int real_r1, int r2)
{
    return real_r1 / r2;
}

int multiply_real(int real_r1, int real_r2)
{
    int64_t temp = ((int64_t)real_r1) * ((int64_t)real_r2) / f;
    int ans = ((int) temp);
    return ans;
}

int multiply_integer(int real_r1, int r2)
{
    return real_r1 * r2;
}