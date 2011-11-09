#ifndef _MY_UTL_H_
#define _MY_UTL_H_

typedef void my_sort_func(int *arr, int n);

int *my_utl_new_array(int n);
void my_utl_delete_array(int *array);

void my_utl_input_array(int *array, int n);
void my_utl_print_array(int *array, int n);
int my_utl_array_sorted(int *array, int n);

int my_utl_sort_test(my_sort_func sort_func);

#endif /* _MY_UTL_H_ */
