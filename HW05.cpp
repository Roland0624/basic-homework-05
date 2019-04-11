#include<stdio.h>    //導入標頭檔
#include<stdlib.h>
int main(void){
	int Input_h,Input_m,Input_s;  //建立輸入變數 小時Input_h,分鐘Input_m,秒Input_s
	int num;                      //建立變數num,sum
	int sum=0;
	//執行2次
	for(int i=0;i<2;i++){
		printf("請輸入時間:\n",i);
		//讀取 Input_h,Input_m,Input_s
		scanf("%d%d%d",&Input_h,&Input_m,&Input_s);
		//顯示時間
		printf("你的輸入\n%d時%d分%d秒\n",Input_h,Input_m,Input_s);
		//計算時間差
		num=(Input_h*3600)+(Input_m*60)+(Input_s);  //把時間轉換成秒
			if(i==1){
				num*=-1;     //第二次執行時把變成以負數
				sum+=num;    //時間相減sum=sum+(-num)
				break;       //結束迴圈
			}
		sum+=num;
	}
	printf("時間相差%d秒\n",sum);
	system("pause");
	return 0;


}
