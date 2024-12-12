CXX=c++
CXXFLAGS=-Wall -Wextra -Werror
CXXVER=-std=c++98
SRCS=$(wildcard src/*.cpp)
OBJS=$(SRCS:.cpp=.o)
INC=-Iinclude
NAME=MyFirstClass

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(OBJS) -o $@

%.o:%.cpp
	$(CXX) $(CXXFLAGS) $(CXXVER) $(INC) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
