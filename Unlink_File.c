#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int Ret = 0;

     Ret = unlink("Demo.txt");
     if(Ret == -1){
        printf("Unable to deletefile\n");
        return -1;
     }

     else 
     {
        printf("File gets succesfully deleted\n");
     }



    return 0;

}