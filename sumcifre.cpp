#include <iostream>

using namespace std;

void sumcif(int n, int &s)

{

    if (n==0)

       s = 0;

    else {

        sumcif((n/10),s);

        s = s +(n%10);

       
    }

        
        
}

int main()
 {

    int s;

    sumcif(29, s);

    cout<<s;

    return 0;

}