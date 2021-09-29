#ifndef HEADER_FILE
#define HEADER_FILE

enum KK_nimet {TAMMIKUU, HELMIKUU, MAALISKUU, HUHTIKUU, TOUKOKUU, KESAKUU, HEINAKUU, ELOKUU, SYYSKUU, LOKAKUU, MARRASKUU, JOULUKUU};
enum {KK_LKM=12};
const char *KK_NIMET;
const char KK_PAIVAT;
int karkausvuosi(int vuosiluku);
char kkPituus(const char *kkNimi, int vuosiluku);

#endif 