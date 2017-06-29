# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sijang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/01 19:42:13 by sijang            #+#    #+#              #
#    Updated: 2016/12/19 17:22:20 by sijang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS	=	objs
CC		=	gcc
WFLAGS	=	-Wall -Wextra -Werror
CFLAGS	=	-c
GFLAGS	=	-g
IFLAGS	=	-I .
C_SRCS	=	ft_memset.c    \
			ft_bzero.c     \
			ft_memcpy.c    \
			ft_memccpy.c   \
			ft_memmove.c   \
			ft_memchr.c    \
			ft_memcmp.c    \
			ft_strlen.c	   \
			ft_strdup.c    \
			ft_strcpy.c    \
			ft_strncpy.c   \
			ft_strcat.c    \
			ft_strncat.c   \
			ft_strlcat.c   \
			ft_strchr.c    \
			ft_strrchr.c   \
			ft_strstr.c    \
			ft_strnstr.c   \
			ft_strcmp.c    \
			ft_strncmp.c   \
			ft_atoi.c      \
			ft_isalpha.c   \
			ft_isdigit.c   \
			ft_isalnum.c   \
			ft_isascii.c   \
			ft_isprint.c   \
			ft_toupper.c   \
			ft_tolower.c   \
			ft_memalloc.c  \
			ft_memdel.c    \
			ft_strnew.c    \
			ft_strdel.c    \
			ft_strclr.c    \
			ft_striter.c   \
			ft_striteri.c  \
			ft_strmap.c    \
			ft_strmapi.c   \
			ft_strequ.c    \
			ft_strnequ.c   \
			ft_strsub.c	   \
			ft_strjoin.c   \
			ft_strtrim.c   \
			ft_strsplit.c  \
			ft_itoa.c      \
			ft_putchar.c   \
			ft_putstr.c    \
			ft_putendl.c   \
			ft_putnbr.c    \
			ft_putchar_fd.c\
			ft_putstr_fd.c \
			ft_putendl_fd.c\
			ft_putnbr_fd.c \
			ft_lstnew.c    \
			ft_lstdelone.c \
			ft_lstdel.c    \
			ft_lstadd.c    \
			ft_lstiter.c   \
			ft_lstmap.c    \
			ft_lstsplit.c  \
			ft_intredu.c   \
			ft_arrtlst.c   \
			ft_isprime.c   \
			ft_itoa_base.c \
			ft_putnbr_base.c	\
			ft_arrcpy.c			\
			ft_strccpy.c		\
			ft_arrccpy.c		\
			ft_arrcmp.c			\
			ft_strclen.c		\
			ft_fndsquare.c		\
			ft_strndup.c		\
			ft_linenew.c		\
			ft_lineadd.c		\
			ft_strset.c		\
			get_next_line.c
C_OBJS	=	$(addprefix $(OBJS)/, $(notdir ${C_SRCS:.c=.o}))
NAME	=	libft.a

.PHONY:		all clean fclean re

all:		$(NAME)

$(C_OBJS):	$(C_SRCS)
	@mkdir -p $(OBJS) ||:
	@$(CC) $(WFLAGS) $(IFLAGS) $(CFLAGS) $(subst $(OBJS),.,$*.c) -o $@ ||:

$(NAME):	$(C_OBJS)
	@ar	rcs	$@ $^ ||:
	@ranlib	$@ ||:

clean:
	@rm -rf $(OBJS) ||:

fclean:		clean
	@rm -rf libft.a ||:

re:			fclean all
