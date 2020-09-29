//cpp
#include"decision.h"
#include<iostream>


std::string get_letter_grade_using_if(int grade)
{
    std::string letter_grade;

    if (grade>89 && grade<101)
    {
        letter_grade = "A";
    }
    else if (grade>79 && grade<90)
    {
        letter_grade = "B";
    }
    else if (grade>69 && grade<80)
    {
        letter_grade = "C";
    }
    else if (grade>59 && grade<70)
    {
        letter_grade = "D";
    }
    else
    {
        letter_grade = "F";
    }
    
    return letter_grade;
}

std::string get_letter_grade_using_switch(int grade)
{
    std::string return_grade;
    grade = grade / 10;

    switch (grade)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        return_grade = "F";
        break;
    case 6:
        return_grade = "D";
        break;
    case 7:
        return_grade = "C";
        break;
    case 8:
        return_grade = "B";
        break;
    case 9:
        return_grade = "A";
        break;
    case 10:
        return_grade = "A";
        break;
    default:
        return_grade = "Invalid grade";
        break;
    
    return return_grade;
    }
}
