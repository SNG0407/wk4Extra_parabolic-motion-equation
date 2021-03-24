//포물선 운동을 하는 물체
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
const float PI = 3.141592;

int main()
{   //변수는 힘 / 각도 / 시간 / 거리
    float F, v, t, MaxD, MaxR;
    int rad[90] = {};
    float d[90] = {};
    float vH, vV;

    MaxD = 0; MaxR = 0;
    //물체를 지면과 +|세타| 각도의 방향으로 던졌다. 중력가속도는 -10m/s로 계산
    //rad = 30; //30도
    for (int i = 0; i < 90; i++) {
        v = 30; // 30m/s
        rad[i] = i + 1;
        vV = v * sin(rad[i] * PI / 180); // v의 수직 성분 = v sin(radian)
        t = vV / 10; // v가 0이 되는 t는 vsin(@)를 중력가속도로 나눈 것 
        //물체의 전체 운동 시간은 2t가 됨
        vH = v * cos(rad[i] * PI / 180); // v의 수평 성분 = v cos(dadian)
        d[i] = vH * 2 * t; // 물체가 낙하하는 위치까지의 거리는 수평방향 v와 총 운동 시간 2t의 곱
        cout << "물체의 속도 : " << v << "m/s" << endl;
        cout << "속도와 지면 사이의 각 : " << rad[i] <<"radian"<< endl;
        cout << "물체의 운동 시간 : " << 2 * t << "s" << endl;
        cout << "처음 위치에서 물체가 떨어진 위치까지의 거리 : " << d[i] << "m" << endl;
        if (MaxD < d[i]) {
            MaxD = d[i];
            MaxR = rad[i];
        }
    }
   // system("cls");
    cout << "최대 거리 Max d = " << MaxD << endl;
    cout << "최대 거리 Max radian = " << MaxR << endl;

    
    return 0;
}
