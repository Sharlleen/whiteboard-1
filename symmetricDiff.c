 #include <stdio.h>

void bubbleSort(int arr[], int n) { // ascending order using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void symmetricDifference(int list1[], int a, int list2[], int b) {
    bubbleSort(list1, a);// ascending
    bubbleSort(list2, b);// ascending

    for (int i = 0; i < a; i++) { // go through first list
        int found = 0;
        for (int n = 0; n < b; n++) { // go through second list
            if (list1[i] == list2[n]) {
                found = 1;
            }
        }
        if (!found) {
            printf("%d ", list1[i]); // if same print out
        }
    }

    for (int n = 0; n < b; n++) { // go through second list
        int found = 0;
        for (int i = 0; i < b; i++) { // go through first list
            if (list2[n] == list1[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", list2[n]);
        }
    }
}

int main() {
    int list1[] = { 4, 5, 2, 3, 1, 6 };
    int list2[] = { 8, 7, 6, 9, 4, 5 };
    int a = sizeof(list1) / sizeof(list1[0]); // total number of data divide the each number
    int b = sizeof(list2) / sizeof(list2[0]);

    symmetricDifference(list1, a, list2, b);

    return 0;
}
