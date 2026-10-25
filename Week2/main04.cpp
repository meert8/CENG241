#include <iostream>
using namespace std;

int x = 77 ; 
string y = "Mert";
					
int main() {	
     int x = 99;    
     string y = "Ceng"; 					
     
     cout << "x local=" << x << endl;			
     cout << "x global=" << ::x << endl;	
     cout<<"y local= "<<y<<endl;
     cout<<"y global= "<<::y<<endl;	
}