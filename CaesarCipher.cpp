#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<cstring>
#include <algorithm>
using namespace std;

int main(){
    int n,i,k,r,a;
    string s;
    cin >> n;
    cin >> s;
    cin >> k;
    while(k>26)
    {
    	k=k-26;
    }
    for(i=0;i<s.length();i++)
    {
    	if((s[i]>=65 && s[i]<=90))
    	{
    		a=s[i]+k;
    		if(a>90)
    		{
    			r=a-90;
    			s[i]=64+r;
    		}
    		else
    			s[i]=a;

    	}
    	if(s[i]>=97 && s[i]<=122)
    	{
    		a=s[i]+k;
    		if(a>122)
        	 {
    		  	r=a-122;
    		   	s[i]=96+r;
    		 }
    		else
    			s[i]=a;
    	}
    }
    cout<<s;
    return 0;
}
