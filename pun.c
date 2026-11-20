#include <stdio.h>
#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0 / 9.0)


int main()
{
  /*  printf("To C, or not to C: that is the question.\n");
    printf("hello\n");    // This is a comment

    int age;
    age = 30;
    char name[] = "Jose Sanchez";
    printf("i am %d years old\nI love to code\n", age);
    printf("My name is %s\n", name);
    return 0;
*/
   
  
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature:");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    
    printf("Celsius equivalent: %.2f\n", celsius);  
    struct person {
        int age;
        char name[20];
    };   
     struct person jose = { 
        .name = "Jose Sanchez",
        .age = 30
    };
    // struct person jose;
    // jose.age = 30;
    // jose.name = "Jose Sanchez";
    // printf("%d\n", jose.age);


    printf("%c\n", jose.name[7]);
    printf("%c\n", jose.name[5]);
    printf("%d\n", jose.name[0]);
   
   
    struct engine {
        int horsepower;
    };
    struct car {
        char make[20];
        char model[20];
        int year;
        int mileage;
        struct engine motor;
    };
    struct car my_car = {
      .make = "Toyota",
      .model = "Corolla",
      .year = 2016,
      .mileage = 116785,
      .motor = {
        .horsepower = 132
      }
    };
    printf("My %d %s %s has %d miles and %d horsepower\n", my_car.year, my_car.make, my_car.model, my_car.mileage, my_car.motor.horsepower);
  

     return 0;

}
