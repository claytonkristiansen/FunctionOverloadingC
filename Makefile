OUT_DIR = build
OUT_PROG = function_overloading
ARGS = 

default: actions.o house.o
	mkdir -p $(OUT_DIR)
	gcc $(OUT_DIR)/actions.o $(OUT_DIR)/house.o function_overloading.c -o $(OUT_DIR)/$(OUT_PROG)

actions.o: lib/actions.h lib/actions.c
	gcc lib/actions.c -c -o $(OUT_DIR)/actions.o

house.o: house.h house.c
	gcc house.c -c -o $(OUT_DIR)/house.o

run:
	./$(OUT_DIR)/$(OUT_PROG) $(ARGS)

clean:
	rm build/* -rf