#include <stdio.h>
#include <string.h>

void printLongestDistinctSubstring(const char* str){
    int length=strlen(str);
    int maxLength=0;
    int start=0;
    int end=0;
    int currentLength=0;
    for (int i=0;i<length;i++){
        int visited[256]={0}; 
        for (int j=i;j<length;j++){
            if (visited[str[j]]==1){
                break;
            }
            visited[str[j]]=1;
            currentLength++;
            if (currentLength>maxLength) {
                maxLength=currentLength;
                start=i;
                end=j;
            }
        }
        currentLength = 0;
    }
    printf("Chuoi phan biet co do dai lon nhat la %d: ",maxLength);
    for (int i=start;i<=end;i++){
        printf("%c",str[i]);
    }
    printf("\n");
}
int main() {
    char numbers[100];
    printf("Nhap vao chuoi: ");
    scanf("%s",numbers);
    printf("Ket qua:\n");
    printLongestDistinctSubstring(numbers);
    return 0;
}
