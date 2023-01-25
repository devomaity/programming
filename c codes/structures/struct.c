#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char fav_food;
    char full_name[35];
}; // -> structure variables

int main()
{

    struct student Devopriyo, Moutapa, Chittajit;  

    Devopriyo.id = 1;
    Moutapa.id = 2; // -> variables to access the structure
    Chittajit.id = 3;

    Devopriyo.marks = 79;
    Moutapa.marks = 83;
    Chittajit.marks = 80;

    Devopriyo.fav_food = 'Briyani';
    Moutapa.fav_food = 'Briyani';
    Chittajit.fav_food = 'Noodles';

    Devopriyo.full_name;
    Moutapa.full_name;
    Chittajit.full_name;

    strcpy(Devopriyo.full_name, "Devopriyo Maity");
    strcpy(Moutapa.full_name, "Moutapa Barai");
    strcpy(Chittajit.full_name, "Chittajit Das");

    printf("Devopriyo's full name is: %s\n", Devopriyo.full_name);
    printf("Moutapa's full name is: %s\n", Moutapa.full_name);
    printf("Chittajit's full name is: %s\n\n", Chittajit.full_name);

    printf("Devopriyo's favourite food is: %c\n", Devopriyo.fav_food);
    printf("Moutapa's favourite food is: %c\n", Moutapa.fav_food);
    printf("Chittajit's favourite food is: %c\n", Chittajit.fav_food);

    return 0;
}