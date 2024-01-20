#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int score[n];
  int avg = 0;

  for(int i=0;i<n;i++){
    cin >> score[i];
  }

  for(int i=0;i<n;i++){
    avg+=score[i];
  }

  if((avg/n)>60){
    cout << "no";
  }
  else{
    cout << "yes";
  }

  return 0;
}
