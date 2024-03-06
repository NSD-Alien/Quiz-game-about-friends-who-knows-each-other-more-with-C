/* Prototype quiz game is made with the sample of  users 4 friend options to guess  , you can add as much as you want*/
#include <stdio.h>
int a[10];
/* The quiz game have tottal 10 questions , among them 8 is comomn and the common quiestions ar asked through that  questions function and the anser are taken from the players and stored*/
void questions(int guess[])
{
    printf("A.A single word that describes about his/her personality!!\n\t1.Legend\t \t2.Playboy\t \t3.everyone's Crush\t       \t4.Innocent\t\n");
    scanf("%d", &guess[0]);
    printf("B. What's his/her favorite food?\n\t1.Biriyani\t \t2.Burger\t \t3.Pizza\t \t4.Brain\t\n");
    scanf("%d", &guess[1]);
    printf("C. Where will she/he go at least once in a lifetime?\n\t1.Kasmir\t \t2.Switzerland\t \t3.Into your Lover's heart\t \t4.Doffodil International University\t\n");
    scanf("%d", &guess[2]);
    printf("D. Marvel or DC?\n\t1.Marvel\t \t2.DC\t \t3.Anime\t \t4.VPN\t\n");
    scanf("%d", &guess[3]);
    // printf("E. Favorite movie/anime name?\n\tA\t \tB\t \tC\t \tD\t\n");
    // printf("F. Favorite song?\n\tA\t \tB\t \tC\t \tD\t\n");
    printf("E. What would she/he do if she/he were the CEO of Google for a day?\n\t1.Sell 90%% share in your name\t \t2.Burndown google\t\t3.Fire every indian employees and recruit onliy DIU students\t\t\n4.Never possible\t\n");
    scanf("%d", &guess[4]);
    printf("F. Which word maches with his/her best friend do you think?\n\t1.Toxic\t \t2.Bff\t \t3.Badluck no 1\t \t4.Bro I don't have any\t\n");
    scanf("%d", &guess[5]);
    printf("G. Her/his favorite teacher?\n\t1.Tania Mam\t \t2.Sovon Sir\t \t3.Yousuf Sir\t \t4.Saba Mam\t\n");
    scanf("%d", &guess[6]);
    printf("H. Why  have she/he  taken CSE do you think ?\n\t1.Friend admitted and me too\t \t2.Jonmogoto Coder\t \t3.For passion\t \t4.Allah knows\t\n");
    scanf("%d", &guess[7]);
}
int main()
{
    int i, x;
    int count = 0;

    /* The correct ansers of the  friends are stored in that section*/
    int ans1[10] = {4, 1, 2, 3, 4, 2, 1, 4, 4, 1};
    int ans2[10] = {4, 1, 3, 4, 2, 1, 1, 4, 1, 2};
    int ans3[10] = {4, 1, 3, 4, 2, 1, 1, 4, 2, 3};
    int ans4[10] = {4, 1, 2, 2, 3, 2, 1, 3, 2, 3};
    /*The game begins here*/
    printf("Choss about who u want to play the game??\n");
    printf("1.Meherunnesa Tania\n2.Nadim Mahmud \n3.Nafiz\n4.Himel\n");
    scanf("%d", &x);

    /* The portion of code asked the 2 indivisul quiestions about the person you are playing the game. and then gives the virdict about the final score you have achived by guessing about your friend*/
    switch (x)
    {
    case 1:

        /*Calling the common 8 questions*/
        questions(a);
         /*Asking the indivisual 2  questions*/
        printf("9. Favorite movie/anime name?\n\t1.Marvel\t \t2.Dead poets society \t \t3.Movie--- Titanic\t \t4.3 idiot\t\n");
        scanf("%d", &a[8]);
        printf("10.what's his/her Favorite song?\n\t1.Hum tum kitne paas hain 2\t \t2.Utsorgo\t \t3.Give me some sunshine \t \t4. Faded\t\n");
        scanf("%d", &a[9]);

        /*Calculalte the tottal correct ans*/
        for (i = 0; i < 10; i++)
        {
            if (ans1[i] == a[i])
            {
                count++;
            }
        }

        /*Final Virdict about your performance on the game about your friend*/
        printf("You have correct %d answares about Tania mam from 10.", count);
        printf("\n");
        if (count >= 8)
        {
            printf("\nYou Know Very Well About Tania Mam\nCongratulation!!!\n");
        }
        else
        {
            printf("You Should know more about Mam\nTry to know more\n");
        }

        break;

    case 2:

        /*Calling the common 8 questions*/
        questions(a);
        /*Asking the indivisual 2  questions*/
        printf("9. Favorite movie/anime name?\n\t1.Marvel\t \t2.Dead poets society \t \t3.Movie--- Titanic\t \t4.3 idiot\t\n");
        scanf("%d", &a[8]);
        printf("10.Favorite song?\n\t1.Journey 2\t \t2.Utsorgo\t \t3.Give me some sunshine \t \t4. Faded\t\n");
        scanf("%d", &a[9]);
         /*Calculalte the tottal correct ans*/
        for (i = 0; i < 10; i++)
        {
            /* code */
            if (ans2[i] == a[i])
            {
                count++;
            }
        }
         /*Final Virdict about your performance on the game about your friend*/
        printf("YOU have correct %d answares about Nadim from 10.", count);
        printf("\n");
        if (count >= 8)
        {
            printf("\nYou Know Very Well About Nadim\nCongratulation!!!\n");
        }
        else
        {
            printf("\nU Should know more about Nadim\nTry to know more\n");
        }
        break;

    case 3:

        /*Calling the common 8 questions*/
        questions(a);
         /*Asking the indivisual 2  questions*/
        printf("9. Favorite movie/anime name?\n\t1.Marvel\t \t2.Dead poets society \t \t3.Movie--- Titanic\t \t4.3 idiot\t\n");
        scanf("%d", &a[8]);
        printf("10.Favorite song?\n\t1.Journey 2\t \t2.Utsorgo\t \t3.Give me some sunshine \t \t4. Faded\t\n");
        scanf("%d", &a[9]);
         /*Calculalte the tottal correct ans*/
        for (i = 0; i < 10; i++)
        {
            /* code */
            if (ans1[i] == a[i])
            {
                count++;
            }
        }
          /*Final Virdict about your performance on the game about your friend*/
        printf("YOU have correct %d answares about Nafiz from 10.", count);
        printf("\n");
        if (count >= 8)
        {
            printf("\nYou Know Very Well About Nafiz\nCongratulation!!!\n");
        }
        else
        {
            printf("\nU Should know more about Nafiz\nTry to know more\n");
        }
        break;

    case 4:

        /*Calling the common 8 questions*/
        questions(a);
         /*Asking the indivisual 2  questions*/
        printf("9. Favorite movie/anime name?\n\t1.Marvel\t \t2.Man of Steel \t \t3.Movie--- Titanic\t \t4.3 idiot\t\n");
        scanf("%d", &a[8]);
        printf("10.Favorite song?\n\t1.Journey 2\t \t2.Utsorgo\t \t3.Give me some sunshine \t \t4. Dubesi ami tomar preme\t\n");
        scanf("%d", &a[9]);
         /*Calculalte the tottal correct ans*/
        for (i = 0; i < 10; i++)
        {
            /* code */
            if (ans1[i] == a[i])
            {
                count++;
            }
        }
         /*Final Virdict about your performance on the game about your friend*/
        printf("YOU have correct %d answares about Himel from 10.", count);
        printf("\n");
        if (count >= 8)
        {
            printf("\nYou Know Very Well About Himel\nCongratulation!!!\n");
        }
        else
        {
            printf("\nU Should know more about himel\nTry to know more\n");
        }
        break;

    default:
        break;
    }


    return 0;
}