#include <stdio.h>
int main(void) {

	// 프로젝트
	// 건강검진 모바일 예약 서비스
	char name[256];
	printf("- 안녕하세요. 서울보건소 입니다^^ 성함을 입력해주세요. \n\n");
	scanf_s("%s", name, sizeof(name));

	int date;
	printf("\n- 검진 받으실 날짜를 입력해주세요. (ex. 20230101) \n\n");
	scanf_s("%d", &date);

	int age;
	printf("\n- 생년월일을 입력해주세요. (숫자로만) \n\n");
	scanf_s("%d", &age);

	double height;
	printf("\n- 키가 몇 cm 인가요? (숫자로만) \n\n");
	scanf_s("%lf", &height);

	float weight;
	printf("\n- 몸무게는 몇 kg 인가요? (숫자로만) \n\n");
	scanf_s("%f", &weight);

	char what[256];
	printf("\n- 검진 받으실 항목을 말씀해주세요. \n\n");
	printf(" * 일반 검진 \n");
	printf(" * 특수 검진 \n\n");
	scanf_s("%s", what, sizeof(what));
	printf("\n- 고객님의 소중한 정보 감사드립니다^^ 건강검진 예약이 완료되었습니다. ");


	// 고객 정보 출력
	printf("\n\n---- 고객 정보 ----\n\n");
	printf(" 날짜       : %d \n", date);
	printf(" 이름       : %s\n", name);
	printf(" 나이       : %d \n", age);
	printf(" 키         : %.1lf cm\n", height);
	printf(" 몸무게     : %.1f kg\n", weight);
	printf(" 검진 항목  : %s \n", what);

	return 0;
}