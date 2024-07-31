#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char* s, int c)
{
    int i = 0;
    while(s[i])
    {
        if (s[i] == c)
            return ((char *)s);
        i++;
    }
    return(0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while(s[i])
    {
        if (ft_strchr(accept, s[i]) == 0)
            break;
        i++;
    }
    return(i);
}

int main(void)
{
    char*   s = "Hello From King to the World";
    char*   r = "Hello";
    printf("%zu\n", ft_strspn(s, r));
    printf("%zu", strspn(s, r));
}