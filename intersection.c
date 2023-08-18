#include<stdio.h>

void intersection(int list1[], int list2[], int a, int n) {
	for (int i = 0;i < a;i++) { // go through first list
		for (int b = 0;b < n;b++) { // go through second list
			if (list1[i] == list2[b]) { // check is there is same number
				printf("%d,", list1[i]);// print the same number out
			}

		}
	}
}
int main() {
	int list1[] = { 4,5,2,3,1,6 };
	int list2[] = { 8,7,6,9,4,5 };

	int a = sizeof(list1) / sizeof(list1[0]);// total number divide by each number to find the similarity
	int n = sizeof(list2) / sizeof(list2[0]);
	printf("Expected output: ");
	intersection(list1, list2, a, n);//call function
	return 0;
}
