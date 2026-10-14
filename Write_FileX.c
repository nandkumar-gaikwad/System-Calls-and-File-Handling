#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{

    int fd = 0;

    char Arr[] = "Marvelloueus Infosystem";
    fd = open("Hello.txt",O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;

    }
else
{
    printf("file gets open with fd : %d\n",fd);
    write(fd,Arr,10);

    close(fd);
}



    return 0;
}
