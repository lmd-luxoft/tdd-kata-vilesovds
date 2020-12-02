#include "pch.h"
#include "Calculator.h"

int Calculator::Add(std::string expression)
{

    return 0;
}

int Calculator::Add(const char* expression)
{
    const char* delim = ",\n";
    char* dup = strdup(expression);
    int sum = 0;
    size_t len = strlen(expression);
    if (!len)
        return 0;
    if (strstr(dup, ",\n") != NULL)
        return -1;
    char* new_delim = strstr(dup, "//");
    if ((new_delim) && (new_delim == dup)) {
        if (strstr(dup, "\n") == NULL) {
            return -1;
        } else {
            char * dup2 = strdup(dup);
            strcpy(dup2, new_delim + 2);
            char *ch = dup2;
            while (*ch != '\n')
                ch++;
            *ch = 0;
            delim = dup2;

            dup = strstr(dup, "\n") + 1 ;

        }
    }
    
    char* operand  = strtok(dup, delim);
    while (operand != NULL){
        char* ch = operand;
        while (*ch) {
            if (!isdigit(*ch))
                return -1;
            ch++;
        }

        sum += atoi(operand);
        operand = strtok(NULL, delim);
    } 

    return sum;
}
