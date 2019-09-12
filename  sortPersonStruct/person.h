
#ifndef _SORTPERSONSTRUCT_PERSON_H
#define _SORTPERSONSTRUCT_PERSON_H

//typedef struct Person Person;
typedef struct Person{
    unsigned int m_id;
    char m_name[16];
    unsigned char m_age;
}Person;

typedef int(*compFunc) (const Person *person1, const Person *person2);

int my_strcmp( const char s1[], const char s2[]);

int comparator_name(const Person *person1, const Person *person2);

int comparator_age(const Person *person1, const Person *person2);

int comparator_id(const Person *person1, const Person *person2);


#endif //_SORTPERSONSTRUCT_PERSON_H
