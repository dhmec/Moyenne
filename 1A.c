#include <stdio.h>

int main()
{
    int nb=60;
    float algo1cc,algo1exam,algo2cc,algo2exam,app0,angcc,angexam,frcc,frtp,frexam,electrocc,electroexam,infographie,math1cc,math1tp,math1exam,math2cc,math2tp,math2exam,prog1cc,prog1exam,prog2cc,prog2tp,prog2exam,projet,reseaucc,reseauexam;
    float algo1,algo2,math1,math2,reseau,electro,fr,ang,prog1,prog2;

    printf(" *****ALGO 1  ");
    printf(" cc: ");
    scanf("%f",&algo1cc);
    printf("   Exam: ");
    scanf("%f",&algo1exam);
    printf("\n");

    printf(" *****ALGO 2  ");
    printf(" cc: ");
    scanf("%f",&algo2cc);
    printf("    Exam: ");
    scanf("%f",&algo2exam);
    printf("\n");

    printf(" *****APP0   ");
    printf(" note app0:  ");
    scanf("%f",&app0);
    printf("\n");


    printf(" *****ANGLAIS  ");
    printf(" cc: ");
    scanf("%f",&angcc);
    printf("    Exam: ");
    scanf("%f",&angexam);
    printf("\n");


    printf(" *****FRANCAIS  ");
    printf(" cc: ");
    scanf("%f",&frcc);
    printf(" tp: ");
    scanf("%f",&frtp);
    printf("    Exam: ");
    scanf("%f",&frexam);
    printf("\n");

    printf(" *****ELECTRONIQUE  ");
    printf(" cc: ");
    scanf("%f",&electrocc);
    printf("    Exam: ");
    scanf("%f",&electroexam);
    printf("\n");

    printf(" *****INFOGRAPHIE  ");
    printf(" note infographie: ");
    scanf("%f",&infographie);
    printf("\n");


    printf(" *****MATH 1  ");
    printf(" cc: ");
    scanf("%f",&math1cc);
    printf(" tp: ");
    scanf("%f",&math1tp);
    printf("    Exam: ");
    scanf("%f",&math1exam);
    printf("\n");

    printf(" *****MATH 2  ");
    printf(" cc: ");
    scanf("%f",&math2cc);
    printf(" tp: ");
    scanf("%f",&math2tp);
    printf("    Exam: ");
    scanf("%f",&math2exam);
    printf("\n");

    printf(" *****PROG 1  ");
    printf(" cc: ");
    scanf("%f",&prog1cc);
    printf("    Exam: ");
    scanf("%f",&prog1exam);
    printf("\n");

    printf(" *****PROG 2  ");
    printf(" cc: ");
    scanf("%f",&prog2cc);
    printf(" tp: ");
    scanf("%f",&prog2tp);
    printf("    Exam: ");
    scanf("%f",&prog2exam);
    printf("\n");

    printf(" *****PROJET  ");
    printf(" note projet:  ");
    scanf("%f",&projet);
    printf("\n");

    printf(" *****RESEAU  ");
    printf(" cc: ");
    scanf("%f",&reseaucc);
    printf("    Exam: ");
    scanf("%f",&reseauexam);
    printf("\n");

    algo1= algo1cc*0.4+algo1exam*0.6;
    algo2=algo2cc*0.3+algo2exam*0.7;
    ang=angcc*0.4+angexam*0.6;
    fr=frcc*0.2+frtp*0.3+frexam*0.5;
    electro=electrocc*0.4+electroexam*0.6;
    math1=math1cc*0.3+math1tp*0.2+math1exam*0.5;
    //
    math2=math2cc*0.3+math2tp*0.2+math2exam*0.5;
    //
    prog1=prog1cc*0.6+prog1exam*0.4;
    prog2=prog2cc*0.2+prog2tp*0.3+prog2exam*0.5;
    reseau=reseaucc*0.4+reseauexam*0.6;

    if(((algo1*3+app0+fr*4+electro*3+infographie*2+math1*8+prog1*7)/28)< 10){
           printf(" Moyenne semestre 1 :\033[0;31m%.2f -(%.2f)\033[0;37m (FRANCAIS,ELECTRONIQUE)",(algo1*3+app0+fr*4+electro*3+infographie*2+math1*8+prog1*7)/28,10-((algo1*3+app0+fr*4+electro*3+infographie*2+math1*8+prog1*7)/28));

    }
    else{
        printf(" Moyenne semestre 1 :\033[0;32m%.2f\033[0;37m ((FRANCAIS,ELECTRONIQUE)",(algo1*3+app0+fr*4+electro*3+infographie*2+math1*8+prog1*7)/28);
    }
     printf("\033[0;37m");
     if(((algo2*2+ang*4+math2*8+prog2*5+projet*8+reseau*5)/32)< 10){
           printf("\n Moyenne semestre 2 :\033[0;31m%.2f -(%.2f)\033[0;37m (ANGLAIS,RESEAU)",(algo2*2+ang*4+math2*8+prog2*5+projet*8+reseau*5)/32,10-((algo2*2+ang*4+math2*8+prog2*5+projet*8+reseau*5)/32));
    }
    else{
         printf("\n Moyenne semestre 2 :\033[0;32m%.2f\033[0;37m (ANGLAIS,RESEAU)",(algo2*2+ang*4+math2*8+prog2*5+projet*8+reseau*5)/32);
    }
     printf("\033[0;37m");
    if(((algo1*3+algo2*2+app0+ang*4+fr*4+electro*3+infographie*2+math1*8+math2*8+prog1*7+prog2*5+projet*8+reseau*5)/60)< 10){
          printf(" \n Moyenne generale de toute l annee  :\033[0;31m %.2f  -(%.2f)",(algo1*3+algo2*2+app0+ang*4+fr*4+electro*3+infographie*2+math1*8+math2*8+prog1*7+prog2*5+projet*8+reseau*5)/60,10-((algo1*3+algo2*2+app0+ang*4+fr*4+electro*3+infographie*2+math1*8+math2*8+prog1*7+prog2*5+projet*8+reseau*5)/60));

    }
    else{
        printf(" \n Moyenne generale de toute l annee :\033[0;32m%.2f",(algo1*3+algo2*2+app0+ang*4+fr*4+electro*3+infographie*2+math1*8+math2*8+prog1*7+prog2*5+projet*8+reseau*5)/60);
    }
    printf("\033[0;37m");
     if((ang)< 8){
          printf("\n Moyenne Communication Culture et Citoyennete A1 :\033[0;31m%.2f   -(%.2f)",ang,8-ang);
          nb=nb-4;

    }
    else{
        printf("\n Moyenne Communication Culture et Citoyennete A1 :\033[0;32m%.2f ",ang);
    }
    printf("\033[0;37m");
    if(((fr*4+app0)/5)< 8){
          printf("\n Moyenne Communication Culture et Citoyennete F1 : \033[0;31m%.2f  -(%.2f) ",((fr*4+app0)/5),8-((fr*4+app0)/5));
          nb=nb-5;
    }
    else{
        printf("\n Moyenne Communication Culture et Citoyennete F1 :\033[0;32m%.2f ",((fr*4+app0)/5));
    }
     printf("\033[0;37m");
     if((electro)< 8){
          printf("\n Moyenne Electronique :\033[0;31m %.2f   -(%.2f)",electro,8-electro);
          nb=nb-3;
    }
    else{
        printf("\n Moyenne Electronique 1:\033[0;32m%.2f ",electro);
    }
     printf("\033[0;37m");
    if((infographie)< 8){
          printf("\n Moyenne Infographie et montage video :\033[0;31m %.2f   -(%.2f)",infographie,8-infographie);
          nb=nb-2;
    }
    else{
        printf("\n Moyenne Infographie et montage video:\033[0;32m%.2f ",infographie);
    }
    printf("\033[0;37m");
     if((math2)< 8){
          printf("\n Moyenne Mathematique de base 2 :\033[0;31m%.2f   -(%.2f)",math2,8-math2);
          nb=nb-8;
    }
    else{
        printf("\n Moyenne Mathematique de base 2 :\033[0;32m%.2f ",math2);
    }
     printf("\033[0;37m");
     if((math1)< 8){
          printf("\n Moyenne Mathematiques de base 1 :\033[0;31m%.2f   -(%.2f)",math1,8-math1);
          nb=nb-8;
    }
    else{
        printf("\n Moyenne Mathematiques de base 1:\033[0;32m%.2f ",math1);
    }
     printf("\033[0;37m");
    if(((prog1*7+algo1*3)/10)< 8){
          printf("\n Moyenne Programmation 1 :\033[0;31m%.2f  -(%.2f) ",((prog1*7+algo1*3)/10),8-((prog1*7+algo1*3)/10));
        nb=nb-10;
    }
    else{
        printf("\n Moyenne Programmation 1 :\033[0;32m%.2f   ",((prog1*7+algo1*3)/10));
    }
     printf("\033[0;37m");
      if(((prog2*5+algo2*2)/7)< 8){
          printf("\n Moyenne Programmation 2 :\033[0;31m%.2f  -(%.2f) ",((prog2*5+algo1*2)/7),8-((prog2*5+algo2*2)/7));
          nb=nb-7;
    }
    else{
       printf("\n Moyenne Programmation 2:\033[0;32m%.2f ",((prog2*7+algo2*3)/10));
    }
     printf("\033[0;37m");
    if((projet)< 8){
          printf("\n Moyenne Projet 1A :\033[0;31m %.2f   -(%.2f)",projet,8-projet);
            nb=nb-8;
    }
    else{
        printf("\n Moyenne Projet 1A :\033[0;32m%.2f ",projet);
    }
     printf("\033[0;37m");

    if((reseau)< 8){
          printf("\n Moyenne Systemes et Reseaux:\033[0;31m %.2f   -(%.2f)",reseau,8-reseau);
             nb=nb-5;
    }
    else{
        printf("\n Moyenne Systemes et Reseaux :\033[0;32m%.2f ",reseau);
    }
     printf("\033[0;37m");
     printf("\n NB_ECTS_AQUIS :%d",nb);
     if(nb==60){
            printf("\033[0;32m (credit:%d)",60-nb);

     }
     else{
        printf("\033[0;31m (credit:%d)",60-nb);
     }
     printf("\033[0;37m");
     printf("\n ****MDEM**** \n");
   return 0;
}
