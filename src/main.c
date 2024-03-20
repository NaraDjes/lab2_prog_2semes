#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IntVector.h"
int main()
{
    IntVector *array = int_vector_new(3);
    print_vector(array);
    for (int i = 0; i < array->capacity; i++)
    {
        int_vector_push_back(array,i);
        printf("%d\n",array -> data[i]);
    }
    print_vector(array);
    IntVector *a = int_vector_copy(array);
    print_vector(array);
    printf("vector a\n");
    printf("%p\n",a);
    for (int i = 0; i < array->capacity; i++) {
		  printf("%d\n", a->data[i]);
    }
    printf("\n");
    printf("Get Item\n");
    int z;
    z = int_vector_get_item(array,1);
    printf("%d\n",z);
    print_vector(array);
    printf("set item\n");
    int_vector_set_item(array,2,7);
    for (int i = 0; i < array->capacity; i++) {
		  printf("%d\n", array->data[i]);
    }
    size_t s = int_vector_get_size(array);
    size_t jos = int_vector_get_capacity(array);
    printf("size array = %ld\n",s);
    printf("capacity array = %ld\n",jos);
    printf("\n");
    print_vector(array);
    printf("push back\n");
    int_vector_push_back(array,10);
    print_vector(array);
    printf("\n");
    printf("pop back\n");
    int_vector_pop_back(array);
    print_vector(array);
    printf("shrink to fit\n");
    int_vector_shrink_to_fit(array);
    print_vector(array);
    printf("reserve\n");
    int_vector_reserve(array,40);
    print_vector(array);
    printf("resize\n");
    int_vector_resize(array,10);
    print_vector(array);
    int_vector_free(array);
    int_vector_free(a);
    return 0;
}
