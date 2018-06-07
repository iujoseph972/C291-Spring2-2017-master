#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>


struct healthProfile {
    char firstName[20];
    char lastName[20];
    char gender[20];
    int DOBMonth;
    int DOBDay;
    int DOBYear;
    int height;
    int weight;
    int age;
    double bmi;
    double maxHeartRate;
    
}person;

int newMember(){
    
    time_t rightNow;
    struct tm strukt;
    time(&rightNow);
    localtime_r(&rightNow, &strukt);
    
    
    
    char firstName[15];
    char lastName[15];
    char gender[15];
    int DOBMonth;
    int DOBDay;
    int DOBYear;
    int height;
    int weight;
    
    
    printf("please enter first Name");
    scanf("%s", firstName);
    printf("\n");
    printf("please enter last Name");
    scanf("%s", lastName);
    printf("\n");
    printf("please enter gender");
    scanf("%s", gender);
    printf("\n");
    printf("please enter month of birth as a number formed like MM ");
    scanf("%d", &DOBMonth);
    printf("\n");
    printf("please enter day of birth formed like  DD ");
    scanf("%d", &DOBDay);
    printf("\n");
    printf("please enter year of birth  formed like  YYYY");
    scanf("%d", &DOBYear);
    printf("\n");
    printf("please enter height in inches");
    scanf("%d", &height);
    printf("\n");
    printf("please enter weight in pounds");
    scanf("%d", &weight);
    printf("\n");
    
    int age = ((2017 - DOBYear)-1);
    if(strukt.tm_yday+1 <= DOBDay && strukt.tm_mon+1 <= DOBMonth){ age = age +1;
    };
    double bmi = (weight * 703) / (height * height);
    double maxHeartRate = (220 - age);

    
    strcpy(person.firstName, firstName);
    strcpy(person.lastName, lastName);
    strcpy(person.gender, gender);
    person.DOBDay = DOBDay;
    person.DOBMonth = DOBMonth;
    person.DOBYear = DOBYear;
    person.age = age;
    person.height = height;
    person.weight = weight;
    person.bmi = bmi;
    person.maxHeartRate = maxHeartRate;
    
    
    printf("First Name: %s",firstName );
    printf("\n");
    printf("Last Name: %s", lastName );
    printf("\n");
    printf("Gender: %s", gender );
    printf("\n");
    printf("Date Of Birth: %d / %d / %d", DOBMonth , DOBDay, DOBYear );
    printf("\n");
    printf("height: %d", height );
    printf("\n");
    printf("weihgt: %d", weight );
    printf("\n");
    printf("Age: %d", age );
    printf("\n");
    printf("BMI: %f", bmi );
    printf("\n");
    printf("Maximum Heart Rate: %f", maxHeartRate );
    printf("\n");
    printf("Target Heart Rate Range: %f - %f ", (maxHeartRate* (.5)), (maxHeartRate*(.8)) );
    printf("\n");
    
    printf("BMI VALUE \n Underwieght: less than 18.5 \n Normal:  between 18.5 and 24.9 \n Overerwieght: between 25 and 29.9 \n Obese: 30 or greater");
    
    
    
    return 0;
};

int main(){

    
    newMember();
           
    return 0;

    }


