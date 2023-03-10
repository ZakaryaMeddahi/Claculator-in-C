#include <stdio.h>
#include <string.h>

float getResult(char *firstOper, char *oper, char *secondOper);
float toFloat(char *value);

int main()
{
    char firstOperation[4], secondOperation[4];
    char operation[2];

    printf("Input an Operation (with space between characters): ");
    scanf("%s", firstOperation);
    scanf("%s", operation);
    scanf("%s", secondOperation);

    printf("%s %s %s = ", firstOperation, operation, secondOperation);

    printf("%.2f\n", getResult(firstOperation, operation, secondOperation));

}

float getResult(char *firstOper, char *oper, char *secondOper)
{
    float result;
    float firstNumber = toFloat(firstOper);
    float secondNumber = toFloat(secondOper);

    switch(oper[0]) {
        case '*':
            result = firstNumber * secondNumber;
            break;
        case '/':
            result = firstNumber / secondNumber;
            break;
        case '+':
            result = firstNumber + secondNumber;
            break;
        case '-':
            result = firstNumber - secondNumber;
            break;
    }

    return result;
}

float toFloat(char *value)
{
    float num = 0;

    for(int i = 0; i < strlen(value); i++)
    {
        if(i > 0)
            num *= 10;
        
        switch (value[i])
        {
            case '1':
                num += 1;
                break;
            case '2':
                num += 2;
                break;
            case '3':
                num += 3;
                break;
            case '4':
                num += 4;
                break;
            case '5':
                num += 5;
                break;
            case '6':
                num += 6;
                break;
            case '7':
                num += 7;
                break;
            case '8':
                num += 8;
                break;
            case '9':
                num += 9;
                break;
    
            default:
                break;
        }
    }

    return num;
}