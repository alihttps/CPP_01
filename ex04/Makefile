NAME = sed
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(wildcard *.cpp)

OBJS = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all

.SECONDARY : $(OBJS)