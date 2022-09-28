#include <iostream>
using namespace std;
const int mod=1e9+7;
class So_nguyen_duong{
private:
    int giatri;
public:
    void nhapGiatri(){
        cin>>giatri;
    }
    void xuatGiatri(){
        cout<<giatri;
    }
    long long giaithua(){
        long long temp{giatri};
        for (int i=2;i<giatri;i++){
            temp%=mod;
            temp*=i;
        }
        return temp%mod;
    }
};
signed main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
cout<<"Nhap n: ";
        int n;cin>>n;
        long long res{};
    So_nguyen_duong *oj1= new So_nguyen_duong[n];
    for (int i=0;i<n;i++){
        cout<<"nhap vao gia tri thu "<<i+1<<": ";
        (oj1+i)->nhapGiatri();
        res+=(oj1+i)->giaithua();
        res%=mod;
    }
    cout<<"Tong giai thua cua ";
    for (int i=0;i<n;i++) {
        (oj1+i)->xuatGiatri();
        cout<<"!";
        cout<<"+="[i==n-1];
    }
    cout<<res;
    delete [] oj1;
}
