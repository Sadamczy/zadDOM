#include <iostream>

using namespace std;

int main()
{
    int a,x;
    cout<< "podaj liczbe "<<endl;
    cin>> a;
    cout<< "ktore zadanie aby wybrac: zad 1 kliknij 1, zad 2 kliknij 2"<<endl;

    cin>> x;

        switch (x)
            {case 1:
                if(a%3==0) cout<< "tak";
                    else cout<< "nie";
                        break;
            case 2:
                if(a>=10 && a<=999 && a%3==0) cout<< "tak";
                    else cout<< "nie";
                        break;}


    return 0;
}
