#include "person.h"



int my_strcmp( const char s1[], const char s2[])
{
    while(*s1 && *s1++ == *s2++);
    return (*--s1 - *--s2);
}

int comparator_name(const Person *person1, const Person *person2)
{
    return my_strcmp((person1)->m_name, (person2)->m_name);
}

int comparator_age(const Person *person1, const Person *person2)
{
    return (person1->m_age > person2->m_age);
}

int comparator_id(const Person *person1, const Person *person2)
{
    return (person1->m_id > person2->m_id);
}

