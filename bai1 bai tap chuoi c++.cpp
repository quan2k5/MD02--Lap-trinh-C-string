#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int dem_so_chu_cai(char* string){
	int so_chu_cai=0;
	while(*string){
		if(('A' <= *string && *string<='Z')||('a' <= *string && *string <= 'z')){
			so_chu_cai++;
		}
		*string++;
	}
	printf("So chu cai la: %d\n",so_chu_cai);
	return so_chu_cai;
	}
int dem_so_chu_so(char *string){
	int so_chu_so=0;
	while(*string){
		if('0'<= *string && *string <= '9'){
			so_chu_so++;
		}
		*string++;
	}
	printf("So chu so la: %d\n",so_chu_so);
	return so_chu_so;
	}
int main(){
	int n;
	char str[100];
	int so_chu_cai,so_chu_so;
	do{
		printf("MENU\n");
		printf("1. Nhap vao ky tu\n");
		printf("2. In ra do dai chuoi va noi dung vua nhap\n");
		printf("3. In ra chuoi dao nguoc\n");
		printf("4. In ra so luong chu cai trong chuoi\n");
		printf("5. In ra so luong chu so trong chuoi\n");
		printf("6. In ra so luong ky tu dac biet trong chuoi\n");
		printf("7. Thoat\n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao ky tu: ");
				scanf("%s",&str);
				break;
			case 2:
				printf("Do dai chuoi: %d\n",strlen(str));
				printf("Chuoi nhap vao: %s\n",str);
				break;
			case 3:
				for(int i=strlen(str)-1;i>=0;i--){
				printf("%c\n",str[i]);
				}
				break;
			case 4:
				dem_so_chu_cai(str);
				break;
			case 5:
				dem_so_chu_so(str);
				break;
			case 6:
				printf("So ky tu dac biet la: %d",strlen(str)-so_chu_so-so_chu_cai);
				break;
			case 7:
				exit(0);
		}
	}while(1==1);
}
