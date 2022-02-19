#include<iostream>

#include "accounts.h"

#include <fstream>

using namespace std;

int main ()

{

   int i, j,temp,pass=0;

   int a[11] = {10,2,0,14,43,25,18,1,5,45,19};

   cout <<"Input list ...\n";

   for(i = 0; i<11; i++) {

      cout <<a[i]<<"\t";

   }

cout<<endl;

for(i = 0; i<11; i++) {

   for(j = i+1; j<11; j++)

   {

      if(a[i] < a[j]) //swap i and j or ascending and descending sorts

                 {

         temp = a[i];

         a[i] = a[j];

         a[j] = temp;

      }

   }

pass++;

}

cout <<"Sorted Element List ...\n";

for(i = 0; i<11; i++) {

   cout <<a[i]<<"\t";

}

cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;

 

// Create and open a text file

  ofstream MyFile("filename.txt");

 

  // Write to the file

  //MyFile <<a[11];

  for(i = 0; i<11; i++) {

   MyFile <<a[i]<<"\t";

}

 

  // Close the file

  MyFile.close();

return 0;

}