#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
    unsigned char   *ptr;

    i = 0;
    ptr = (unsigned char *)b; 
    while (i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

void   *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char          *dst_char;
    const unsigned char    *src_char;
    size_t                 i;

    dst_char = (unsigned char *)dst;
    src_char = (const unsigned char *)src;
    i = 0;
    while (i < n)
    {
        dst_char[i] = src_char[i];
        i++;
    }
    return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char		*dst_char;
    const unsigned char	*src_char;

    /* if len is zero, nothing to do — allow NULL pointers in that case */
    if (len == 0)
        return (dst);
    if (!dst || !src)
        return (NULL);
    dst_char = (unsigned char *)dst;
    src_char = (const unsigned char *)src;
    if (dst_char > src_char)
    {
        dst_char += len;
        src_char += len;
        while (len--)
            *(--dst_char) = *(--src_char);
    }
    else
    {
        while (len--)
            *(dst_char++) = *(src_char++);
    }
    return (dst);
}

size_t	ft_strlcpy(char *dst, const char *src,
	size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while ((i < dstsize + 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

int	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(src);
	
}

int main(void)
{
    char    *c1;

    /* allocate a buffer (3 chars + null) and initialize it */
    c1 = (char *)malloc(4);
    if (c1 == NULL)
        return (1);
    ft_memset(c1, 'f', 3);
    c1[3] = '\0';

    printf("%c\n", c1[1]);
    free(c1);
    return (0);
}

