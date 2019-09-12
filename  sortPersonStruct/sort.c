#include "sort.h"


void swap(Person *person1, Person *person2)
{
    Person temp = *person1;
    *person1 = *person2;
    *person2 = temp;
}

void sort(compFunc compare, Person *persons, size_t size)
{
    size_t i, j;
    for (i = 0; i < size-1; i++)

        // Last i elements are already in place
        for (j = 0; j < size-i-1; j++)
            if (compare(&persons[j],&persons[j+1]))
                swap(&persons[j], &persons[j+1]);
}

