COMPILEFLAGS=
CCOMP=gcc

main: main.o init.o add.o print.o get_node.o get_indexes.o search.o delete.o release_node.o view.o help.o
	$(CCOMP) $(COMPILEFLAGS) -o main main.o init.o add.o print.o get_node.o get_indexes.o search.o delete.o release_node.o view.o help.o
main.o: main.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c main.c
init.o: init.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c init.c
add.o: add.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c add.c
print.o: print.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c print.c
get_node.o: get_node.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c get_node.c
get_indexes.o: get_indexes.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c get_indexes.c
search.o: search.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c search.c
delete.o: delete.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c delete.c
release_node.o: release_node.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c release_node.c
view.o: view.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c view.c
help.o: help.c header.h
	$(CCOMP) $(COMPILEFLAGS) -c help.c
clean:
	rm main.o init.o add.o print.o get_node.o get_indexes.o delete.o release_node.o search.o view.o help.o main
