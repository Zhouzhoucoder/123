#define _CRT_SECURE_NO_WARNINGS 1

////д����
////1.д��������(main����)
////100-500 ����
////���ִ���أ� - C�����Ǵ��������ĵ�һ�п�ʼִ�е�
////����C���Դ����е���main����-���
////int �����ķ�������(����) main ������  { } ������
//
////���ҽ���һ��main����
////1.һ�������п����ж��.c�ļ�
////2.���Ƕ��.c�ļ���ֻ����һ��main����
//
////д�����룬����Ļ�ϴ�ӡ������
////printf - �⺯�� - ����Ļ�ϴ�ӡ��Ϣ��
////printf ��ʹ�ã�Ҳ�ô��к�(����ͷ�ļ� stdio.h)
//
////����ͷ�ļ�
//#include<stdio.h>
//int main()
//{
//	printf("����\n");
//	return 0;
//}

//����+����+���д���
//��ݼ���1.ctrl + f5
//				2.ctrl + fn + f5
//				3.�˵��У�[����]->[��ʼִ�в�����]
//����ִ�е�̫�죬û�п���
//Ϊ�˿������������һ��vs2013������(��ʾ)


//��������
//��������� - д���� - �������������
//���������������������е����⣡
//�����̳� - �ϼ���Ʒ���۸� - 15.6Ԫ - С��
// ���� - 50
//C���� - ������
//          - ����                                                


//a
//'a' - �ַ�a

//int main()
//{
//	//�ַ�����
//	char  ch = 'a';
//	//����
//	int age = 20;
//	//������
//	short num = 10;
//	//long
//	//long long
//	
//	//�����ȸ�����
//	float  weight = 55.5;
//	//˫���ȸ�����
//	double d = 0.0;
//	return 0;
//} 
#include<stdio.h>
int main()
{
	/*printf("hehe\n");
	printf("bite\n");
	printf("%d\n",100)*/;//��ӡһ������
	//sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ�Ĵ�С
	//sizeof�ĵ�λ��ʲô��- �ֽ�byte
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	return 0;
}
//������еĵ�λ��
//bit - ����λ - ���һ��������λ��
//byte - �ֽ� = 8bit
//kb - 1024 byte
//mb - 1024 kb
//gb - 1024 mb
//tb - 1024 gb
//pb - 1024 tb
//
//C���Ա�׼:
//sizeof(long)>=sizeof(int)