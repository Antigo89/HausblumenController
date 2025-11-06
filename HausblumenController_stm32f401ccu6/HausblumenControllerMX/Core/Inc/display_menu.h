
#ifndef DISPMENU_H
#define DISPMENU_H

/***Sub menu***/
typedef enum{
  SUB_MENU_SETTING = 0,
  SUB_MENU_DATETIME_YEAR,
  SUB_MENU_DATETIME_MONTH,
  SUB_MENU_DATETIME_DAY,
  SUB_MENU_DATETIME_HOUR,
  SUB_MENU_DATETIME_MINUTE,
}subMenu_t;

typedef enum{
  MENU_SETTINGS = 0,
  MENU_ENCODER_VALUE,
  MENU_DATETIME,
}menu_t;

#define MENU_MIN_POSITION 1
#define MENU_MAX_POSITION 2
 /***Setting menu***/
char punct0[] = "***settings***";
char punct1[] = "Encoder";
char punct2[] = "DateTime";
char punct3[] = "";
char punct4[] = "";
char punct5[] = "";
char punct6[] = "";
char punct7[] = "";
char punct8[] = "";
char punct9[] = "";
char punct10[] = "";
char punct11[] = " ";
char punct12[] = " ";
char* punct_s[] = {
  punct0, punct1, punct2
};

#endif