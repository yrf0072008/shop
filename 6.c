//��6����������ʵ����������ֵ��С�����˳�������������
#include<stdio.h>//ͷ�ļ� 
int main() //������ 
{
	float num1,num2;//���帡���ͱ��� 
	printf("����������2��ʵ����"); 
	scanf("%f��%f",&num1,&num2);//��������������������ע������%f֮��Ķ��� 
	float temp; //�����м���� 
	if(num1>num2) //�ж����������num1����num2���ͽ�����ֵ 
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	printf("%.2f,%.2f\n",num1,num2);//���.2����˼�ǣ�������С�������λ 
	return 0;
}
