#include <stdio.h>
int findingHighest(int array[], int sizeOfArray) {
    int tempHigh, temp;
    for (int i=0; i<(sizeOfArray-1); i++) {
        if (array[i]>array[i+1]) {
            // if its true, I stored the higher number
            tempHigh = array[i];            
            // then I also swapped the numbers so that 
            // the greater number previously, gets further compared
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
        }
    }
    return tempHigh;
}

int findingLowest(int array[], int sizeOfArray) {
    int tempLow, temp;
    for (int i=0; i<(sizeOfArray-1); i++) {
        if (array[i]<array[i+1]) {
            // if its true, I stored the higher number
            tempLow = array[i];            
            // then I also swapped the numbers so that 
            // the greater number previously, gets further compared
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
        }
    }
    return tempLow;
}

void finalSortinginCountingSort(int succAddedArr, int originalArr, int sizeArr) {
    // code
    int sortedArray[14] = {0};
    for (int i=(sizeArr-1); i>=0; i++) {
        sortedArray[succAddedArr[originalArr[i]]];
    }
}

//Adding the successive counts of the elements in the array!
void successiveAddingOfCountArray(int arr[], int originalArray[], int sizeofOrigArray) {
    for (int i=0; i<9; i++) {
        arr[i+1] = arr[i] + arr[i+1];
    }
    for(int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    finalSortinginCountingSort(arr, originalArray, sizeofOrigArray);
}

// Making an array to count how many elements are there in the array!
void storingCountOfEachElement(int array[], int sizeOfArray) {
    int countArr[10]={0};  //Here, the array is only of size 10, because, the range of elements is only from 0 to 9!
    for (int i=0; i<sizeOfArray; i++) {
        countArr[array[i]] = countArr[array[i]] + 1;
    }
    // printing the counting array which is storing the count of each of the elements in array
    for(int i=0; i<10; i++) {
        printf("%d ", countArr[i]);
    }
    printf("\n");
    successiveAddingOfCountArray(countArr, array, sizeOfArray);

}

int main()
{

    int arr[] = {3, 6, 0, 7, 4, 9 ,8, 2, 1, 5, 4, 2, 6, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of the given array is: %d\n", size);
    printf("The Highest number in the array is: %d\n",(findingHighest(arr, size)));
    printf("The Lowest number in the array is: %d\n",(findingLowest(arr, size)));
    storingCountOfEachElement(arr, size);

    return 0;
}