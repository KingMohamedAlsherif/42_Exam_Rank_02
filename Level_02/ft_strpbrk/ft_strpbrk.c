#include <stddef.h>

// char	*ft_strpbrk(const char *s1, const char *s2)
// {
//     int i;
//     int j;

//     i = 0;
//     if (!s1 || !s2)
//         return(0);
//     while(s1[i++])
//     {
//         j = 0;
//         while(s2[j++])
//         {
//             if (s1[i] == s2[j])
//                 return ((char *)s1);
//             j++;
//         }
//     }
//     return (NULL);
// }
#include <stdio.h>

#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	
	if (!s1 || !s2)
		return (0);
	while(*s1)
	{
		i = 0;
	   	while(s2[i])
		{
			if(*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;	
	}
	return (NULL);
}

// int main(void)
// {
//     char*   s = "Hello Crazy World";
//     char*   r = "Crazy";
//     printf("%s", ft_strpbrk(s, r));
// }



// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "KingAlsherif";
// 	char sym[] = "A";

// 	printf ("\"%s\" -.\n", ft_strpbrk(str, sym));
// 	return (0);
// }
