// WARNING: You are looking for the other kprintf.h - this one is just for the exe2minixfs tool!

#define kprintfd(fmt,args...) do { printf(fmt, ## args); } while (0)
#define debug(flag,fmt,args...) do { if (flag & 0x80000000) { printf(fmt,## args); } } while(0)
#define isDebugEnabled(flag) (flag & 0x80000000)