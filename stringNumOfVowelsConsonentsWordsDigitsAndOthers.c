#include<stdio.h>
int main()
{
    char str[100],ch;
    int i, vowel, consonent, digit, word, other;
    printf("Enter a string: ");
    gets(str);
    printf("%s\n", str);

    i=vowel=consonent=digit=word=other=0;

    while(str[i]!='\0')
    {
        ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;

        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            consonent++;

        else if(ch>='0'&&ch<='9')
            digit++;

        else if(ch==' ')
            word++;

        else
            other++;
        i++;

    }
    word++;

    printf("vowels= %d\n", vowel);
    printf("consonents= %d\n", consonent);
    printf("digits= %d\n", digit);
    printf("words= %d\n", word);
    printf("others= %d\n", other);

    return 0;


}
