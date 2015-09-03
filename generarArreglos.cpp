//
//  generarArreglos.cpp
//  Tarea Raspberry
//
//  Created by Yoco Hernández on 01/09/15.
//  Copyright © 2015 Yoco. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
  
  int N = 10;
  ofstream myfile;
  
  srand((int) time(NULL));
  
//-----------------------------arreglo de 10 int's-----------------------------------
  myfile.open ("/Users/Yoco/Desktop/codigos-de-ordenamiento/arreglo10.txt");
  
  for (int i = 0; i < N; ++i) {
    myfile << rand() % 10000 << endl;
  }
  
  myfile.close();
  
//-----------------------------arreglo de 100 int's-----------------------------------
  N = 100;
  
  myfile.open ("/Users/Yoco/Desktop/codigos-de-ordenamiento/arreglo100.txt");
  
  for (int i = 0; i < N; ++i) {
    myfile << rand() % 10000 << endl;
  }
  
  myfile.close();
  
//-----------------------------arreglo de 1000 int's-----------------------------------
  N = 1000;
  
  myfile.open ("/Users/Yoco/Desktop/codigos-de-ordenamiento/arreglo1000.txt");
  
  for (int i = 0; i < N; ++i) {
    myfile << rand() % 10000 << endl;
  }
  
  myfile.close();
  
//-----------------------------arreglo de 10000 int's-----------------------------------
  N = 10000;
  
  myfile.open ("/Users/Yoco/Desktop/codigos-de-ordenamiento/arreglo10000.txt");
  
  for (int i = 0; i < N; ++i) {
    myfile << rand() % 10000 << endl;
  }
  
  myfile.close();
  
//-----------------------------arreglo de 100000 int's-----------------------------------
  N = 100000;
  
  myfile.open ("/Users/Yoco/Desktop/codigos-de-ordenamiento/arreglo100000.txt");
  
  for (int i = 0; i < N; ++i) {
    myfile << rand() % 10000 << endl;
  }
  
  myfile.close();
  
//-----------------------------arreglo de 1000000 int's-----------------------------------
  N = 1000000;
  
  myfile.open ("/Users/Yoco/Desktop/codigos-de-ordenamiento/arreglo1000000.txt");
  
  for (int i = 0; i < N; ++i) {
    myfile << rand() % 10000 << endl;
  }
  
  myfile.close();
  
  return 0;
  
}
