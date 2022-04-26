#include<iostream>
using namespace std;

int main()
{ /*

while (condition)   
 {
   statements;
  +++or....


syntax :
  do{
  statements;
   }while(conditon);

 }


*/
  /*  
  int i=1;
  while(i<=10){
  cout<<i<<endl;
  i++;
 
  }  */

 // while , do while loop comparison 
 /* 
  int i=1;
  while(i>5){
   cout<<i<<endl;
  }*/

/*  int i=1;
 do{
  cout<<i<<endl; 
 
  }while(i>5);
  */


// do while loop 
// square program 
  int b=0; 
  int a; 
  do {

  cout<< "if you want to exit then press zero ";
   cout<<endl; 
    cout<<endl; 
     cout<<"enter any no : ";
    cin>>a; 
    b=a*a;
    cout<< "Result is :"<<b;
    cout<<endl; 

   }  while(b!=0);
    
    
    
    
    
    
    
    
    
    
    return 0;
}