 #include<stdio.h>
//  #include<string.h>
 struct  book
 {
    char bookname[50];
    int page;
    float prices;

 } h,k,l;
 void print(){
    printf("page number %d\n",h.page);
    printf("page number %d\n",k.page);
    printf("book prices %f\n",h.prices);
    printf("book prices %f\n",k.prices);
    printf("book name %s\n",l.bookname);
    printf("book name %s\n",k.bookname);

 }
 int main()
 {
    h.page=78;
    h.prices=567.7;
    k.page=68;
    k.prices=543.7;
//  strcpy(l.bookname,"");
 printf("Enter the book name1\n");
 gets(l.bookname);
 printf("Enter the book name2\n");
 gets(k.bookname);
//  strcpy(k.bookname,"");
   print();
 return 0;
 }