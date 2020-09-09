#include <stdio.h>

typedef struct
{
    char name[10];
    int age;
}Person;

int main(){
    Person person[3];
    
    for(int i =0; i < 3; i++){
        scanf("%s %d", person[i].name, &(person[i].age));
    }

    for(int i=0; i < 3; i++){
        printf("Name:%s, Age:%d\n", person[i].name, person[i].age);
       
    }
    return 0;
}

