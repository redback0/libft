/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njackson <njackson@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:09:44 by njackson          #+#    #+#             */
/*   Updated: 2024/02/20 22:53:23 by njackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// libc stuff
// libc memory stuff
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// libc string stuff
int		ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);

char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
// might need to change the prototype
size_t	*ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strcmp(const char *s1, const char *s2);

int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *nptr);

// libc char stuff
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);

int		ft_isprint(int c);
int		toupper(int c);
int		tolower(int c);

// libft stuff
// libft mem minip functions
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);

void	ft_strclr(char *s);

// libft string iteration functions
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// libft string comparisons
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);

// libft string minip functions
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);

// libft misc
char	*ft_itoa(int n);

// libft put functions
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s, int fd);
void	ft_putendl(char const *s, int fd);
void	ft_putnbr_fd(char const *s, int fd);

// libft BONUS
// linked_lists!!!
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void	ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));