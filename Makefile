x_voidtest: voidtest.c
	gcc voidtest.c -o x_voidtest -I .

test:
	./x_voidtest
