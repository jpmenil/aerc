/*
 * imap/select.c - issues and handles IMAP SELECT commands
 */
#define _POSIX_C_SOURCE 200809L
#include <string.h>
#include "internal/imap.h"
#include "util/list.h"
#include "util/stringop.h"

void imap_select(struct imap_connection *imap, imap_callback_t callback,
		void *data, const char *mailbox) {
	imap_send(imap, callback, data, "SELECT %s", mailbox);
}