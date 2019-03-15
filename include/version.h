#ifndef	ENBHELPERSE_VERSION_INCLUDED
#define ENBHELPERSE_VERSION_INCLUDED

#define ENBHELPERSE_MAKE_STR_HELPER(x) #x
#define ENBHELPERSE_MAKE_STR(x) ENBHELPERSE_MAKE_STR_HELPER(x)

#define ENBHELPERSE_VERSION_MAJOR		1
#define ENBHELPERSE_VERSION_MINOR		3
#define ENBHELPERSE_VERSION_PATCH		0
#define ENBHELPERSE_VERSION_BETA		0
#define ENBHELPERSE_VERSION_VERSTRING	ENBHELPERSE_MAKE_STR(ENBHELPERSE_VERSION_MAJOR) "." ENBHELPERSE_MAKE_STR(ENBHELPERSE_VERSION_MINOR) "." ENBHELPERSE_MAKE_STR(ENBHELPERSE_VERSION_PATCH) "." ENBHELPERSE_MAKE_STR(ENBHELPERSE_VERSION_BETA)

#endif
