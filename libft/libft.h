/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:12:47 by flauer            #+#    #+#             */
/*   Updated: 2023/03/17 10:51:44 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

// Part 1: libc functions
int		ft_isalpha(int c); //done
int		ft_isdigit(int c); //done
int		ft_isalnum(int c); //done
int		ft_isascii(int c); //done
int		ft_isprint(int c); //done
size_t	ft_strlen(const char *s); //done
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); //done
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); //done
int		ft_strncmp(const char *s1, const char *s2, size_t n); //done
void	*ft_memset(void *b, int c, size_t len); //done
void	ft_bzero(void *s, size_t n); //done
void	*ft_memcpy(void *dst, const void *src, size_t n); //done
void	*ft_memmove(void *dst, const void *src, size_t len); //done
int		ft_toupper(int c); //done
int		ft_tolower(int c); //done
char	*ft_strchr(const char *s, int c); //done
char	*ft_strrchr(const char *s, int c); //done
void	*ft_memchr(const void *s, int c, size_t n); //done
int		ft_memcmp(const void *s1, const void *s2, size_t n); //done
char	*ft_strnstr(const char *haystack, const char *needle, size_t len); //done
int		ft_atoi(const char *str); //done
void	*ft_calloc(size_t count, size_t size); //done
char	*ft_strdup(const char *s1); //done

// Part 2: Additional functions
char	*ft_substr(char const *s, unsigned int start, size_t len); //done
char	*ft_strjoin(char const *s1, char const *s2); //done
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// Part 3: bonus
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
