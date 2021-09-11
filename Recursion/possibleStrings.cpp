/*
Given a string str your task is to complete the function spaceString which takes only one argument the string str and  finds all possible strings that can be made by placing spaces (zero or one) in between them. 

For eg .  for the string abc all valid strings will be
            abc
            ab c
            a bc
            a b c

Example 1:

Input:
str = abc
Output: abc$ab c$a bc$a b c$
Example 2:

Input:
str = xy
Output: xy$x y$


*/

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define endl '\n'


void util(vector<string> &vec,char str[],char buff[ ],int i,int j,int n)
{
        if(i==n )
        {
            buff[j]='\0';
            vec.push_back(buff);
            return;
        }

        buff[j]=str[i];
        util(vec,str,buff,i+1,j+1,n);

        //or space
        buff[j]=' ';
        buff[j+1]=str[i];
        util(vec,str,buff,i+1,j+2,n);

}


vector<string>  spaceString(char str[])
{
    char *buff = new char[2*strlen(str)-1];
    vector<string> vec;
    buff[0]=str[0];
    util(vec,str,buff,1,1,strlen(str));
    return vec;
}

int main(){

    





    return 0;
}