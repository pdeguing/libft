# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdeguing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/11 16:30:10 by pdeguing          #+#    #+#              #
#    Updated: 2018/10/04 16:48:11 by pdeguing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS		:= -Wall -Wextra -Werror

NAME		:= libft.a
SRCDIR		:= srcs
OBJDIR		:= obj
INCDIR		:= includes

INTDIR		:= ft_int
ISDIR		:= ft_is
LSTDIR		:= ft_lst
MEMDIR		:= ft_mem
PRINTFDIR	:= ft_printf
PUTDIR		:= ft_put
STRDIR		:= ft_str
UTILSDIR	:= ft_utils

FT_INT		:= ft_atoi.c ft_itoa.c ft_utoa.c

FT_IS		:= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c \
			  ft_isprint.c ft_isupper.c

FT_LST		:= ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c \
			  ft_lstnew.c

FT_MEM		:= ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memcpy.c ft_memdel.c \
			  ft_memmove.c ft_memset.c

FT_PRINTF	:= format_char.c format_conversion.c format_int.c format_int_helpers.c \
			   format_str.c ft_printf.c get_conversion.c get_flags.c get_utf.c \
			   init_conversion.c print_format.c

FT_PUT		:= ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c \
			  ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c

FT_STR		:= ft_strcat.c ft_strcpy.c ft_strffjoin.c ft_striteri.c ft_strmap.c \
			  ft_strncpy.c ft_strrchr.c ft_strtrim.c ft_strchr.c ft_strdel.c \
			  ft_strfjoin.c	ft_strjoin.c ft_strmapi.c ft_strnequ.c ft_strsplit.c \
			  ft_strclr.c ft_strdup.c ft_strfljoin.c ft_strlcat.c ft_strncat.c \
			  ft_strnew.c ft_strstr.c ft_strcmp.c ft_strequ.c ft_striter.c \
			  ft_strlen.c ft_strncmp.c ft_strccmp.c ft_strnstr.c ft_strsub.c

FT_UTILS	:= ft_capitalize.c ft_ctostr.c ft_intlen.c ft_tolower.c ft_toupper.c \
			  ft_uintlen.c ft_wrdc.c ft_wrdlen.c get_next_line.c ft_pstrcchr.c \
			  ft_pstrdel.c

INT_D		:= $(addprefix $(INTDIR)/, $(FT_INT))
IS_D		:= $(addprefix $(ISDIR)/, $(FT_IS))
LST_D		:= $(addprefix $(LSTDIR)/, $(FT_LST))
MEM_D		:= $(addprefix $(MEMDIR)/, $(FT_MEM))
PRINTF_D	:= $(addprefix $(PRINTFDIR)/, $(FT_PRINTF))
PUT_D		:= $(addprefix $(PUTDIR)/, $(FT_PUT))
STR_D		:= $(addprefix $(STRDIR)/, $(FT_STR))
UTILS_D		:= $(addprefix $(UTILSDIR)/, $(FT_UTILS))

ALL			:= $(INT_D) $(IS_D) $(LST_D) $(MEM_D) $(PRINTF_D) $(PUT_D) $(STR_D) $(UTILS_D)
HEADERS		:= $(wildcar$(INCDIR)/*.h)
SRCS		:= $(addprefix $(SRCDIR)/, $(ALL))
OBJECTS		:= $(addprefix $(OBJDIR)/, $(patsubst %.c, %.o, $(ALL)))

all: $(NAME)

$(NAME): $(OBJECTS)
	@ ar rcs $@ $^
	@ ranlib $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@ gcc -c $(CFLAGS) -I$(INCDIR) $< -o $@

$(OBJDIR):
	@ mkdir $(OBJDIR)
	@ mkdir $(addprefix $(OBJDIR)/, $(INTDIR))
	@ mkdir $(addprefix $(OBJDIR)/, $(ISDIR))
	@ mkdir $(addprefix $(OBJDIR)/, $(LSTDIR))
	@ mkdir $(addprefix $(OBJDIR)/, $(MEMDIR))
	@ mkdir $(addprefix $(OBJDIR)/, $(PRINTFDIR))
	@ mkdir $(addprefix $(OBJDIR)/, $(PUTDIR))
	@ mkdir $(addprefix $(OBJDIR)/, $(STRDIR))
	@ mkdir $(addprefix $(OBJDIR)/, $(UTILSDIR))

clean:
	@ /bin/rm -rf $(OBJDIR)

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all

norm:
	@ norminette $(SRCS) $(HEADERS)

.PHONY: clean fclean all re
