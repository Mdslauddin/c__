#include<iostream>
using namespace std;
/*
class Demo{
 private : int a,b,c;
 friend int dostfunction(Demo);//friend function Declared
 };

int dostfunction(Demo x) //Definition
 {
  x.a=2;
  x.b=3;
  x.c=x.a+x.b;
  return (x.c);
 }
*/

/*
class Demo{
  private: int a,b;//private Variable
  
  void test(){ //private function
   cout<<"Enter two no : ";
    cin>>a>>b;
    cout<<a+b;
     }
   friend void dostfunction(Demo);//friend function Declare 
  
  };

void dostfunction(Demo x){
  x.test();
 
  }
*/

/*
class xyz;// forward declaration
class abc{
 private : int a;
 friend void fun(abc,xyz);//friend function declaration
 };

class xyz{
 private : int b;
 friend void fun(abc,xyz);// friend fucntion 

  };


void fun(abc t1, xyz t2){
 t1.a=2;
  t2.b=3;
  cout<<t1.a+t2.b;
  }
*/


int main()
{
 
 // private Member variable Access
 // ex.1 
 /*
   Demo obj;
   cout<<dostfunction(obj); 
   return 0;  */

 /* Demo obj;
  obj.test();
  dostfunction(obj);
   return (0);  */

/*
 abc obj1;
 xyz obj2;
 fun(obj1,obj2);
*/

 }