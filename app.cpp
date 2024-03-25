
#include <iostream>
#include <string>
using  namespace std;


  
void name(string x) {
if (x.length() > 5)
  {
    cout << x[0];
    cout << x.length() - 2;
    cout << x [x.length() - 1];
    
  }
}

int main()
{
    string w;
    getline(cin , w);
    name(w);

    return 0;
}

  