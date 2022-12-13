#include<iostream>

using namespace std;
//การเติมคำตอบในช่องนี้ ขอให้เติมเฉพาะ Function adiff() เท่านั้น โดยห้ามเติม Function main() มาในนี้

int adiff(int x,int y){
    if(x>y){
        return (x-y)%360;
    }else{
        return (y-x)%360;
    }
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
