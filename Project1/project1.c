#include <stdio.h>
int main(void) {

	// ������Ʈ
	// �ǰ����� ����� ���� ����
	char name[256];
	printf("- �ȳ��ϼ���. ���ﺸ�Ǽ� �Դϴ�^^ ������ �Է����ּ���. \n\n");
	scanf_s("%s", name, sizeof(name));

	int date;
	printf("\n- ���� ������ ��¥�� �Է����ּ���. (ex. 20230101) \n\n");
	scanf_s("%d", &date);

	int age;
	printf("\n- ��������� �Է����ּ���. (���ڷθ�) \n\n");
	scanf_s("%d", &age);

	double height;
	printf("\n- Ű�� �� cm �ΰ���? (���ڷθ�) \n\n");
	scanf_s("%lf", &height);

	float weight;
	printf("\n- �����Դ� �� kg �ΰ���? (���ڷθ�) \n\n");
	scanf_s("%f", &weight);

	char what[256];
	printf("\n- ���� ������ �׸��� �������ּ���. \n\n");
	printf(" * �Ϲ� ���� \n");
	printf(" * Ư�� ���� \n\n");
	scanf_s("%s", what, sizeof(what));
	printf("\n- ������ ������ ���� ����帳�ϴ�^^ �ǰ����� ������ �Ϸ�Ǿ����ϴ�. ");


	// �� ���� ���
	printf("\n\n---- �� ���� ----\n\n");
	printf(" ��¥       : %d \n", date);
	printf(" �̸�       : %s\n", name);
	printf(" ����       : %d \n", age);
	printf(" Ű         : %.1lf cm\n", height);
	printf(" ������     : %.1f kg\n", weight);
	printf(" ���� �׸�  : %s \n", what);

	return 0;
}