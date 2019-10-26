#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() {
	int t,b,i,j,count=0;
    cin>>t;
	int c[t];
	for(i=0;i<t;i++)
	{
		count=0;
		char a[100000];
		cin>>a;
		b=strlen(a);
		for(j=0;j<b-1;j++)
		{
			if((a[j]=='A' && a[j+1]=='A')||(a[j]=='B' && a[j+1]=='B'))
				count++;
		}
        c[i]=count;
	}
	for(i=0;i<t;i++)
		cout<<c[i]<<endl;
	}
