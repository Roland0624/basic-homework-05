#include<stdio.h>    //�ɤJ���Y��
#include<stdlib.h>
int main(void){
	int Input_h,Input_m,Input_s;  //�إ߿�J�ܼ� �p��Input_h,����Input_m,��Input_s
	int num;                      //�إ��ܼ�num,sum
	int sum=0;
	//����2��
	for(int i=0;i<2;i++){
		printf("�п�J�ɶ�:\n",i);
		//Ū�� Input_h,Input_m,Input_s
		scanf("%d%d%d",&Input_h,&Input_m,&Input_s);
		//��ܮɶ�
		printf("�A����J\n%d��%d��%d��\n",Input_h,Input_m,Input_s);
		//�p��ɶ��t
		num=(Input_h*3600)+(Input_m*60)+(Input_s);  //��ɶ��ഫ����
			if(i==1){
				num*=-1;     //�ĤG������ɧ��ܦ��H�t��
				sum+=num;    //�ɶ��۴�sum=sum+(-num)
				break;       //�����j��
			}
		sum+=num;
	}
	printf("�ɶ��ۮt%d��\n",sum);
	system("pause");
	return 0;


}
