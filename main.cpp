//  ConstanteMatematica
//  Created by misael rivera on 30/08/17.

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    float f=1, i, j , n, e = 0;
    cout << "\t Constante Matematica \n";
    cout << "\t --------------------- \n";
    cout<< "Ingrese numero al que quiere llegar: \n ";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {   for(j=1;j<=i;j++)
        {
            
            f*= j;
        }
        e += (1/f);
        f=1;
    }
    e +=1;
    cout<<"Constante matematica: "<<e;
    //Los primeros términos suman: 1 + 1 + 1/2 + 1/6 + 1/24 + 1/120 = 2,718055556

    return 0;
}
