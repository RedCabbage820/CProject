#include <stdio.h>
//�ݹ� �Լ�(callback)�� �ٸ� �ڵ��� �μ��� �Ѱ��ִ� ���� ������ �ڵ带 �ǹ��մϴ�.
//�ݹ����� �Ѱܹ��� �ڵ�� ���迡 ���� ��� �����ϰų�, ���߿� �����ϴ°� �����մϴ�.
//Ư�� �̺�Ʈ�� �߻����� ��, ����ڰ� ���ϴ� ����� �����ϵ��� �ϱ� ���� �뵵�� �����մϴ�.
//�ݹ� �Լ��� ����� ���
//1. �ݹ� �Լ��� ���� ����
//typdef�� �ڷ��� ��� �̸�����, ��� ǥ���� �� �ְ� �����ִ� ����Դϴ�.

typedef void (*callback)(void);
//2. �ݹ� �Լ��� ���� ������ ������ �Լ� ����
void setCallback(callback);
//3. �ݹ� �Լ��� ���� ����� ������ �Լ� ����
void setCallback(void);
//4. ����ڰ� �� �Լ��� ���� ����
void setCallback(void);

//5. �ݹ鿡 ���� ���� ���� ����
callback user_callback = NULL;

int main()
{
	printf("�ݹ� �Լ� ���� �� ȣ�� ����\n");
	useCallback();
	return 0;
}
//�Ʒ��� �Լ� ����
void setCallback(callback fp)
{
	user_callback() = fp;
}

void setCallback(void)
{
	user_callback() = fp;
}