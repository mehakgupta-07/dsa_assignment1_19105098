
#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

// MehakGupta_19105098
// c++ program for implementation of string stack
class Stack {
    int top; // top of element

public:
    string a[MAX]; // Maximum size of Stack

    Stack() { 
        top = -1;
    }   // user defined constructor
    
    bool push(string s);
    string pop();
    string peek();
    bool isEmpty();
    void display();
};

bool Stack::push(string s)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
        // return false if stack is full
    }
    else {
        a[++top] = s;
        cout << s << " pushed into stack\n";
        return true;
        // push string into stack if space is available
    }
}

string Stack::pop()
{
    if (top < 0) {
        
        cout<< "Stack Underflow"<<endl;
        // display message if stack is empty
    }
    else {
        string x = a[top--];
        cout<< (x + " popped from stack")<<endl;
        // remove element if stack is non-empty
    }
    return "";
}
string Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        // display message if stack is empty
        return "";
    }
    else {
        string x = a[top];
        // return element if stack is non-empty
        return x;
    }
}

void Stack:: display()
{
    if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
        cout<<a[i]<<" ";
      cout<<endl;
   } 
   else{
    cout<<"Stack is empty"<<endl;
    // display message if stack is empty
   }
   
}


int main()
{
    class Stack s;
    cout<<"Implementation of Stack"<<endl;
    
    bool exit  = false;
    while(!exit){
        cout<<"Choose from options: "<<endl;
        cout<<"1. push"<<endl;
        cout<<"2. pop"<<endl;
        cout<<"3. peek"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. exit"<<endl;
        int x;
        cin>>x;
        if(x==1){
            cout<<"Enter the string:"<<endl;
            string st;
            cin>>st;
            s.push(st);
            cout<<st<<" pushed into the stack"<<endl;
            
        }
        else if(x==2){
            s.pop();
        }
        else if(x==3){
            cout << "Top element is : " << s.peek() << endl;
        }
        else if(x==4){
            s.display();
        }
        else{
            exit = true;
        }
    }
    

    return 0;
}