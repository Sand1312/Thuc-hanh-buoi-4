#include <iostream>
using namespace std;
class Tam_giac{
private:
    float Canhday,Chieucao;
public:
    void set(){
        cin>>Canhday>>Chieucao;
    }
    float calS(){
        return 0.5*static_cast <float>(Canhday)*Chieucao;
    }
    void show(){
        cout<<"Tam giac co canh day = "<<Canhday<<" chieu cao = "<<Chieucao<<" dien tich ="<<calS();
    }
};
signed main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cout<<"Nhap n: ";
    int n;cin>>n;
    Tam_giac *oj1= new Tam_giac[n];
    float m{-1};
    int index{};
    for (int i=0;i<n;i++) {
        cout<<"Nhap Canh day, Chieu cao tam giac thu "<<i+1<<" :";
        (oj1+i)->set();
        if ((oj1+i)->calS()>m){
            m=(oj1+i)->calS();
            index=i;
        }
    }
    (oj1+index)->show();cout<<" la tam giac co dien tich lon nhat";
    delete [] oj1;
}
