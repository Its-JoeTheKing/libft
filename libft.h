#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *s, int n);
void	*ft_calloc(int n, int size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, int n);
int	ft_memcmp(const void *s1, const void *s2, int n);
void	*ft_memcpy(void *dest, const void *s, int n);
void	*ft_memmove(void *dest, const void *src, int n);
void	*ft_memset(void *s, int x, int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_strlen(const char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, int n);
char	*ft_strnstr(const char *haystack, const char *needle, int n);
char	*ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, int len);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif