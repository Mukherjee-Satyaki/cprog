#include<stdio.h>
int main(){
    int phy, chem, math, beng, eng;
    float total;
    float gpa;
    printf("Enter the marks of phy\n");
    scanf("%d", &phy);

    printf("Enter the marks of chem\n");
    scanf("%d", &chem);

    printf("Enter the number of math\n");
    scanf("%d", &math);

    printf("Enter the marks of beng\n");
    scanf("%d", &beng);

    printf("Enter the marks of eng\n");
    scanf("%d", &eng);

     total=(phy + chem + math + beng + eng)/6;

    if((total<40) || phy<33 || chem<33 || math<33 || beng<33 || eng<33){
        printf("Your total percentage is %f & you are not enough to pass", total);
        }
    else
        printf("Your percentage is %f & you're pass\n", total);

        gpa=total/10;

        printf("\nYour gpa is %f\n", gpa);

    return 0;
}
