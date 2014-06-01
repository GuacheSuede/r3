/*
 * slug.h
 * Copyright (C) 2014 c9s <c9s@c9smba.local>
 *
 * Distributed under terms of the MIT license.
 */
#ifndef R3_SLUG_H
#define R3_SLUG_H

typedef struct {
    /**
     * source path
     */
    char * path;

    int path_len;

    /**
     * slug start pointer
     */
    char * begin;

    /**
     * slug end pointer
     */
    char * end;

    /**
     * slug length
     */
    int len;

    // slug pattern pointer if we have one
    char * pattern;

    // the length of custom pattern, if the pattern is found.
    int    pattern_len;

} r3_slug_t;


r3_slug_t * r3_slug_new(char * path, int path_len);

int r3_slug_check(r3_slug_t *s, char **errstr);

r3_slug_t * r3_slug_parse(const char *needle, int needle_len, char *offset, char **errstr);

char * r3_slug_to_str(r3_slug_t *s);

void r3_slug_free(r3_slug_t * s);

#endif /* !SLUG_H */