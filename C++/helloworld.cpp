//Program to print 'HELLO WORLD!' ft. Recurtion
#include<iostream>
#include<conio.h>
char a[]="HELLO WORLD!";
void prix (int);

int main()
{
    int i=0;
    prix(0);
    return(0);
}

void prix (int i)
{
    if(i==12){}
    else
    {
        std::cout<<a[i];
        i++;
        prix(i);
    } 
}

// Aachman Mittal
// 9919103218
