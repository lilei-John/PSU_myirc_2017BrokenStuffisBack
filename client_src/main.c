/*
** EPITECH PROJECT, 2018
** MY_IRC
** File description:
** my_irc client source
*/

#include "../include/client.h"
#include <ncurses.h>
#include <sys/epoll.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	write_separator(void)
{
	int i = 0;

	while (i < COLS) {
		move(LINES - 2, i);
		printw("_");
		i++;
	}
}

char *getmessage(void)
{
	static char message[515];

	read(0, message, 515);
	return message;
}

int main(int ac, char **av)
{
	if (ac != 2) {
		return 84;
	} else if (av) {
		initscr();
		write_separator();
		move(LINES -1, 0);
		printw("message:");
		refresh();
		getch();
		endwin();
	}
	return 0;
}
