//��3������һ����д��ĸ��Ҫ����Сд���
#include<stdio.h> //ͷ�ļ� 
int main() //������ 
{
	char character_Small,character_Big;//�����ַ����� 
	character_Big='A'; //�ַ�������ʼ�������Ѹ�ֵ��ĸA��ֵ��character_Big
	character_Small=character_Big+32;//ASCII���ֵ+32 character_Big
	printf("��д��ĸ%c",character_Big);//�����д��ĸA
	printf("��Сд��ĸ�ǣ�%c\n",character_Small);//���Сд��ĸa
	return 0;//��������ֵΪ�� 
}
