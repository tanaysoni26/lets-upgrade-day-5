#include<iostream>
using namespace std;

int main(){
char encrypt[] ={'d','n','o','t','q'};
int len= sizeof(encrypt)/sizeof(encrypt[0]);
//  cout<<len;
char decrypt[len];
int prev=1;
for(int i=0; i<len; i++){
char ch= encrypt[i]; 
int asciiVal= ch;
int actualVal= asciiVal- prev;
while(actualVal<97){
actualVal= actualVal+26;
}
char originalChar= (char)actualVal;
decrypt[i]=originalChar;
prev=asciiVal;
}
for(int i=0;i<len;i++){
cout<<decrypt[i];

}    
}