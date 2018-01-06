/* Design a data-structure SpecialStack (using the STL of stack) that supports all the stack operations like push(), pop(),
isEmpty(), isFull() and an additional operation getMin() which should return minimum element from the SpecialStack.
Your task is to complete all the functions, using stack data-Structure. - AMAZON*/

/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by Online Judge.*/


/*Complete the function(s) below*/

void push(int a)
{
     //add code here.
     s.push(a);
     
}
bool isFull(int n)
{
     if(s.size()==n) return true;
}
bool isEmpty()
{
    s.empty();
}
int pop()
{
    s.pop();
}
int getMin()
{
   //add code here.
   int min;
   min = s.top();
   while(!(s.empty())){
       if(min>s.top()){
           min=s.top();
           s.pop();
       }
       else
       {
           s.pop();
       }
   }
   return min;
   
}
