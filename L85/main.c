#include <stdio.h>
#include <stdlib.h>

/*
UNION CHALLENGE:
    Write a program which will define a union and then use this union
    to assign and access its members
    You must define a union named student that consists of the
    following three elements:
        char letterGrade
        int roundedGrade
        float exactGrade

    You program should declare two union variables inside the main method
    You program should assign random values to variable 1
        You then need to display each value for each member of this union
        You should notice that something is wrong
    Your program should then assign a value (using var2) to its member
    letter grade and then print it out
    Your program should then assign a value (using va2) to its member
    rounded grade and then print it out
    Your program should then assign a value (using va2) to its member
    exact grade and then print it out
*/

union student{
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};

int main()
{
    union student variable1, variable2;
    int menu1 = 0, menu2 = 0;
    printf("First Student selection menu\n1)Letter Grade\n2)Rounded Grade\n3)Exact Grade\n");
    scanf("%d",&menu1);

    srand ( time(NULL) );

    if(menu1 == 1){
        variable1.letterGrade = rand() % (70-65+1) + 65;
        printf("Letter Grade: %c\n",variable1.letterGrade);
    }else if(menu1 == 2){
        variable1.roundedGrade = rand() % 101;
        printf("Rounded Grade: %d\n",variable1.roundedGrade);
    }else if(menu1 == 3){
        variable1.exactGrade = (rand() % 101) + (rand() % 100) /100;
        printf("Exact Grade: %f\n",variable1.exactGrade);
    }else{
        printf("ERROR!\n");
    }

    printf("\nSecond Student selection menu\n1)Letter Grade\n2)Rounded Grade\n3)Exact Grade\n");
    scanf("%d",&menu2);

    if(menu2 == 1){
        variable2.letterGrade = rand() % (70-65+1) + 65;
        printf("Letter Grade: %c\n",variable2.letterGrade);
    }else if(menu2 == 2){
        variable2.roundedGrade = rand() % 101;
        printf("Rounded Grade: %d\n",variable2.roundedGrade);
    }else if(menu2 == 3){
        variable2.exactGrade = (rand() % 101) + (rand() % 100) /100;
        printf("Exact Grade: %f\n",variable2.exactGrade);
    }else{
        printf("ERROR!\n");
    }

    return 0;
}
