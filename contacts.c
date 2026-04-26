//Week 1: C. Exercise 2.
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Name: ");
    int age = get_int("Age: ");
    string phone = get_string("Phone: ");
    char letter = get_char("Favorite letter: ");

    printf("Your new contact, %s, who is %i years old, has phone number %s, and whose favorite letter is %c, has been added to your contacts!\n", name, age, phone, letter);
}