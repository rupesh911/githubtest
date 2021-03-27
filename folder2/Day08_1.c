
#include<stdio.h>



//accessing the enum elements by creating enum variable
enum DEPARTMENTS{ADMIN=1,TRAINING,PLACEMENT};
//enum DEPARTMENTS is user defined datatype

int main(void)
{
   
    enum DEPARTMENTS d; //d is a variable of type enum DEPARTMENTS
    d=ADMIN; // ADMIN element value is stored inside d variable
    printf("value of variable d = %d",d);
    d=TRAINING;
    printf("\n value of variable d = %d",d);
    d=PLACEMENT;
    printf("\n value of variable d = %d",d);

    printf("\n size of enum = %d",sizeof(d));
    printf("\n size of enum = %d",sizeof(enum DEPARTMENTS));
    return 0;
}
