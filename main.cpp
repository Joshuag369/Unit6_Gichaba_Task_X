//#include "pch.h"

#include <iostream>

#include <algorithm> //to use the sort command

#include <fstream>

#include "accounts.h"

using namespace std;

 void printArray(int[], int);

int main()

{

  ofstream myfile ("Results.txt");

       int i, j, temp, pass = 0;


  // Create and open a text file
   myfile << "Account Balance, Start: " << cpuTime() << endl;

 

   //print the input list without sorting

   cout << "Input list ...\n";

   for (int i = 0; i <= maxAccounts; i++) {

          cout << accountBalances[i];

   }

   //sort the input list (array)

   for (int i = 0; i < maxAccounts; i++) {

          for (j = i + 1; j < maxAccounts; j++)

          {

                if (accountBalances[j] < accountBalances[i])

                {

                       temp = accountBalances[i];

                       accountBalances[i] = accountBalances[j];

                       accountBalances[j] = temp;

                }

          }

          pass++;

   }

   cout << endl;

   

   //Print Sorted List

   cout << "Sorted List" << endl;

   for (i = 0; i < maxAccounts; i++) {

          cout << accountBalances[i] << endl;

   }

   //cout << "\nNumber of passes taken to sort the list:" << pass << endl;

   myfile << "End " << cpuTime() << endl;  //document your end time for our Results.txt file.

   system("pause");


int d, e,temp1,pass1 = 0;

myfile << "Bubble List ASC, Start: " << cpuTime() << endl;

   int a[11] = {10,2,0,14,43,25,18,1,5,45,19};

   cout <<"Input list ...\n";

   for(d = 0; d < 11; d++) {

      cout <<a[d]<<"\t";

   }

cout<<endl;

for(d = 0; d<11; d++) {

   for(e = d+1; e<11; e++)

   {

      if(a[d] > a[e]) //swap i and j or ascending and descending sorts

                 {

         temp1 = a[d];

         a[d] = a[e];

         a[e] = temp1;

      }

   }

pass1++;

}

cout <<"Sorted Element List ASC ...\n";
printArray(a, 11);

for(d = 0; d<11; d++) {

   myfile <<a[d]<<"\t";

}


cout << "\nNumber of passes taken to sort the list:" << pass1 << endl;

   myfile << "\nEnd " << cpuTime() << endl;  //document your end time for our Results.txt file.

   system("pause");

myfile << "Bubble List DESC, Start: " << cpuTime() << endl;


cout<<endl;

for(d = 0; d<11; d++) {

   for(e = d+1; e<11; e++)

   {

      if(a[d] < a[e]) //swap i and j or ascending and descending sorts

                 {

         temp1 = a[d];

         a[d] = a[e];

         a[e] = temp1;

      }

   }

pass1++;

}

cout <<"Sorted Element List DESC ...\n";
printArray(a, 11);





cout << "\nNumber of passes taken to sort the list:" << pass1 << endl;

   myfile << "End " << cpuTime() << endl;  //document your end time for our Results.txt file.

   system("pause");

 



  
 

  // Write to the file

  //MyFile <<a[11];

  for(d = 0; d<11; d++) {

   myfile <<a[d]<<"\t";

}

 

  // Close the file

  myfile.close();

return 0;

}

void printArray(int array[], int size)
{

  for(int d = 0; d<size; d++) {

   cout <<array[d]<<"\t";
}
}
