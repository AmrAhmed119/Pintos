#ifndef THREADS_REAL_H
#define THREADS_REAL_H

int convert_to_real(int x);

int convert_to_integer_with_round(int real_x);

int convert_to_integer_with_floor(int real_x);

int add_real(int real_r1, int real_r2);

int add_integer(int real_r1, int r2);

int subtract(int real_r1, int real_r2);

int subtract_integer(int real_r1, int r2);

int divide_real(int real_r1, int real_r2);

int divide_integer(int real_r1, int r2);

int multiply_real(int real_r1, int real_r2);

int multiply_integer(int real_r1, int r2);

#endif /* threads/real.h */