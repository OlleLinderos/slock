/* user and group to drop privileges to */
static const char *user  = "blue";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
static const char * message = "I'm locked";
static const char * text_color = "#ffffff";
static const char * font_name = "6x13";
