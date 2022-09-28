#include <iostream>
using namespace std;
class hinhchunhat{
private:
    int dai,rong;
public:
    void setDai(int dai){
        this->dai=dai;
    }
    int getDai(){
        return dai;
    }
    void setRong(int rong){
        this->rong=rong;
    }
    int getRong(){
        return rong;
    }
    hinhchunhat(){
        dai=-1;
        rong=-1;
    }
    int dientich(){
        return dai*rong;
    }
    int Chuvi(){
        return (dai+rong)*2;
    }
};
class hinhvuong: public hinhchunhat {

};
signed main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
        hinhvuong oj1;
        cout<<"Canh hinh vuong: ";
        int inttmp;
        cin>>inttmp;oj1.setDai(inttmp);
        oj1.setRong(inttmp);
        cout<<"Chu vi hinh vuong la: "<<oj1.Chuvi()<<"\nDien tich hinh vuong la: "<<oj1.dientich()<<"\n";
}
