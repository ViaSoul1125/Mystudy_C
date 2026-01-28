// #include <stdio.h>

// 1. 分析如下程序的输出结果

// ```
// union test//4byte 0x00 00 00 00
// {
// 	int a;
// 	char b[2];
// };
// void main()
// {
// 	union test k;
	
// 	k.b[0] = 8;//0x00 00 00 08
// 	k.b[1] = 1;//0x00 00 01 00
// 	//此时内存值为0x 00 00 01 08
// 	printf("%d\n", k.a); //假设在小端机器运行
//     //小端模式：存储器的低地址，存放数据的低字节，存储器的高地址，存放数据的高字节
//     //将0x 00 00 01 08以int输出为1*2^8+8*2^0=264
// }
// ```
/*
union test在内存中占4字节
int 占0-3字节
char[0]-char[3]分别占[0]-[3]字节
k.b[0] = 8;在内存中存储为0x00 00 00 08
k.b[1] = 1;在内存中存储为0x00 00 01 08//不会覆盖上一句的内容
小端模式：存储器的低地址，存放数据的低字节，存储器的高地址，存放数据的高字节
将0x 00 00 01 08以int输出为1*2^8+8*2^0=264
*/

// 2. 分析如下程序的输出结果

// ```c
// union test
// {
// 	char a[10];
// 	char b;
// 	float c[3];
// };
// int main()
// {
//     printf("%ld\n", sizeof(float));
// 	printf("%ld\n", sizeof(union test));
// }
// ```

/*
联合体初始化方式与结构体相同，基础类型float最长，为4字节，故整个联合体最终占内存为4字节的倍数。
对于char a[10],会占0-9字节，共计10字节，char b可以直接跟在后面占第10字节，共计11字节。
float c[3],float c[0]占0-3字节，以此类推float c[3]占0-11字节，共计12字节，为4的倍数。
故程序最后输出结果为12。

// 对于同样构造的结构体来说：
// char a[10]会占0-9字节，char b占第10字节
// 0-7a[0-7]
// 8-9a[8-9] 10b 11-15填充5字节
// 16-23 c[0]
// 24-31 c[1]
// 32-47 c[2]
// 共计48字节



*/

// 3. 定义一个结构体描述学生个体，要求包含（学号、姓名、成绩、出生年月），要求封装函数，返回成绩最高的学生信息

// #include <stdio.h>

// struct bron
// {
//     int year;
//     int mouth;
//     int day;
// };

// struct Student
// {
//     int id;
//     char name[10];
//     float grade;
//     struct bron birth;
// };

// void exchange(struct Student *stui,struct Student *stuj)
// {
//     struct Student temp = *stui;
//     *stui = *stuj;
//     *stuj = temp;
// }

// void sort(struct Student *stu,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(stu[i].grade<stu[j].grade)
//             {
//                 exchange(&stu[i],&stu[j]);
//             }
//         }
//     }
// }

// int main()
// {
//     printf("please input student count:\n");
//     int n;
//     scanf("%d",&n);
//     struct Student stu[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("please input student %d info:\n",i+1);
//         printf("ID:\n");
//         scanf("%d",&stu[i].id);
//         printf("Name:\n");
//         scanf("%s",stu[i].name);
//         printf("Born Date (year month day):\n");
//         scanf("%d %d %d",&stu[i].birth.year,&stu[i].birth.mouth,&stu[i].birth.day);
//         printf("Grade:\n");
//         scanf("%f",&stu[i].grade);
//     }
//     sort(stu,n);
//     printf("Sort by grade:\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("Student %d info:\n",i+1);
//         printf("ID:%d\n",stu[i].id);
//         printf("Name:%s\n",stu[i].name);
//         printf("Grade:%.2f\n",stu[i].grade);
//     }
//     return 0;
// }





// 4. 完善下面程序，保证最终输出结果为 

// ```C
// #include <stdio.h>

// struct node
// {
// 	int data;
// 	struct node *next;
// };

// int main()
// {
// 	struct node a, b, c, d, e;
// 	a.data = 10;
// 	a.next = &b;
	
// 	b.data = 3;
// 	b.next = &c;
	
// 	c.data = 7;
// 	c.next = &d;
	
// 	d.data = -10;
// 	d.next = &e;
    
//     e.data = 4;
// 	e.next = NULL;
//     //a->b->c->d->e->NULL
	
