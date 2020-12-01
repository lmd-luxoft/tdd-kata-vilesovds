#include "pch.h"
#include "Calculator.h"

int Calculator::Add(std::string expression)
{

    return 0;
}

int Calculator::Add(char* expression)
{
    const char* delim = ",";
    char* dup = strdup(expression);
    int sum = 0;
    int num_counts = 0;
    size_t len = strlen(expression);
    if (!len)
        return 0;
    char* operand  = strtok(dup, delim);
    while (operand != NULL){
        char* ch = operand;
        while (*ch) {
            if (!isdigit(*ch))
                return -1;
            ch++;
        }

        sum += atoi(operand);
        num_counts++;
        if (num_counts > 3)
            return -3;
        operand = strtok(NULL, delim);
    } 

    return sum;
}
