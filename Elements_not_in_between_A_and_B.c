#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int empty_array[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int a, b;
    scanf("%d%d", &a, &b);
    int empty_count = 0; 
    for(int i = 0; i < n; i++) {
        if(arr[i] < a || arr[i] > b) {
            empty_array[empty_count++] = arr[i];
        }
    }
    if(empty_count == 0)
    {
        printf("-1");
    }
    else 
    {
        for(int i = 0; i < empty_count; i++)
        {
            printf("%d ", empty_array[i]);
        }
    }
    
return 0;
}