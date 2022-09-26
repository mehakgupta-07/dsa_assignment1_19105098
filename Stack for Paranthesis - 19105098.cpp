
#include <bits/stdc++.h>
using namespace std;

// MehakGupta 19105098
// C++ program to check for balanced paranthesis
#define MAX 555
class Stack {
    int top; // top of stack
  
public:
    char  a[MAX]; // Maximum size of Stack
  
    Stack() { 
        top = -1; 
        // constructor
    }
    bool push(char x);
    char pop();
    char peek();
    bool isEmpty();
};
  
bool Stack::push(char x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        // return false if stack is full
        return false;
    }
    else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        // push character into stack if space is available
        return true;
    }
}
  
char Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        // display message if stack is empty
        return 0;
    }
    else {
        char x = a[top--];
        // remove element if stack is non-empty
        return x;
    }
}
char Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        // display message if stack is empty
        return 0;
    }
    else {
        char x = a[top];
        // return element if stack is non-empty
        return x;
    }
}
  
bool Stack::isEmpty()
{
    return (top < 0);
    // check if stack has no elements
}

// check for balanced paranthesis using stack
bool balancedParanthesis(string expr)
{
    class Stack temp;
    for (int i = 0; i < expr.length(); i++) {
        if (temp.isEmpty()) {
             
            temp.push(expr[i]);
        }

        // removing out element from stack in case the paranthesis matches 
        else if ((temp.peek() == '(' && expr[i] == ')')
                 || (temp.peek() == '{' && expr[i] == '}')
                 || (temp.peek() == '[' && expr[i] == ']' )) {
             
            temp.pop();
        }
        else {
            temp.push(expr[i]);
        }
    }
    // empty stack indicates balanced paranthesis
    if (temp.isEmpty()) {
        return true;
    }
    return false;
}

int main(){
   // question 1 : used stack for a string in ques 2 implementation
   // question 2
   string inputstr;
   cout<<"Enter the string: ";
   cin>>inputstr;
   if(balancedParanthesis(inputstr)) cout<<"The string has balanced paranthesis."<<endl;
   else cout<<"The string does not have balanced paranthesis."<<endl;

}