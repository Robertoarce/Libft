# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarce <rarce@42.student.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 15:38:36 by rarce             #+#    #+#              #
#    Updated: 2020/05/06 19:11:06 by rarce            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = clang
AR = ar -rcs
CFLAGS = -Wall
CFLAGS += -Wextra
CFLAGS += -Werror

SRCS = ft_memset.c
SRCS += ft_bzero.c
SRCS += ft_memcpy.c
SRCS += ft_memccpy.c
SRCS += ft_memmove.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_calloc.c
SRCS += ft_putchar_fd.c
SRCS += ft_putstr_fd.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr_fd.c
SRCS += ft_isalpha.c
SRCS += ft_isdigit.c
SRCS += ft_isalnum.c
SRCS += ft_isascii.c
SRCS += ft_isprint.c
SRCS += ft_toupper.c
SRCS += ft_tolower.c
SRCS += ft_strncmp.c
SRCS += ft_atoi.c
SRCS += ft_strlen.c
SRCS += ft_strlcpy.c
SRCS += ft_strlcat.c
SRCS += ft_strchr.c
SRCS += ft_strrchr.c
SRCS += ft_strnstr.c
SRCS += ft_strdup.c
SRCS += ft_substr.c
SRCS += ft_strjoin.c
SRCS += ft_strtrim.c
SRCS += ft_split.c
SRCS += ft_itoa.c
SRCS += ft_strmapi.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

OBJS = $(SRCS:.c=.o)

OBJSBONUS = $(BONUS:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -g -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus:	$(OBJS) $(OBJSBONUS)
	$(AR) $(NAME) $(OBJS) $(OBJSBONUS)

clean:
	$(RM) $(OBJS) $(OBJSBONUS)
#	echo "Cleaning Objs"

fclean:	clean
	$(RM) $(NAME)
#	echo "Cleaning Lib"

re:	fclean all

.PHONY:	clean fclean re bonus
#.SILENT: clean fclean