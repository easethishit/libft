/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 21:08:57 by elmartin          #+#    #+#             */
/*   Updated: 2021/05/18 21:29:15 by elmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);						// Returns de number of chars before the NULL in a string.
int	ft_numlen(long nb);							// Returns the number of chars needed for writing a number "nb" in a string.
int	ft_isprint(int c);							// Tells if a character is printable.
int	ft_isdigit(int c);							// Tells if a character is a digit.
int	ft_isalnum(int c);							// Tells if a character is alphanumeric or digit. 
int	ft_isalpha(int c);							// Tells if a character is alphanumeric.
int	ft_isascii(int c);							// Tells if a character is ascii.
int	ft_isprint(int c);							// Tells if a character is printable.
int	ft_tolower(int c);							// Converts upper-case to lower-case.
int	ft_toupper(int c);							// Converts lower-case to upper-case.
int	ft_strncmp(const char *s1, const char *s2, size_t n);			// Compares n characters of two strings and returns the diference between the two first diferent ones.
int	ft_memcmp(const void *s1, const void *s2, size_t n);			// Compares n characters of two strings and returns the diference between the two first diferent ones.
void	*ft_memchr(const void *s, int c, size_t n);				// Locates the first occurrence of "c" in string "s".
char	*ft_strchr(const char *s, int c);					// Locates the first occurrence of "c" in string "s".
char	*ft_strrchr(const char *s, int c);					// Locates the last occurrence of "c" in string "s".
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);	// Locates the first occurrence of string "needle" in string "haystack". No more than len characters are searched.
void	*ft_memcpy(void *dst, const void *src, size_t n);			// Copy n bytes from memory src to memory dst. If dst and src memory overlaps memove should be used instead.
void	*ft_memmove(void *dst, const void *src, size_t len);			// Copy len bytes from memory src to memory dst. It should be used when src and dst memory overlaps.
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);		// Copy "n" bytes from "src" to "dst", if "c" is found, stops copying.
void	*ft_strcpy(char *dest, const char *src);				// Copy the string "src" to "dst".
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);			// Copy the string "src" to "dst" and guarantee is NULL terminated.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);			// Appends the string "src" to the end of "dst" and guarantee is NULL terminated. 
void	*ft_memset(void *b, int c, size_t len);					// Writes "c" "len" times in the string "b".
void	ft_putchar_fd(char c, int fd);						// Writes the char "c" with the file descriptor.
void	ft_putendl_fd(char *s, int fd);						// Writes the string "s" with the file descriptor and ends with "\n".
void	ft_putnbr_fd(int n, int fd);						// Writes the number "n" with the file descriptor.
void	ft_putstr_fd(char *s, int fd);						// Writes the string "s" with the file descriptor. 
int	ft_atoi(const char *str);						// Converts a char string to int, gets rid of tabulations, spaces, etc.
char	*ft_itoa(int nb);							// Converts the number "nb" to a string.
char	*ft_strdup(const char *s1);						// Allocates memory for a copy of "s1" does the copy and returns a pointer to it.
void	*ft_calloc(size_t count, size_t size);					// Allocates memory for "count" items with "size" len.
char	*ft_strjoin(char const *s1, char const *s2);				// Allocates memory with malloc, and returns a string of "s2" appended to "s1".
char	*ft_substr(char const *s, unsigned int start, size_t len);		// Allocates memory with malloc, and returns a pointer to the "start" of the copy.
void	ft_bzero(void *s, size_t n);						// Fills n bytes of a string with zeros.
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
