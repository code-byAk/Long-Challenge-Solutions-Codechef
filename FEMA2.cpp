#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
using namespace std;

int a[100000];
int main() {
    int T;
    
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	cin>>T;
	while(T--)
	{
	    int N1;
        int K1;
	    cin>>N1;
	    cin>>K1;
	    string str1;
	    cin>>str1;
	    //cout<<str1<<endl;
	    if(str1[0]==':')
	    a[0]=1;
	    int k=0;
	    int ni=0;
	    int nm=0;
	    if(str1[0]=='M')
	    nm++;
	    if(str1[0]=='I')
	    ni++;
	    for(int i=1;i<N1;i++)
	    {
				      if(str1[i]==':')
				        a[i]=a[i-1]+1;
				        else
				        a[i]=a[i-1];
				        if(str1[i]=='M')
				        nm++;
				        if(str1[i]=='I')
				        ni++;
		}
	/*	for(int i=0;i<N1;i++)
	    {
	         cout<<a[i]<<endl;
	    }*/
	    
		k=std::min(ni, nm);
		
	//	cout<< k << endl;
		
		int mi;int ma;int cnt=0;int count =0;int power=0;
		int ip=0;int mp=0;int xp=-1;
		
		while(str1.find('I',ip)!=std::string::npos && str1.find('M',mp)!=std::string::npos)
		{
		   ip=str1.find('I',ip); 
		   mp=str1.find('M',mp); 
		   if(ip>=mp)
				    	{
				    	    ma=ip;
				    	    mi=mp;
				    	}
				    	else
				    	{
				    	    mi=ip;
				    	    ma=mp;
				    	}
			if(ip==-1 || mp==-1)
			break;
			xp=str1.find('X',mi);
			
			if(xp>mi && xp<ma)
				    	{
				    	    if(ip==mi)
				    	    	ip=xp+1;
				    	    if(mp==mi)
				    	    	mp=xp+1;
				    	    continue;
				    	}
				    	
			if(mi!=0)
				cnt=a[ma]-a[mi-1];
			else
				cnt=a[ma];
				
			power=(K1+1)-(ma-mi)-cnt;
		    //cout<<mi <<" "<<ma<<" "<<cnt<<" "<<power<<" "<<xp<<endl;
			if(power>0)
			{
				            
				    		count++;power=0;
				    		str1.replace(ip, 1,"_");
				    		str1.replace(mp, 1,"_");
				    		//cout<<str1<<endl;
			}
			else
				    	{
				    	    if(ip>mp)
				    	    mp++;
				    	    else if(mp>ip)
				    	    ip++;
				    	}	
				    //	cout<<ip <<" "<<mp<<endl;
		}
		cout<< count << endl;
		for(int i=0;i<N1;i++)
	    {
	         a[i]=0;
	    }
		}
}
