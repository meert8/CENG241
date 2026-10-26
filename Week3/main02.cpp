#include <iostream>
using namespace std;

class One{       
     public :	
	 int x;	  
	 void print( )	
	 { cout << x << endl; }	
 }; 

int main ( ) {
      One obj;    
      //obj.print(); trash value output bcs x didnt assigned yet.
      cin>>obj.x;   
      obj.print( ) ;

      return 0;

    }			