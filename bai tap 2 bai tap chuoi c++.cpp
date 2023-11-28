#include <stdio.h>
#include <string.h>
//In menu
void printMenu() {
    printf("MENU\n");
    printf("1. Nhap vao chuoi ky tu\n");
    printf("2. In ra noi dung chuoi\n");
    printf("3. Nhap vao 1 ky tu, dem so lan xuat hien ky tu trong chuoi\n");
    printf("4. Nhap vào 2 ky tu, thay the cac ky tu thu 2 trong chuoi thanh ky tu thu nhat\n");
    printf("5. Nhap vao 1 ky ty, xoa bo cac ky tu trong chuoi\n");
    printf("6. Thoat\n");
    printf("Lua chon cua ban: ");
}
//Main
int main() {
    char str[100];
    char ch, ch1, ch2;
    do{
        printMenu();
        int choice;
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Nhap vao chuoi ky tu: ");
                scanf("%s",str);
                break;
            case 2:
                printf("Noi dung chuoi: %s\n", str);
                break;
            case 3:
                printf("Nhap vao 1 ky tu: ");
                scanf(" %c",&ch);
                int count=0;
                for (int i=0;str[i]!='\0';i++) {
                    if (str[i]==ch) {
                        count++;
                    }
                }
                printf("So lan xuat hien cua ky tu '%c' trong chuoi là: %d\n",ch,count);
                break;
            case 4:
                printf("Nhap vao 2 ky tu: ");
                scanf("%c %c", &ch1, &ch2);
                for (int i=0;str[i]!='\0';i++) {
                    if (str[i]==ch2) {
                        str[i]=ch1;
                    }
                }
                printf("Chuoi sau khi thay the: %s\n", str);
                break;
            case 5:
                printf("Nhap vào 1 ky tu: ");
                scanf("%c",&ch);
                int len=strlen(str);
                int j=0;
                for (int i=0;i<len;i++) {
                    if (str[i]!=ch) {
                        str[j++]=str[i];
                    }
                }
                str[j]='\0';
                printf("Chuoi sau khi xoa: %s\n", str);
                break;
            case 6:
                exit(0);
            default:
                printf("Vui long chon tu 1-6\n");
        }
    }while(1);
    return 0;
}

