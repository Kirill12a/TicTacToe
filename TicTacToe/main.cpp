//
//  main.cpp
//  TicTacToe
//
//  Created by Kirill Drozdov on 11.11.2021.
//


#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

int main(){
    int playerCOL;
    int playerROWS;
    int a = 0;
 bool gameOver = 0;
 const int K = 3;
 string arr[K][K]{
  {"11", "12", "13"},
  {"21", "22", "23"},
  {"31", "32", "33"} };
 
 for(int i = 0; i < K; i++){
  for(int j = 0; j < K; j++){
   cout << "[" <<  arr[i][j] << "] \t";}
  cout <<  endl;}

 while(!gameOver){
  cin >> playerCOL >> playerROWS;
  cin  >> arr[playerCOL - 1][playerROWS - 1];
  a++;
 
  for(int i = 0; i < K; i++){
   for(int j = 0; j < K; j++){
    cout << "[" << arr[i][j] << "] \t";
   }
   cout << endl;
  }
  //ряды
     if(arr[0][0] == arr[0][1] && arr[0][2] == arr[0][1]){
         gameOver = true;}
     if(arr[1][0] == arr[1][1] && arr[1][2] == arr[1][1]){
         gameOver = true;}
     if(arr[2][0] == arr[2][1] && arr[2][2] == arr[2][1]){
         gameOver = true;}
  //колноки
     if(arr[0][0] == arr[1][0] && arr[2][0] == arr[1][0]){
         gameOver = true;}
     if(arr[0][1] == arr[1][1] && arr[2][1] == arr[0][1]){
         gameOver = true;}
     if(arr[0][2] == arr[1][2] && arr[2][2] == arr[1][2]){
       gameOver = true;}
  //диагональ
     if(arr[0][0] == arr[1][1] && arr[2][2] == arr[1][1]){
         gameOver = true;}
     if(arr[0][2] == arr[1][1] && arr[2][0] == arr[1][1]){
         gameOver = true;}
    }
}
