// #include<stdio.h>
// #include<string.h>
struct Pen
{
    /* data */
    char name[10];
    int prize;
    char color[10];

};
struct watch
{
    /* data */
    char name[10];
    int prize;
    char color[10];
    struct Pen p1;
} w1;
int main(){
    strcpy(w1.name,"Sonata");
    strcpy(w1.color,"red");
    w1.prize=120;
    strcpy(w1.p1.name,"Flair");
    strcpy(w1.p1.color,"blue");
    w1.p1.prize=12;
    printf("%s\n",w1.name);
    printf("%s\n",w1.color);
    printf("%d\n",w1.prize);
    printf("%s\n",w1.p1.name);
    printf("%s\n",w1.p1.color);
    printf("%d\n",w1.p1.prize);




 

}

