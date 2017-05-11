#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "tstack1New.h"

int main()
{
   Stack Stack5( 5 );
   double f = 1.1;
   
   while ( Stack5.push( f ) ) { // success true returned
      cout << f << ' ';
      f += 1.1;
   }

   cout << "\nStack is full.\n";

   while ( Stack5.pop( &f ) )  // success true returned
      cout << f << ' ';

   cout << "\nStack is empty.\n";

   Stack Stack10( 10 );
   f = 1.1;
  
   while (Stack10.push(f ) ) { // success true returned
      cout << f << ' ';
      f += 1.1;
   }
   cout << "\nStack is full.\n";
  

   while ( Stack10.pop( &f ) )  // success true returned
      cout << f << ' ';

   cout << "\nStack is empty.\n";
   return 0;
}



