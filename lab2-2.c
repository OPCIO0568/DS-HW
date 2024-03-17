#include <stdio.h>
int main()
{
    int i;
    int *ptr;
    int **dptr;
    i = 1234;

    printf("[----- [KIMGUNWOO] [2021041010] -----]\n");

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i); //변수 i의 값
    printf("address of i == %p\n", &i); //변수 i의 주소값
    printf("value of ptr == %p\n", ptr); //ptr안에 있는 주소값
    printf("address of ptr == %p\n", &ptr); //ptr 주소값

    ptr = &i; /* ptr is now holding the address of i */ //ptr에 i 주소값 입력

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i); //변수 i의 값
    printf("address of i == %p\n", &i); //변수 i의 주소값
    printf("value of ptr == %p\n", ptr); //ptr안에 있는 i의 주소값
    printf("address of ptr == %p\n", &ptr); //ptr의 주소값
    printf("value of *ptr == %d\n", *ptr); //ptr안의 i의 주소값에 있는 i값

    dptr = &ptr; /* dptr is now holding the address of ptr */ //dptr에 ptr 주소값 입력

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i); //변수 i의 값
    printf("address of i == %p\n", &i); //변수 i의 주소값
    printf("value of ptr == %p\n", ptr); //ptr안에 있는 i의 주소값
    printf("address of ptr == %p\n", &ptr); //ptr의 주소값
    printf("value of *ptr == %d\n", *ptr); //ptr안의 i의 주소값에 있는 i값
    printf("value of dptr == %p\n", dptr); //dptr안에 ptr 주소값
    printf("address of dptr == %p\n", &dptr); //dptr의 주소값
    printf("value of *dptr == %p\n", *dptr); //dptr이 가르키는 ptr의 주소값
    printf("value of **dptr == %d\n", **dptr); //dptr->ptr->i주소값 안에 든 i값

    *ptr = 7777; /* changing the value of *ptr */ //ptr를 통하여 i값 수정   ptr->i 통해서 수정

    printf("\n[after *ptr = 7777] \n"); 
    printf("value of i == %d\n", i); //변수 i의 값
    printf("value of *ptr == %d\n", *ptr); //ptr이 가르키는 주소값 안에 든 i값;
    printf("value of **dptr == %d\n", **dptr);//dptr->ptr->i 에 든값

    **dptr = 8888; /* changing the value of **dptr */ //dptr을 통해서 i값 수정 dptr -> ptr -> i를 통해서

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); //변수 i의 값
    printf("value of *ptr == %d\n", *ptr); //ptr이 가르키는 주소값 안에 든 i값;
    printf("value of **dptr == %d\n", **dptr); //dptr->ptr->i 에 든값

    return 0;
}