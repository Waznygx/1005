#include<stdio.h>

//struct tag
//{
//	member-list;
//}variable-list;

//typedef struct stu
//{
//	int sno;
//	char sname[30];
//	char sex[10];
//	int class;
//}s;
////typedef：重命名
////struct stu：结构体关键字+标签
//// 成员变量
////int sno;
////char sname[30];
////char sex[10];
////int class;
////s：无typedef的前提下属于：全局的结构体变量；有typedef：给结构体类型重新命名（struct stu→s）
//int main()
//{
//	
//	return 0;
//}

//struct stu//类型声明
//{
//	char sname[15];
//	int sage;
//};
//struct tescher
//{
//	char tname[15];
//	int tage;
//	struct stu s;
//}t1 = { "wangwu",19,{"lisi",4}};//结构体嵌套初始化
//int main()
//{
//	struct stu s = { "zhangsan",3 };//初始化
//	printf("%s,%d\n", s.sname, s.sage);
//	printf("%s,%d,%s,%d\n", t1.tname, t1.tage, t1.s.sname,t1.s.sage);
//	return 0;
//}
////输出：zhangsan,3
////      wangwu, 19, lisi, 4

//struct S
//{
//	int data[1000];
//	int num;
//};
//void p1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//void p2(struct S *ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	struct S s = { {1,2,3,4},1000 };
//	p1(s);
//	p2(&s);
//	return 0;
//}

//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", add(a, b));
//	return 0;
//}

//struct 
//{
//	int a; 
//	char c;
//	double b;
//}x;
//struct 
//{
//	int a;
//	char c;
//	double b;
//}*p;
//int main()
//{
//	p = &x;//表达式非法
//	return 0;
//}

//struct node
//{
//	int data;
//	struct node* next；
//}node;

//typedef struct MyStruct
//{
//	char c1;
//	int i;
//	char c2;
//}s1;

//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//struct s4
//{
//	char c;
//	struct s3 ss3;
//	double d;
//};

//struct MyStruct
//{
//	int num;
//	char* pc;
//	short s1;
//	char cha[2];
//	short s2[4];
//};

//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct s2
//{
//	char c1;
//	char c2;
//	int i;
//};
//int main()
//{
//	struct s1 ss1;
//	struct s2 ss2;
//	printf("%d\n", sizeof(ss1));
//	printf("%d\n", sizeof(ss2));
//	return 0;
//}
////输出：12
////      8
//int main()
//{
//	/*struct s4 ss4;
//	printf("%d\n", sizeof(ss4));*/
//	return 0;
//}

//#pragma pack(2)
//struct MyStruct
//{
//	char c;
//	int i;
//	double d;
//};
//#pragma pack()
//struct s2
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	struct MyStruct s1;
//	struct s2 s2;
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	return 0;
//}
////输出：14
////      16

//struct a
//{
//	int _a:2;
//	int _b:5;
//	int _c:10;
//	int _d:30;
//};

//struct s
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct s s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//enum MyEnum
//{
//	M,
//	mon=3,
//	tues
//};
//int main()
//{
//	printf("%d ", M);
//	printf("%d ", mon);
//	printf("%d ", tues);
//	return 0;
//}
//0 3 4

//enum color
//{
//	red = 1,
//	green = 2,
//	blue=4
//};
//int main()
//{
//	enum color r = red;
//	r = 3;
//	return 0;
//}

//union MyUnion
//{
//	int i;
//	char c;
//};
//int main()
//{
//	union MyUnion un = { 0 };
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	return 0;
//}
////11223355

union un1
{
	char c[5];
	int i;
};
union un2
{
	short c[7];
	int i;
};
int main()
{
	printf("%d\n", sizeof(union un1));
	printf("%d\n", sizeof(union un2));
	return 0;
}