#include <iostream>
#include <string>
using namespace std;

//csc249
//m3t2 - insertion sort
// 2/16/23
// implement basic insertion sort

static int COMPARES = 0;
static int SWAPS = 0;
const bool DEBUG = true;

//forw decl
string ArrayToString(int*, int);

void InsertionSort(int* numbers, int numbersSize) {
   for (int i = 1; i < numbersSize; i++) {
      int j = i;
      COMPARES++; // next line is a compare, whether true or false
      while (j > 0 && numbers[j] < numbers[j - 1]) {

         // Swap numbers[j] and numbers [j - 1]
         int temp = numbers[j];
         numbers[j] = numbers[j - 1];
         numbers[j - 1] = temp;
         j--;
      }
      if (DEBUG) {
        cout << "\t" << "swap #" << SWAPS << ": elements " << numbers[j] << " and " << numbers [j-1] << endl;
        cout << "\tPART_SORTED: " << ArrayToString(numbers, numbersSize) << endl;
        cout << "\tcompares so far: " << COMPARES << endl;
      }
   }
}

string ArrayToString(int* array, int arraySize) {
   // Special case for empty array
   if (0 == arraySize) {
      return string("[]");
   }

   // Start the string with the opening '[' and element 0
   string result = "[" + to_string(array[0]);

   // For each remaining element, append comma, space, and element
   for (int i = 1; i < arraySize; i++) {
      result += ", ";
      result += to_string(array[i]);
   }

   // Add closing ']' and return result
   result += "]";
   return result;
}

int main() {
   // Create an array of numbers to sort
   int numbers[] = { 10, 2, 78, 4, 45, 32, 7, 11 };
   int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

   // Display the contents of the array
   cout << "UNSORTED: " << ArrayToString(numbers, numbersSize) << endl;

   // Call the InsertionSort function
   InsertionSort(numbers, numbersSize);

   // Display the sorted contents of the array
   cout << "SORTED:   " << ArrayToString(numbers, numbersSize) << endl;
   cout << "Total swaps: " << SWAPS << endl;
   cout << "Total compares: " << COMPARES << endl;
}
