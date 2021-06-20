#include <iostream>
#include <vector>
#include <algorithm>
#include<vector> 
#include <iterator>

using namespace std;

//ostream_iterator 

int main()  

{  
   ostream_iterator<int> out(cout,",");  

   *out = 5;  

   out++;  

   *out = 10;  

   out++;  

   *out = 15;  
   out++;
   *out=20;
   getch();
   return 0;  

}

// I love Uzbekistan :)
