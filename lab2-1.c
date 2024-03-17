#include <stdio.h>
int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;
 
    printf("----- [KIMGUNWOO]   [201041010] -----\n");

    printf("Size of char: %ld byte\n",sizeof(charType)); //char 타입의 chartype 변수의 용량
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //int 타입의 integertype 변수의 용량
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //float 타입의 floattype 변수의 용량
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //double 타입의 doubletype 변수의 용량
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); //char의 용량
    printf("Size of int: %ld bytes\n",sizeof(int));  //int의 용량
    printf("Size of float: %ld bytes\n",sizeof(float)); //float의 용량
    printf("Size of double: %ld bytes\n",sizeof(double));   //double의 용량
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); //char 자료형 포인터 변수의 용량 (포인터 변수는 주소 값을 저장하기때문에 용량이 다 같다)
    printf("Size of int*: %ld bytes\n",sizeof(int*));   //int 자료형 포인터 변수의 용량
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //float 자료형 포인터 변수의 용량
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //doulbe 자료형 포인터 변수 용량

    return 0;
}