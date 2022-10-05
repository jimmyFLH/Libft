#include "libft.h"

int main()
{
    char *s = "allo";
    char *fin = malloc(10000);

    printf("ft_strlen (allo = 4) : %d\n", ft_strlen(s));
    ft_strlcpy(fin, s, ft_strlen(s));
    printf("ft_strlcpy de (allo) : %s\n", fin);
    return 0;
}
