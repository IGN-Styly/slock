/* user and group to drop privileges to */
static const char *user  = "empty"; //Replace this with your username
static const char *group = "empty"; //this one too

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Background image path, should be available to the user above */
static const char* background_image = "<PATH TO SLOCK>/slock.png"; //Replace <PATH TO SLOCK> with where you cloned the repo or give path to the image you wanna use