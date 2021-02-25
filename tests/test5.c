#include <stdio.h>
#include <unistd.h>

char ft_maiscule(char *c)
{
    if(*c >= 'A' && *c <= 'Z')
        *c = *c + 32;
    else if(*c >= 'a' && *c <= 'z')
        *c = *c - 32;
    else
        return(*c);
    return(*c);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if(argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            argv[1][i] = ft_maiscule(&argv[1][i]);
            write(1,&argv[1][i], 1);
            i++;
        }
    }
    write( 1,"\n", 1);
    write( 1,"\n", 1);
    return (1);
}


/*------------------------------------

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.

Examples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$
*/