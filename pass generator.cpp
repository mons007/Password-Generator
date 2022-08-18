#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
        int a;
	    string data,pass;
	cout<<"Welcome To Pass God\nHere we are go to generate passwords\nPress Any Key to Stop";
		cout<<"\nPress 1 To Start:";
	    cin>>a;
		data="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	         "abcdefghijklmnopqrstuvwxyz"
	         "9876543210"
	         "~!@#$%^&*()_+`-=[]\\;',./{}|:<>?";
		srand(time(NULL));
		if(a==1){
		    for(int i=0;i<=15;i++){
			pass=pass+data[rand()%93];
		    }
			cout<<"Password Is:"<<pass;
		}
		else{
		    exit(0);
		}
}
