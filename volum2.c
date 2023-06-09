#include<stdio.h>

struct students{
    int roll_no;
    char name[100];
    int chem_marks; 
	int maths_marks;
	int phy_marks;
};

int main() 
{	
    int i;
    float percentage;
    struct students marks[5];
    for(i=0;i<1;i++)
    {
        printf("Enter roll no. :");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name :");
        scanf("%s",marks[i].name);
        printf("Enter Chemistry marks :");
        scanf("%d", &marks[i].chem_marks);
        printf("Enter Maths marks :");
        scanf("%d", &marks[i].maths_marks);
        printf("Enter Physics marks :");
        scanf("%d", &marks[i].phy_marks);
    }
    printf("\n=======================\n");
	for(i=0;i<1;i++)
    {
	    printf("Student roll no.=%d\n",marks[i].roll_no);
	    printf("Student name no.=%s\n",marks[i].name);
	    printf("Student chemistry marks=%d\n",marks[i].chem_marks);
	    printf("Student maths marks=%d\n",marks[i].maths_marks);
	    printf("Student physice marks=%d\n",marks[i].phy_marks);
	    percentage = (marks[i].phy_marks+marks[i].chem_marks+marks[i].maths_marks)/300.0*100;
	    printf("Percentage : %f\n", percentage);
	}
}
