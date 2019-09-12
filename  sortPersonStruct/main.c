#include <stdio.h>
#include "stdlib.h"
#include "sort.h"
#include "person.h"

int main()
{

    Person people[] ={
            {7623, "Aharon", 22},
            {1342, "Aharon", 22},
            {154, "Aharon", 22}
    };

    sort(comparator_id, people, 3);
    sort(comparator_name, people, 3);
    sort(comparator_age, people, 3);

    printf("-----Print after sort-----\n");
    size_t size = 0;
    for(; size < 3; size++)
    {
        printf("ID: %d\nName: %s\nAge: %u\n\n", people[size].m_id, people[size].m_name, people[size].m_age);
    }

    return 0;
}