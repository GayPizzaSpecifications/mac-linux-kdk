#if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#define le16toh(x) __builtin_bswap16(x)
#define le32toh(x) __builtin_bswap32(x)
#define le64toh(x) __builtin_bswap64(x)
#else
#define le16toh(x) ((unsigned short) x)
#define le32toh(x) ((unsigned int) (x))
#define le64toh(x) ((unsigned long) (x))
#endif
