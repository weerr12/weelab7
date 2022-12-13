#include<iostream>

using namespace std;
//การเติมคำตอบในช่องนี้ ขอให้เติมเฉพาะ Function adiff() เท่านั้น โดยห้ามเติม Function main() มาในนี้

int adiff(int A,int B){
    int z;
    if(A>B){
        z=(A-B)%360;
    }else{
        z=(B-A)%360;
    }
    if(z > 180){
        return 360-z;
    }
    return z;
}

int main(){
  cout << adiff(180,270)<<endl;
  cout << adiff(210,45)<<endl;
  cout << adiff(0,360)<<endl;
  cout << adiff(10,350)<<endl;
  cout << adiff(95,260)<<endl;
  cout << adiff(90,-90)<<endl;
  cout << adiff(1000,280)<<endl;
  cout << adiff(60,244);
}
