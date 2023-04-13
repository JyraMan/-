#include <stdio.h>

typedef struct
{
        char str[10];
        int num;
} NumRepr;
void format ( NumRepr* number )
{
        sprintf( number->str, "%3d", number->num );
}
int main()
{
        NumRepr number = { .num = 1025 };
        format ( &number );
        printf ( "str: %s\n", number.str );
        printf ( "num: %d\n", number.num );
        return 0;
}
