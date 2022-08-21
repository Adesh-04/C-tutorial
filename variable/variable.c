#include <stdio.h>
#include <limits.h>

#include "data.c"
#include "../func/increment.c"

// Global declaration of variable p
int p = 8;

// Extern Var // a is defined in data.c
extern int a;

float consta(){
    float a = 22;
    int b = 7;
    float c = a/b;
    return c;
}

// #define is a preprocessor which defines macro named pi
#define PI consta()

// 2**(n)-1 for unsigned
// -[2**(n-1)] to +[2**(n-1)-1] for signed

// %d   for signed int 
// %u   for unsigned int
// %o   for octal int
// %x   for hexadecimal int
// %ld  for signed long int
// %lu  for unsigned long int 
// %lld for signed long long int
// %llu for unsigned long long int
// 1byte = 8bit

// signed int i == signed i


void main(){
    char a;
    // printf("%s",a);
    int var = 5;
    long var1 = 4;
    short var2 = 3;
    // printf("%d%d%d ",sizeof(var),sizeof(var1),sizeof(var2));

    unsigned int lol = -22;
    signed int lol2 = -21;
    // printf("%u %d ",lol,lol2);

    unsigned short int lol3 = -172;
    signed short int lol4 = -171;
    var = SHRT_MIN;
    var1 = SHRT_MAX;
    // printf("%d %d ",lol3,lol4);
    // printf("%d %d ",var,var1);

    lol3 = SHRT_MAX;
    lol4 = 35538;
    var2 = lol4%lol3;
    // printf("%d ",var2);
    // printf("%d",lol4);

    void character();
    void float_type();

    // character();
    // float_type();

    // Types of Variables i.e. Variable Modifiers
    void extern_type();
    void register_type();
    void static_type();
    void const_type();

    // extern_type();
    // register_type();
    // static_type();
    // const_type();


}

void character(){

    // %c for signed character  --> -128 to 127
    // %c for unsigned character-->   0 to 255
    // %s for string character

    char var = 128;
    char var1 = -2;
    // printf("%c",var);
    // printf("%c",var1);

    // printf("%s \n%-10s%s","Hello","Hello","Hello");

    // printf("%d ", printf("%s ", "Hello World12"));
}

void float_type(){

    // float have 8 digit precision
    // double have 16 digit precision
    // long double have 19 digit precision

    // %f for float
    // %lf for double
    // %Lf for long double

    float var1;         // single precision floating number
    double var2;        // double precision floating number
    long double var3;   // Extended precision floating number
    // printf("%d %d %d",sizeof(var1),sizeof(var2),sizeof(var3));

    var1 = 1.2345678901234567890;
    var2 = 1.2345678901234567890;
    var3 = 1.2345678901234567890;

    // printf("%.19f %.19f %.21Lf ",var1,var2,var3);

    int lol = 11/9;
    float lol1 = 41/9;
    float lol2 = 4.0/9; // normally 4.0 and 9.0 are doubles
    float lol3 = 4/9.0; // we can make them float by 4.0f and 9.0f

    // printf("%d %f %f %f ", lol,lol1,lol2,lol3 );


}

void extern_type(){
    // normal variables are declared and defined
    // i.e declared and allocated some memory space
    // Extern only declares the variable 
    // a is declared at top
    printf("%d",a);

    extern int p;
    printf("%d",p);

}

void register_type(){
    // Stores variable in Register 
    // Refer memory.txt
    register int re ;
    printf("%d",re);

}

void static_type(){
    // increment is included at top
    int value;
    value = increment();
    value = increment();
    value = increment();

    printf("%d",value);

}

void const_type(){
    
    const int e = 2.71;

    printf("%d \n",e);
    printf("%.9lf",PI);
}


