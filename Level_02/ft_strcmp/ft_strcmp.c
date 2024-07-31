int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}

// #include <stdio.h>

// int main(void)
// {
//     char* s1 = "abc";
//     char* s2 = "cnl";
//     printf("cmp is : %d", ft_strcmp(s1, s2));
// }