#include "stonewt.h"

int main(){
    using namespace std;
    Stonewt s1(2, 0.3);
    Stonewt s2(11.0);
    Stonewt s3(12.4);
    Stonewt s_arr[6] = {s1, s2, s3};
    for(int i = 3; i < 6; i++){
        double p;
        cout << "Please input pounds" << endl;
        cin >> p;
        Stonewt s(p);
        s_arr[i] = s;
    }

    Stonewt s_tmp(11);
    int num = 0;
    Stonewt min = s_arr[0];
    Stonewt max = s_arr[0];
    for(int i=1; i<6; i++){
        if(s_arr[i] < min){
            min = s_arr[i];
        }
        if(s_arr[i] > max){
            max = s_arr[i];
        }
        if(s_arr[i] == s_tmp){
            num++;
        }
    }
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
    cout << "num: " << num << endl;

    return 0;
}