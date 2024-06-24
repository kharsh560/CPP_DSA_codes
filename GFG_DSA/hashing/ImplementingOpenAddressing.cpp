#include <iostream>
using namespace std;

struct myHash
{
    int *arr; // Pointer to an array of integers
    int cap;  // Capacity of the hash table
    int size; // Number of elements currently in the hash table

    // Constructor definition
    myHash(int c)
    {
        cap = c;  // Set the capacity
        size = 0; // Initialize size to 0

        // Initialize the array
        arr = new int[cap]; // Allocate memory for the array
        for (int i = 0; i < cap; i++)
        {
            arr[i] = -1; // Set each element to -1, indicating an empty slot
        }
    }

    int hash(int key)
    {
        return key % cap; // Hash function: simple modulo operation
    }

    bool search(int key)
    {
        // Linear probing
        int h, i;
        h = hash(key);
        i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                return true;
            }
            else
            {
                i = (i + 1) % cap;
            }
            if (i == h)
                return false;
        }
    }

    ~myHash()
    {
        delete[] arr; // Destructor to free allocated memory
    }
};

int main()
{
}