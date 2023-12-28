#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=8;
    int b=4;
    int value;
    additionprogram(a,b);
    substractionprogram(a,b);
    multiplictionprogram(a,b);
    divisionprogram(a,b);
    modulusprogram(a,b);
    increementprogram(a);
    decreementprogram(a);
    logicalprogram(a,b);
    return 0;
}
    int additionprogram(int a,int b)
    {
        int value=a+b;
        printf("\n addition\n add value  %d\n",value);
    }

     int substractionprogram(int a,int b)
     {
         int value=a-b;
         printf("\n substract\n sub value %d\n",value);

     }

      int multiplictionprogram(int a, int b)
      {
          int value=a*b;
          printf("\n multipliction\n mutltipliction value %d\n",value);

      }
       int divisionprogram(int a, int b)
       {
           int value=a/b;
           printf ("\n division\n division value %d\n",value);

       }

       int modulusprogram(int a, int b)
       {
           int value=a%b;
           printf("\ modulus\n modulus value %d\n",value);
       }

        int increementprogram(int a)
        {
            a++;
            printf("\n increement\n increement value %d\n",a);

        }

         int decreementprogram(int a)
         {
             a--;
             printf("\n decreement\n decreement value %d\n",a);

         }
         int logicalprogram(int a,int b)
         {
             printf("LOGICAL: \n\t AND logic gate :%d\n",a<10 && b>1);
             printf("OR logic gates :%d\n",a>3 || b>1);
              printf("NOT logic gates :%d\n",!(a>3 && b>1));
         }
