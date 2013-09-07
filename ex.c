#include <stdio.h>
 
void a0()
{}
 
void a_special( const char * caller_name )
{
    printf( "a was called from %s \n", caller_name );
    a0();
}
 
#define a() a_special( __FUNCTION__ )
 
void b()
{
    a();
}
 
void c()
{
    a();
}
 
int main()
{
    b();
    c();
}
/* 
$ a.exe
a was called from b
a was called from c
 
 * */
