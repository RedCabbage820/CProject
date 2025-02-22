#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>





int main()
{
	//문장에 대한 저장(배열)
	//자료형 배열명[] = {값1,값2,값3,...};

	//배열의 값 하나는 배열명[값의 위치]로 접근이 가능합니다.
	//값의 위치(인덱스)는 0번부터 배열의 데이터 수 -1 까지 합니다.
	int selected[] = { 0,0,0,0,0,0,0,0,0,0,0,0 };

//[시작 화면]
	system("title 숲속 동물 테스트");
	printf("잠을 깼다.\n너는 니 몸이 사람이 아님을 느꼈다.\n\n숲속의 동물이 된 너는\n뭐 하고 있니?\n ");
	int select;
	printf("1.숲에 감히 입장하기");
	scanf("%d", &select);
	system("cls"); //콘솔 화면 지우기

//[1번 문항]
	printf("일어나보니 오랜만에\n먼지 가득한 하늘이 보인다면\n");
	printf("1.\"화창한데 뭐하지?\"\n뭐 할지 고민한다.\n");
	printf("2.\"기분 좋은 일들이 생길것 같은 날이야!\"\n\t새들은 지저귀고....꽃들은 피어나고...\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] = 2;
	}
	system("cls");
//[2번 문항]
	printf("\t숲속으로 나가기 전\n");
	printf("\t1. 일단 다 집어가지고 나간다.");
	printf("\t2. 미리 설계해둔 물건들을 모두 챙긴다.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[1] = 1;
	}
	else if (select == 2)
	{
		selected[1] = 2;
	}
	system("cls");
//[3번 문항]
	printf("\t처음 온 숲 속을 산책할 때\n");
	printf("\t1. 지도를 보며 이동한다.");
	printf("\t2. 지도를 한 번 훑고 걍 간다.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[2] = 1;
	}
	else if (select == 2)
	{
		selected[2] = 2;
	}
	system("cls");
//[4번 문항]
	printf("\t귀여운 다람쥐를 만난다면\n");
	printf("\t1. 일단 전부 다 집어가지고 나간다.");
	printf("\t2. 미리 설계해둔 물건들을 꺼내어 관측한다.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[3] = 1;
	}
	else if (select == 2)
	{
		selected[3] = 2;
	}
	system("cls");
//[5번 문항]
	printf("\t결국 다람쥐는 피부병이 나버렸다.\n");
	printf("\t1. 가방에서 아무거나 꺼내 집어던진다.");
	printf("\t2. 우.와.정.말.아.프.겠.는.걸?");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[4] = 1;
	}
	else if (select == 2)
	{
		selected[4] = 2;
	}
	system("cls");
//[6번 문항]
	printf("\t인간주제에 나무를 베어가 숲에 탈모가 온다.\n");
	printf("\t1. 복수의 칼날을 갈며 준비를 한다.");
	printf("\t2. 새 나무를 설계한다.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[5] = 1;
	}
	else if (select == 2)
	{
		selected[5] = 2;
	}
	system("cls");
//[7번 문항]
	printf("\t한여름에 우박이 떨어진다.\n");
	printf("\t1. 우박 사이를 지나가며 모두 피한다.");
	printf("\t2. 미래를 걱정하면서 집에 있는다.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[6] = 1;
	}
	else if (select == 2)
	{
		selected[6] = 2;
	}
	system("cls");
//[8번 문항]
	printf("\t감히 인간 주제에 내 집에 쓰레기를 버린다.\n");
	printf("\t1. 인간을 인간 집 앞의 쓰레기통에 버린다.");
	printf("\t2. 인간을 던진다.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[7] = 1;
	}
	else if (select == 2)
	{
		selected[7] = 2;
	}
	system("cls");
//[9번 문항]
	printf("\t환경 문제로 인해 동물들이 모두 모인다.\n");
	printf("\t1. 제가 당선이 된다면 저 쓰레기같은 인간을 버리겠습니다.");
	printf("\t2. 다른 후보 따윈 집어치워.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[8] = 1;
	}
	else if (select == 2)
	{
		selected[8] = 2;
	}
	system("cls");
//[10 번 문항]
	printf("\t곰이 사이즈가 맞지 않다면 옷을 선물하는데 나와 딱 맞다.\n");
	printf("\t1. 선물이라니.나와 대적하려면 이 정도는 되야지.");
	printf("\t2. 눈치없게 한 치수 큰게 아니라 딱 맞는걸 줘?양심이 터졌네.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[9] = 1;
	}
	else if (select == 2)
	{
		selected[9] = 2;
	}
	system("cls");
//[11번 문항]
	printf("\t자려는데 내일 있을 동물 회의를 준비하란다.\n");
	printf("\t1. 연설문을 작성한다.");
	printf("\t2. 좋은 안건을 준비한다.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[10] = 1;
	}
	else if (select == 2)
	{
		selected[10] = 2;
	}
	system("cls");
//[12번 문항]
	printf("\t숲속 체험이 끝나고 현실에 돌아와 일기를 쓴다.\n");
	printf("\t1. 숲속의 일들을 모두 기록한다.");
	printf("\t2. 인간을 던진다.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[11] = 1;
	}
	else if (select == 2)
	{
		selected[11] = 2;
	}
	system("cls");
//반복문
//12번 반복을 진행하는 코드(i가 0에서 시작해서 작업이 끝날 때마다 1씩 i가 증가,i가 12보다 작을 동안 반복)
	int total = 0;
	for (int i = 0; 1 < 12; i++)
	{
		total += selected[i];
	}

	printf("숲 속에서 당신은");
	//12 ~ 13점
	if (total >= 12 && total <= 13)
	{
		printf("조금 많이 큰 고양이 Tiger\n"):
	}
	else if  (total == 24)
	{
		printf("조금 많이 큰 강아지 Wolf")
	}
	return 0;
}