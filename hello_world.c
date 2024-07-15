#include <stdio.h>

int main() {

    // Declare variables
    int  age = 24;
    float gpa = 3.5;
    char grade = 'A';
    char school[] = "AMA PACO";
    
    printf("Male:\n"
            "Age:%d\n"
            "Gpa:%.2f\n"
            "Grade:%c\n"
            "School:%s\n" ,age ,gpa ,grade, school);

    float Fav = 123.456;
    printf("My Favorite %s is %.3f","number" ,Fav);

    return 0;
}