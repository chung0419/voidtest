all: x_voidtest x_size_of_variable01

x_voidtest: voidtest.c
	gcc voidtest.c -o x_voidtest -I .

x_size_of_variable01: size_of_variable01.c
	gcc size_of_variable01.c -o x_size_of_variable01 -I .

test:
	./x_voidtest && ./x_size_of_variable01
