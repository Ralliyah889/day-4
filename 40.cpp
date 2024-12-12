#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[10]="hello";
    char str2[10]="world";
    char str3[10];
    
    strcpy(str3,str1);
    cout<<"strcpy(str3,str1):"<<str3<<endl; 

    len=strlen(str1);
    cout<<"strlen(str1):"<<len<<endl;
    return 0;

}