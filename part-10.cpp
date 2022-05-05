#include<iostream>
using namespace std;
class demo{
  /*
  public:
  int a;//public memeber
 */

/*  private:
  int a; // private memeber  */

//Default private 
/*
  private :
  int a; //private member 
  public : // private : Not Access class ke body ke bahar 
  void getvalue(){
  a=2;
  cout<<a;
  }
 */ 
  };

int main()
{
    // Access specifier in c++ public,private,protected
  
    
    //public Access 
      
    /*  
   
    demo obj1;
    obj1.a=2;
    cout<<obj1.a;
    */
    
    // private Access
   /* demo obj;
    obj.a=2;//Not Access because private member 
    cout<<obj.a;  */
    
  //Default private
  /*  demo obj;
    obj.getvalue(); //indirect Access private member 
    */
    
    return 0;
}