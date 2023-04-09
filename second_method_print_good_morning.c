#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodevening();
void goodnight();
int main()
{
    goodmorning();

    return 0;
}
void goodmorning()
{
    printf("good morning vikash kumar\n");
    goodafternoon();
}
void goodafternoon()
{
    printf("good afternoon vikash kumar\n");
    goodevening();
}
void goodevening()
{
    printf("good evening vikash kumar\n");
    goodnight();
}
void goodnight()
{
    printf("good night vikash kumar\n");
}