#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Dane{
    int osoba;
    int nalesniki;
};

bool compareDane(const Dane& a, const Dane& b)
{
    return a.nalesniki>b.nalesniki;
}

int main () {
    
    vector<Dane> osoby;
    
    for (int i=1; i<=10; i++) {
        Dane dane;
        dane.osoba = i;
        int a;
        cout<<"Ile zjadła naleśników "<<i<<" osoba: ";
        cin>>a;
        dane.nalesniki = a;
        cout<<endl;
        osoby.push_back(dane);
    }
    
    sort(osoby.begin(), osoby.end(), compareDane);
    
    for (int i = 0; i<osoby.size() ; i++) {
        cout<<"Osoba "<<osoby[i].osoba<<" zjadła "<<osoby[i].nalesniki<<" naleśników."<<endl;
    }
    return 0;
}
