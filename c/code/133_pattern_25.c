#include<stdio.h>
int main() {
    int n;
    printf("Enter n :- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=n-1;j>i;j--) {
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++) {
            printf("%d", min(j+1,2*i-j+1));
        }
        printf("\n");
    }
}

/*

Output :-
Enter n :- 5
    1
   121
  12321
 1234321
123454321

*/