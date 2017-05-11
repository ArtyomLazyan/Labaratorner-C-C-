#ifndef TSTACK1_H
#define TSTACK1_H

typedef double T;

class Stack {
public:
   Stack( int  );    //  constructor
   ~Stack() {cout << "In destructor.\n"; delete [] stackPtr; } // destructor
   bool push( T ); // push an element onto the stack
   bool pop( T* );        // pop an element off the stack
private:
   int size;             // # of elements in the stack
   int top;              // location of the top element
   T *stackPtr;          // pointer to the stack

   bool isEmpty()  { return top == 0; }      // utility
   bool isFull()  { return top == size; } // functions
};

// Constructor with default size 10
Stack::Stack( int s )
{
   cout << "In constructor.\n";
   size = s;  
   top = 0;               // Stack is initially empty
   stackPtr = new T[ size ]; // allocate space for elements
}

// Push an element onto the stack
// return 1 if successful, 0 otherwise
bool Stack::push(  T pushValue )
{
   if ( !isFull() ) {
      stackPtr[ top++ ] = pushValue; // place item in Stack
      return true;  // push successful
   }
   return false;     // push unsuccessful
}

// Pop an element off the stack
bool Stack::pop( T * popValue )
{
   if ( !isEmpty() ) {
      *popValue = stackPtr[ --top ];  // remove item from Stack
      return true;  // pop successful
   }
   return false;     // pop unsuccessful
}


#endif