//     for(int i=0;i<5;i++)
//     {
//         struct node *p=&a;
//         for(int j=0;j<4-i;j++)
//         {
//             if(p->data > p->next->data)
//             {
//                 int temp = p->data;
//                 p->data = p->next->data;
//                 p->next->data = temp;
//             }
//             p=p->next;
//         }
//     }
//     //完成代码，实现最终a b c d e中的data成员保存的值依次为-10 3 4 7 10(对每个结构体变量的成员data进行升序排序)
    
//     printf("%d %d %d %d %d\n", a.data, b.data, c.data, d.data, e.data);
	
//     return 0;
// }
// ```

// 5. 定义结构体来保存图书信息（图书编号，图书名、作者、出版年份、价格、库存数量、借出数量），
//利用结构体数组完成一个简单的图书管理系统，包含图书的添加、图书的删除、查询图书信息、修改图书信息

// #include <stdio.h>
// #include <string.h>
// struct Book
// {
//     int id;
//     char name[50];
//     char author[50];
//     int year;
//     float price;
//     int number;
//     int borrownum;
// };

// void addbook(struct Book *library, int *count)
// {
//     printf("Enter book ID: ");
//     scanf("%d", &library[*count].id);
//     printf("Enter book name: ");
//     scanf("%s", library[*count].name);
//     printf("Enter author name: ");
//     scanf("%s", library[*count].author);
//     printf("Enter publication year: ");
//     scanf("%d", &library[*count].year);
//     printf("Enter price: ");
//     scanf("%f", &library[*count].price);
//     printf("Enter number of books: ");
//     scanf("%d", &library[*count].number);
//     printf("Enter number of borrowed books: ");
//     scanf("%d", &library[*count].borrownum);
//     (*count)++;
// }

// void deletebook(struct Book *library, int *count)
// {
//     printf("Enter book ID to delete: ");
//     int id;
//     scanf("%d", &id);
//     for(int i=0;i<*count;i++)
//     {
//         if(library[i].id == id)
//         {
//             for(int j=i;j<*count-1;j++)
//             {
//                 library[j] = library[j+1];//向前移动覆盖
//             }
//             (*count)--;
//             printf("Book with ID %d deleted.\n", id);
//             return;
//         }
//     }
//     printf("Book with ID %d not found.\n", id);
// }

// void findbook(struct Book *library, int *count)
// {
//     printf("Enter book ID to find: ");
//     int id;
//     scanf("%d", &id);
//     for(int i=0;i<*count;i++)
//     {
//         if(library[i].id == id)
//         {
//             printf("Book found:\n");
//             printf("ID: %d\n", library[i].id);
//             printf("Name: %s\n", library[i].name);
//             printf("Author: %s\n", library[i].author);
//             printf("Year: %d\n", library[i].year);
//             printf("Price: %.2f\n", library[i].price);
//             printf("Number of books: %d\n", library[i].number);
//             printf("Number of borrowed books: %d\n", library[i].borrownum);
//             return;
//         }
//     }
//     printf("Book with ID %d not found.\n", id);
// }

// void modifybook(struct Book *library, int *count)
// {
//     printf("Enter book ID to modify: ");
//     int id;
//     scanf("%d", &id);
//     for(int i=0;i<*count;i++)
//     {
//         if(library[i].id == id)
//         {
//             printf("Enter new book name: ");
//             scanf("%s", library[i].name);
//             printf("Enter new author name: ");
//             scanf("%s", library[i].author);
//             printf("Enter new publication year: ");
//             scanf("%d", &library[i].year);
//             printf("Enter new price: ");
//             scanf("%f", &library[i].price);
//             printf("Enter new number of books: ");
//             scanf("%d", &library[i].number);
//             printf("Enter new number of borrowed books: ");
//             scanf("%d", &library[i].borrownum);
//             printf("Book with ID %d modified.\n", id);
//             return;
//         }
//     }
//     printf("Book with ID %d not found.\n", id);

// }

// int main()
// {
//     int count = 0;
//     int *pcount = &count;
//     struct Book library[100];
//     int choice;
//     while(1)
//     {
//         printf("1. Add Book\n");
//         printf("2. Delete Book\n");
//         printf("3. Find Book\n");
//         printf("4. Modify Book\n");
//         printf("5. Exit\n");
//         printf("Enter your choice by num: ");
//         scanf("%d", &choice);
//         switch(choice)
//         {
//             case 1:
//                 addbook(library, pcount);
//                 break;
//             case 2:
//                 deletebook(library, pcount);
//                 break;
//             case 3:
//                 findbook(library, pcount);
//                 break;
//             case 4:
//                 modifybook(library, pcount);
//                 break;
//             case 5:
//                 return 0;
//             default:
//                 printf("Unknown choice\n");
//         }
//     }
// }