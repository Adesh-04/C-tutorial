#include <stdio.h>

#define S "%s \n"
#define W "Hello"

void test1(){
    int a = 054; // octal representation
    printf("%d\n",a);
    a = 52;
    printf("%o",a);

    a= 0x43FF;  // hexadecimal representation
    printf("\n%x\n", a);

    printf(S,W);
}

void test2(){
    printf("\n%d\n",printf("%s","hello"));
    printf("%.10s","helloqqqqqqqqq");
}

void test3(){
    char var = 255;
    var = var + 10;
    printf("%d",var);

    unsigned i = 1;
    int j = -4;
    printf("\n%u",i+j);
}

void test4(){
    
    
}


static int i;
static int i = 22;
static int i;

void main(){
    // test1();
    // test2();
    // test3();

    static int i;
    printf("%d",i);
}