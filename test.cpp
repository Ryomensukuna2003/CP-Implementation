// // 1. Program to create and open a file using system calls
#include <stdio.h>
#include <fcntl.h>
int main()
{
    int n, m;
    n = open("new_file", O_RDONLY);
    printf("file descriptor is %d \n", n);
    m = open("new_file1", O_CREAT | O_WRONLY, 0777);
    printf("file descriptor is %d \n", m);
    return 0;
}

// 2. Program to read from console and write to console
#include <stdio.h>
#include <fcntl.h>
int main()
{
    int n, m;
    char buffer[100];
    n = write(1, "Hello World", 11);
    printf("No of bytes written %d \n", n);
    m = read(0, buffer, 12);
    printf("No of bytes read %d \n", m);
}

// 3. Program to append a file
#include <stdio.h>
#include <fcntl.h>
int main()
{
    int a, b, c, d;
    char buffer[100];
    a = open("new_file2.txt", O_WRONLY | O_APPEND, 0777);
    printf("file descriptor is %d \n", a);
    b = read(0, buffer, 10);
    c = write(a, buffer, b);
    printf("value of b:%d , c: %d", b, c);
}

// 4. Program to read and write from and to a file
#include <stdio.h>
#include <fcntl.h>
int main()
{
    int a, b, c, d;
    char buffer[100];
    a = open("new_file2", O_CREAT | O_WRONLY, 0777);
    printf("file descriptor is %d \n", a);
    b = read(0, buffer, 10);
    c = write(a, buffer, b);
    printf("the value of b: %d , c:%d \n", b, c);
    return 0;
}
