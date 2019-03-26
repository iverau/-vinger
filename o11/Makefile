OBJ = main.o util.o list.o LinkedList.o temp.o TemplateLinkedList.o
program = prog


.DEFAULT_GOAL := run

$(program): $(OBJ)
	@g++ -o $(program) $(OBJ)


.PHONY:
run: $(program)
	@./$(program)

.PHONY:
c:
	@rm -f *.o $(program)
