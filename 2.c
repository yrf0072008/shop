//��2����������Ϣ����1000Ԫ�����һ�꣬�����ַ�����ѡ�񣺣�1�����ڣ�������Ϊr1,��
//��2��һ���ڶ��ڣ�������Ϊr2��
//��3�������ΰ��궨�ڣ�������Ϊr3��
//��ֱ�����һ���3�ַ������õ��ı�Ϣ�͡�
#include<stdio.h>//ͷ�ļ� 
int main() //������ 
{
	float interest_Rate1,interest_Rate2,interest_Rate3;//���帡�������ʱ��� 
	interest_Rate1=0.0036;  //��ʼ����һ�ַ�ʽ������
	interest_Rate2=0.0225;  //��ʼ���ڶ��ַ�ʽ������
	interest_Rate3=0.0198; //��ʼ�������ַ�ʽ������
		
	float principal_0,principal_1,principal_2,principal_3;//������� 
	principal_0=1000;//��ʼ������ 

	principal_1=principal_0*(1+interest_Rate1);//��һ�ֱ�Ϣ�� 
	principal_2=principal_0*(1+interest_Rate2);//�ڶ��ֱ�Ϣ�� 
	principal_3=principal_0*(1+interest_Rate3/2)*(1+interest_Rate3/2);//�����ֱ�Ϣ�� 

	printf("��һ�ֱ�Ϣ�ͣ�%f\n",principal_1);
	printf("�ڶ��ֱ�Ϣ�ͣ�%f\n",principal_2);
	printf("�����ֱ�Ϣ�ͣ�%f\n",principal_3);
	
	return 0; //��������ֵΪ0 
} 



