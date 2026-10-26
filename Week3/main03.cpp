#include <iostream>
using namespace std;

class One{       
     public :	
	 int x;	  
   void print2(){
    cout<<x<<endl;
   }
	 
     private:

     void print( )	
	 { cout << x << endl; }	
 }; 

int main ( ) {
      One obj;    
      obj.x = 5 ;   
      /*obj.print( ) ;  // What will happen?/ cant use print method bcs its private
*/
      obj.print2();
      return 0;

    }			