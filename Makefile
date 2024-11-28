OUT_DIR = build
OUT_PROG = function_overloading
ARGS = 

default: actions.o
	mkdir -p $(OUT_DIR)
	gcc $(OUT_DIR)/actions.o function_overloading.c -o $(OUT_DIR)/$(OUT_PROG)

actions.o: lib/actions.h lib/actions.c
	gcc lib/actions.c -c -o $(OUT_DIR)/actions.o

run:
	./$(OUT_DIR)/$(OUT_PROG) $(ARGS)

clean:
	rm build/* -rf