CFLAGS = -Wall 

ver2: main 
ver2: CFLAGS += -Iawesome2

ver3: main 
ver3: CFLAGS += -Iawesome3

debug: main 
debug: CFLAGS += -DDEBUG -Iawesome3

clean: 	
	$(RM) main
