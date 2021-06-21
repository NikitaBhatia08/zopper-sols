
#include <iostream>
#include <unordered_map>
using namespace std;
 
// Function to calculate the frequency of all elements in an array
void findFrequency(int A[], int n)
{
    // create an empty map to store the frequency of array elements
    // (we can also use a count array of size `n`)
    unordered_map<int, int> freq;
 
    // update frequency of each element
    for (int i = 0; i < n; i++) {
        freq[A[i]]++;
    }
 
    // iterate through the map to print frequencies
    for (auto it: freq) {
        cout << it.first << " appears " << it.second << " times\n";
    }
}
 
int main()
{
    int A[] = { 2, 3, 3, 2, 1 };
    int n = sizeof(A) / sizeof(A[0]);
 
    findFrequency(A, n);
 
    return 0;
}