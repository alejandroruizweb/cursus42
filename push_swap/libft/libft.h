/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:41:24 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/05/11 13:45:22 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int			ft_is_valid(char *str, int *strnumber, int index);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *s);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
long long	ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void*));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/* La función principal usa un número de argumentos x (...), lo busca en 
*print. Va avanzando en la string e imprimiendo hasta que encuentra un %.
Cuando lo encuentra avanza 1 caracter y hace lo que la función index 
dice. Cuando usamos printf a parte de imprimir lo que sea nos devuelve 
un número que coincide con los caracteres impresos. (i)*/
int			ft_printf(char const *print, ...);
/* La función que imprime caracter a caracter. (*i)++ nos vale para contar 
el número de caracteres impresos tal como hace el printf original */
void		ft_printchar_pf(char c, size_t *i);
/* Si el caracter siguiente al % es s imprime la string print caracter a 
caracter */
void		ft_printstr_pf(char *print, size_t *i);
/* Si el caracter siguiente al % es d o i imprime un entero. Gestionando el
máximo y los negativos */
void		ft_printdori_pf(int n, size_t *i);
/* Imprime el entero sin signo. */
void		ft_printunsig_pf(unsigned int n, size_t *i);
/* Convierte a Hexadecimal minúscula cogiendo los caracteres del 
base_character al dividirlo entre 16*/
void		ft_printhex_pf(unsigned int n, size_t *i);
/* La misma función que ft_printhex pero en mayúscula */
void		ft_printuphex_pf(unsigned int n, size_t *i);
/* Esta función imprime un puntero de memoria. Lo hacemos imprimiendo un 0x y
después la misma función que ft_printhex pero con unsigned long int*/
void		ft_printmemptr_pf(unsigned long int n, size_t *i);

#endif