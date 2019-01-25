WARNFLAGS = -W -Wall -Werror
OPTFLAGS = -std=c11
CFLAGS += $(WARNFLAGS) $(OPTFLAGS)

OBJS = main.o hello.o bye.o

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *~ *.o main
