// #include <stdio.h>

// struct born_date
// {
//     int year;
//     int month;
//     int day;
// };

// struct Student
// {
//     int id;
//     char name[20];
//     struct born_date date;
//     float grade;
// };

// // struct classroom
// // {
// //     struct Student stu[100];
// //     char * class_id;
// //     int stu_count;
// // };

// int main()
// {
//     // struct Student stu1;
//     // scanf("%d",&stu1.id);
//     // scanf("%s",stu1.name);
//     // scanf("%d",&stu1.age);
//     // scanf("%d %d %d",&stu1.date.year,&stu1.date.month,&stu1.date.day);
//     // scanf("%f",&stu1.tall);
//     // printf("ID:%d\n",stu1.id);
//     // printf("Name:%s\n",stu1.name);
//     // printf("Age:%d\n",stu1.age);
//     // printf("Tall:%.2f\n",stu1.tall);
//     // struct classroom class1;
//     // class1.stu[0]=stu1;
//     // class1.class_id="CS101";
//     // class1.stu_count=1;
//     // printf("Class ID:%s\n",class1.class_id);
//     // printf("Student Count:%d\n",class1.stu_count);
//     // printf("ID:%d\n",class1.stu[0].id);
//     // printf("Name:%s\n",class1.stu[0].name);
//     // printf("Age:%d\n",class1.stu[0].age);
//     // printf("Born Date:%d-%d-%d\n",class1.stu[0].date.year,class1.stu[0].date.month,class1.stu[0].date.day);
//     // printf("Born Date:%d-%d-%d\n",stu1.date.year,stu1.date.month,stu1.date.day);
//     // printf("Tall:%.2f\n",class1.stu[0].tall);
//     printf("please input student count:\n");
//     int n;
//     scanf("%d",&n);
//     struct Student class[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("please input student %d info:\n",i+1);
//         printf("ID:\n");
//         scanf("%d",&class[i].id);
//         printf("Name:\n");
//         scanf("%s",class[i].name);
//         printf("Born Date (year month day):\n");
//         scanf("%d %d %d",&class[i].date.year,&class[i].date.month,&class[i].date.day);
//         printf("Grade:\n");
//         scanf("%f",&class[i].grade);
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(class[i].grade<class[j].grade)
//             {
//                 struct Student temp=class[i];
//                 class[i]=class[j];
//                 class[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("Student %d info:\n",i+1);
//         printf("ID:%d\n",class[i].id);
//         printf("Name:%s\n",class[i].name);
//         printf("Born Date:%d-%d-%d\n",class[i].date.year,class[i].date.month,class[i].date.day);
//         printf("Grade:%.2f\n",class[i].grade);
//     }
//     return 0;
// }

// #include <stdio.h>

// struct Employee
// {
//     int id;
//     char name[50];
//     char gender;
//     int age;
//     float salary;
// };

// int main()
// {
//     printf("Enter number of employees: ");
//     int n;
//     scanf("%d", &n);
//     struct Employee company[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter info for employee %d:\n", i + 1);
//         printf("ID: ");
//         scanf("%d", &company[i].id);
//         printf("Name: ");
//         scanf("%s", company[i].name);
//         getchar(); // consume newline character left by previous scanf
//         printf("Gender (M/F): ");
//         scanf("%c", &company[i].gender);
//         printf("Age: ");
//         scanf("%d", &company[i].age);
//         printf("Salary: ");
//         scanf("%f", &company[i].salary);
//     }
//     int count_M = 0, count_F = 0;
//     float sum_salary=0.0;
//     float avg_salary=0.0;
//     for (int i = 0; i < n; i++)
//     {
//         if (company[i].gender == 'M' || company[i].gender == 'm')
//             count_M++;
//         else if (company[i].gender == 'F' || company[i].gender  == 'f')
//             count_F++;
//         sum_salary += company[i].salary;
//     }
//     avg_salary = sum_salary / n;
//     printf("Number of male employees: %d\n", count_M);
//     printf("Number of female employees: %d\n", count_F);
//     printf("Average salary: %.2f\n", avg_salary);
//     return 0;
// }

// #include <stdio.h>

// struct date
// {
//     int year;
//     int month;
//     int day;
// };

// int judge(int year, int month, int day)
// {
//     if((year%4==0 && year%100!=0) || (year%400==0))
//     {
//         if(month==2 && day>29)
//         {
//             return 1;
//         }
//     }
//     else
//     {
//         if(month==2 && day>28)
//         {
//             return 1;
//         }
//     }
//     if(month==2 ||month==4 || month==6 || month==9 || month==11)
//     {
//         if(day>30)
//         {
//             return 1;
//         }
//     }
//     if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
//     {
//         if(day>31)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int day=0;
//     struct date d;
//     printf("Enter date : ");
//     scanf("%d %d %d", &d.year, &d.month, &d.day);
//     if(d.month<1 || d.month>12 || d.day<1 || d.day>31)
//     {
//         printf("Invalid date!1\n");
//         return 1;
//     }
//     if(judge(d.year, d.month, d.day))
//     {
//         printf("Invalid date!2\n");
//         return 1;
//     }
//     int year=d.year-2026;
//     day+=year*365;
//     day+=year/4;
//     day-=year/100;
//     day+=year/400;
//     switch(d.month)
//     {
//         case 12:
//             day+=30;
//         case 11:
//             day+=31;
//         case 10:
//             day+=30;
//         case 9:
//             day+=31;
//         case 8:
//             day+=31;
//         case 7:
//             day+=30;
//         case 6:
//             day+=31;
//         case 5:
//             day+=30;
//         case 4:
//             day+=31;
//         case 3:
//             if((d.year%4==0 && d.year%100!=0) || (d.year%400==0))
//                 day+=29;
//             else
//                 day+=28;
//         case 2:
//             day+=31;
//         case 1:
//             day+=d.day;
//             break;
//         default:
//             return 1;
//     }
//     printf("Day of the year: %d\n", day);
//     return 0;
// }

// #include <stdio.h>

// struct test
// {
//     int x;
//     int *y;
// };

// int main()
// {
//     int arr[3] = {10, 20, 30};
//     struct test t[3]={
//         {10, &arr[0]},
//         {20, &arr[1]},
//         {30, &arr[2]}
//     };
//     struct test *p=t;
//     printf("%d\n",++p->x);
//     printf("%d\n",(++p)->x);
//     printf("%d\n",++(*p->y));
//     return 0;
// }
#include <stdio.h>
struct a
{
    double d;
    char e;
};

struct b
{
    char a;
    char b;
    struct a;
    char f;
};

int main()
{
    printf("%d",sizeof(struct b));

}
