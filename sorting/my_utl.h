#ifndef _MY_UTL_H_
#define _MY_UTL_H_

int *my_utl_new_array(int n);
void my_utl_delete_array(int *array);

void my_utl_input_array(int *array, int n);
void my_utl_print_array(int *array, int n);
int my_utl_array_sorted(int *array, int n);

#endif /* _MY_UTL_H_ */
