#include <iostream> 

using namespace std; 

int main()
{
   char a[] = "Wait!";
   
   
   cout << "Hello!" << endl;
   cout << "Bye!" << endl;
   cout << a << endl;
   
   cout << &"Hello!" << endl;
   cout << &"Bye!" << endl;
   cout << (void *)[0] << endl;
}
