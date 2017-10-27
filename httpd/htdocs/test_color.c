#include<stdio.h>
#include<unistd.h>

int main()
{
    char *path = "/home/51cc/Desktop/tinyhttpd-master/htdocs/check.cgi";
    execl(path,path,NULL);
    return 0;
}
