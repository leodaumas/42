int main(int argc, char *argv[]) {
    
    int i;

    i = 1;
    while(*argv && argv[i])
    {
        ft_putstr(argv[i]);
        ft_putstr("\n");
        i++;
    }
    return 0;