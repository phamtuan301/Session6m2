#include <stdio.h>
int main(){
	int x;
	int correct = 3001;
    while(1){
    printf("nhap mat khau: ");
	scanf("%d", &x);
	if (x == correct){
		printf("mat khau dung");
		break;
	}
	else{
	printf("sai mat khau moi nhap lai: ");
	scanf("%d", &x);
	}
	}
	return 0;
}