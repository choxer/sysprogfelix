CFLAGS += -W -Wall -Wextra -Werror 

all: own_pwd own_tty own_whoami own_sync

clean:
	$(RM) *.o own_pwd own_tty own_whoami own_sync
