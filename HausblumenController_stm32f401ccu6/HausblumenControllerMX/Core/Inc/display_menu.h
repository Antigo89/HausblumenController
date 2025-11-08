
#ifndef DISPMENU_H
#define DISPMENU_H

/***Sub menu***/
typedef enum{
  SUB_MENU_OUT = 0,
  SUB_MENU_DATETIME_DAY,
  SUB_MENU_DATETIME_MONTH,
  SUB_MENU_DATETIME_YEAR,
  SUB_MENU_DATETIME_HOUR,
  SUB_MENU_DATETIME_MINUTE,
  SUB_MENU_LVL
}subMenu_t;

typedef enum{
  MENU_LIGHT_TIME = 0,
  MENU_LIGHT,
  MENU_HUMIDITY,
  MENU_DATETIME,
  MENU_WATER_TIME,
  MENU_WATER_PERIOD
}displayMenu_t;

#define MENU_MIN_POSITION 0
#define MENU_MAX_POSITION 8
 /***menu***/
char punct0[] = "TimeLight SetCur";
char punct1[] = "Light SetCur";
char punct2[] = "Humidity SetCur";
char punct3[] = "DateTime";
char punct4[] = "WaterTime";
char punct5[] = "WaterPeriod";
char punct6[] = "Light out";
char punct7[] = "Steam out";
char punct8[] = "Water out";
char punct9[] = "";
char punct10[] = "";
char punct11[] = " ";
char punct12[] = " ";
char* punct_s[] = {
  punct0, punct1, punct2, punct3, punct4, punct5, punct6, punct7, punct8
};

#endif