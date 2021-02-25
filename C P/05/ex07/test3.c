    int        ft_is_prime(int nb)
    {
        int i;

        i = 2;
        while (i < 46341 && i * i <= nb)
        {
            if (nb % i == 0)
                return (0);
            i++;
        }
        return (1);
    }

    int        ft_find_next_prime(int nb)
    {
        if (nb <= 2)
            return (2);
        while (nb > 2)
        {
            if (ft_is_prime(nb))
                return (nb);
            nb++;
        }
        return (0);
    }

#include <stdio.h>

int main()
{

    printf("%d\n", ft_find_next_prime(-1137));
    printf("%d\n", ft_find_next_prime(-0));
    printf("%d\n", ft_find_next_prime(-1));
    printf("%d\n", ft_find_next_prime(-1137));
    printf("%d\n", ft_find_next_prime(2147483643));
    printf("%d\n", ft_find_next_prime(2147483645));
    printf("%d\n", ft_find_next_prime(2147483646));
    printf("%d\n", ft_find_next_prime(2147483647));
    printf("%d\n", ft_find_next_prime(195586));
    printf("%d\n", ft_find_next_prime(331782));
    printf("%d\n", ft_find_next_prime(196103));
}



/*
@@ -1,13 +1,13 @@$
--1137 -> 0$
-0 -> 0$
-1 -> 0$
+-1137 -> 2$
+0 -> 2$
+1 -> 2$
 2 -> 2$
 7853 -> 7853$
 78989 -> 78989$
-2147483643 -> 0$
-2147483645 -> 0$
-2147483646 -> 0$
-2147483647 -> 0$
+2147483643 -> 2147483647$
+2147483645 -> 2147483647$
+2147483646 -> 2147483647$
+2147483647 -> 2147483647$
 195586 -> 195593$
 331782 -> 331801$
 196103 -> 196111$
*/