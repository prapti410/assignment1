
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s1;
    int key,j=0;
    cout<<"enter string:";
    getline(cin,s1);
    int l=s1.length();
    for(int i=0; i<l; i++)
    {
        int input=s1[i];
        if(input >=65 && input<=90)
        {
            for(int j=65; j<90; j++)
            {
                if(i%2==0)
                {
                    cout<<"#";
                    if( input%j==0)
                    {
                        break;
                    }

                }
                else
                {
                    cout<<"$";
                    if(input%j==0)
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            for(int j=97; j<122; j++)
            {
                if(i%2==0)
                {
                    cout<<"#";
                    if( input%j==0)
                    {
                        break;
                    }

                }
                else
                {
                    cout<<"$";
                    if(input%j==0)
                    {
                        break;
                    }
                }
            }
        }



    }
}