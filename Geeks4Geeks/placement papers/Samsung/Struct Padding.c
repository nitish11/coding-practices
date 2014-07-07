#include <stdio.h>

// Alignment requirements
// (typical 32 bit machine)

// char         1 byte
// short int    2 bytes
// int          4 bytes
// double       8 bytes

// structure A
typedef struct structa_tag
{
   char        c;
   short int   s;
} structa_t;

// structure B
typedef struct structb_tag
{
   short int   s;
   char        c;
   int         i;
} structb_t;

// structure C
typedef struct structc_tag
{
   char        c;
   double      d;
   int         s;
} structc_t;

// structure D
typedef struct structd_tag
{
   double      d;
   int         s;
   char        c;
} structd_t;


// structure E
typedef struct structe_tag
{
   int         s;
   char        c;
   double      d;
} structe_t;

// structure F
typedef struct structf_tag
{
   char        c;
   int         s;
   double      d;
} structf_t;


// structure g
typedef struct structg_tag
{
   short   c;
} structg_t;

int main()
{
   printf("sizeof(structa_t) = %d\n", sizeof(structa_t));
   printf("sizeof(structb_t) = %d\n", sizeof(structb_t));
   printf("sizeof(structc_t) = %d\n", sizeof(structc_t));
   printf("sizeof(structd_t) = %d\n", sizeof(structd_t));
   printf("sizeof(structe_t) = %d\n", sizeof(structe_t));
   printf("sizeof(structf_t) = %d\n", sizeof(structf_t));
   printf("sizeof(structg_t) = %d\n", sizeof(structg_t));

   getchar();
   return 0;
}
