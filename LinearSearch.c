#include <stdio.h>

int linearSearch(int a[], int s, int t) {
    for (int i=0;i<s;i++) {
        if (a[i]==t)
            return i;
    }
    return -1;
}

int main(){
    int s,t;
    int a[];
    printf("Enter the size of the array: ");
    scanf("%d", &s);
    printf("Enter %d elements: ", s);
    for (int i=0;i<s;i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the target element to search: ");
    scanf("%d", &t);
    int r=linearSearch(a, s, t);
    if (r!=-1)
        printf("Element %d found at index %d\n", t, r);
    else
        printf("Element %d not found in the array\n", t);
    return 0;
}