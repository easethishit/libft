# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elmartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 19:07:42 by elmartin          #+#    #+#              #
#    Updated: 2021/05/18 21:20:51 by elmartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_atoi.c		\
	  ft_bzero.c		\
	  ft_isdigit.c		\
	  ft_isalnum.c		\
	  ft_isalpha.c		\
	  ft_isascii.c		\
	  ft_isprint.c		\
	  ft_memccpy.c		\
	  ft_memchr.c		\
	  ft_memcmp.c		\
	  ft_memcpy.c		\
	  ft_memmove.c		\
	  ft_memset.c		\
	  ft_strchr.c		\
	  ft_strlcat.c		\
	  ft_strlcpy.c		\
	  ft_strlen.c		\
	  ft_strncmp.c		\
	  ft_strnstr.c		\
	  ft_strrchr.c		\
	  ft_tolower.c		\
	  ft_toupper.c		\
	  ft_calloc.c		\
	  ft_strdup.c		\
	  ft_strcpy.c		\
	  ft_strjoin.c		\
	  ft_numlen.c		\
	  ft_itoa.c		\
	  ft_putstr_fd.c	\
	  ft_putnbr_fd.c	\
	  ft_putchar_fd.c	\
	  ft_putendl_fd.c	\
	  ft_substr.c		\
	  ft_split.c		\
	  ft_strtrim.c		\
	  ft_strmapi.c

SRCSBNS	= ft_lstnew.c		\
	  ft_lstadd_front.c	\
	  ft_lstsize.c		\
	  ft_lstlast.c		\
	  ft_lstadd_back.c	\
	  ft_lstdelone.c	\
	  ft_lstclear.c		\
	  ft_lstiter.c		\
	  ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

OBJSBNS	= ${SRCSBNS:.c=.o}

RM	= rm -f
	
CC	= gcc

CFLAGS	= -Wall -Wextra -Werror -I.

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} 
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} $(OBJSBNS)

fclean: clean
	${RM} ${NAME}

re: fclean all

bonus:  $(SRCS) $(OBJSBNS)
	gcc $(CFLAGS) -c $(SRCS) $(SRCSBNS)
	ar rc $(NAME) $(OBJ) $(OBJSBNS)

.PHONY: all clean fclean re
