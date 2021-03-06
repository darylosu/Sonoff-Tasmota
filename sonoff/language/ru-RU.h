/*
  ru-RU.h - localization for Russian - Rissia for Sonoff-Tasmota

  Copyright (C) 2018  Theo Arends / roman-vn

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _LANGUAGE_RU_RU_H_
#define _LANGUAGE_RU_RU_H_

/*************************** ATTENTION *******************************\
 *
 * Due to memory constraints only UTF-8 is supported.
 * To save code space keep text as short as possible.
 * Time and Date provided by SDK can not be localized (yet).
 * Use online command StateText to translate ON, OFF, HOLD and TOGGLE.
 * Use online command Prefix to translate cmnd, stat and tele.
 *
\*********************************************************************/

//#define LANGUAGE_MODULE_NAME         // Enable to display "Module Generic" (ie Spanish), Disable to display "Generic Module" (ie English)

// "2017-03-07T11:08:02" - ISO8601:2004
#define D_YEAR_MONTH_SEPARATOR "-"
#define D_MONTH_DAY_SEPARATOR "-"
#define D_DATE_TIME_SEPARATOR "T"
#define D_HOUR_MINUTE_SEPARATOR ":"
#define D_MINUTE_SECOND_SEPARATOR ":"

#define D_DAY3LIST "ВскПонВтрСрдЧетПятСуб"
#define D_MONTH3LIST "ЯнвФевМарАпрМайИюнИюлАвгСенОктНояДек"

// Non JSON decimal separator
#define D_DECIMAL_SEPARATOR ","

// Common
#define D_ADMIN "Admin"
#define D_AIR_QUALITY "Качество воздуха"
#define D_AP "AP"                    // Access Point
#define D_AS "как"
#define D_AUTO "АВТО"
#define D_BLINK "Мигать"
#define D_BLINKOFF "Не Мигать"
#define D_BOOT_COUNT "Количество загрузок"
#define D_BRIGHTLIGHT "Яркость"
#define D_BUTTON "Кнопка"
#define D_BY "by"                    // Written by me
#define D_BYTES "Байт"
#define D_CELSIUS "Цельсия"
#define D_CO2 "Углекислый газ"
#define D_CODE "код"                // Button code
#define D_COLDLIGHT "Холодный"
#define D_COMMAND "Команда"
#define D_CONNECTED "Соединен"
#define D_COUNT "Подсчет"
#define D_COUNTER "Счетчик"
#define D_CURRENT "Ток"          // As in Voltage and Current
#define D_DATA "Данные"
#define D_DARKLIGHT "Темный"
#define D_DEBUG "Отладка"
#define D_DISABLED "Блокирован"
#define D_DNS_SERVER "DNS Сервер"
#define D_DONE "Выполнено"
#define D_DST_TIME "DST"
#define D_EMULATION "Эмуляция"
#define D_ENABLED "Активно"
#define D_ERASE "Стирать"
#define D_ERROR "Ошибка"
#define D_FAHRENHEIT "Фаренгейт"
#define D_FAILED "Неудачно"
#define D_FALLBACK "Обратная связь"
#define D_FALLBACK_TOPIC "Топик обратной связи"
#define D_FALSE "Ложно"
#define D_FILE "Файл"
#define D_FREE_MEMORY "Свободная память"
#define D_GAS "Газ"
#define D_GATEWAY "Шлюз"
#define D_GROUP "Группа"
#define D_HOST "Хост"
#define D_HOSTNAME "Имя Хоста"
#define D_HUMIDITY "Влажность"
#define D_ILLUMINANCE "Освещенность"
#define D_IMMEDIATE "немедленно"      // Button immediate
#define D_INDEX "Индекс"
#define D_INFO "Инфо"
#define D_INITIALIZED "Инициализировано"
#define D_IP_ADDRESS "IP Адрес"
#define D_LIGHT "Свет"
#define D_LWT "LWT"
#define D_MODULE "Модуль"
#define D_MQTT "MQTT"
#define D_MULTI_PRESS "многократное нажатие"
#define D_NOISE "Шум"
#define D_NONE "Нет"
#define D_OFF "Выкл"
#define D_OFFLINE "Офф-лайн"
#define D_OK "Ок"
#define D_ON "Вкл"
#define D_ONLINE "Он-лайн"
#define D_PASSWORD "Пароль"
#define D_PORT "Порт"
#define D_POWER_FACTOR "Коэффициент Мощности"
#define D_POWERUSAGE "Мощность"
#define D_PRESSURE "Давление"
#define D_PRESSUREATSEALEVEL "Давление на уровне моря"
#define D_PROGRAM_FLASH_SIZE "Размер Flash для программ"
#define D_PROGRAM_SIZE "Размер программы "
#define D_PROJECT "Проект"
#define D_RECEIVED "Получено"
#define D_RESTART "Перезапуск"
#define D_RESTARTING "Перезапуск"
#define D_RESTART_REASON "Причина перезагрузки"
#define D_RESTORE "восстановление"
#define D_RETAINED "нераспред."
#define D_SAVE "Сохранить"
#define D_SENSOR "Датчик"
#define D_SSID "SSId"
#define D_START "Старт"
#define D_STD_TIME "STD"
#define D_STOP "Стоп"
#define D_SUBNET_MASK "Маска Подсети"
#define D_SUBSCRIBE_TO "Подписаться на"
#define D_SUCCESSFUL "Успешно"
#define D_TEMPERATURE "Температура"
#define D_TO "до"
#define D_TOGGLE "Переключить"
#define D_TOPIC "Топик"
#define D_TRANSMIT "Передать"
#define D_TRUE "Истина"
#define D_UPGRADE "обновление"
#define D_UPLOAD "Загрузить"
#define D_UPTIME "Uptime"
#define D_USER "Пользователь"
#define D_UTC_TIME "UTC"
#define D_UV_LEVEL "УФ уровень"
#define D_VERSION "Версия"
#define D_VOLTAGE "Напряжение"
#define D_WARMLIGHT "Тепло"
#define D_WEB_SERVER "Web сервер"

// sonoff.ino
#define D_WARNING_MINIMAL_VERSION "ПРЕДУПРЕЖДЕНИЕ Эта версия не поддерживает персистентные настройки"
#define D_LEVEL_10 "уровень 1-0"
#define D_LEVEL_01 "уровень 0-1"
#define D_SERIAL_LOGGING_DISABLED "Serial logging отключен"
#define D_SYSLOG_LOGGING_REENABLED "Syslog logging включен"

#define D_SET_BAUDRATE_TO "Установить скорость передачи (Baudrate)"
#define D_RECEIVED_TOPIC "Полученный Топик"
#define D_DATA_SIZE "Размер данных"
#define D_ANALOG_INPUT "Аналоговый вход"

#define D_FINGERPRINT "Проверка TLS Fingerprint..."
#define D_TLS_CONNECT_FAILED_TO "Сбой подключения TLS к"
#define D_RETRY_IN "Повторить"
#define D_VERIFIED "Проверено"
#define D_INSECURE "Небезопасное соединение, недействительный Fingerprint"
#define D_CONNECT_FAILED_TO "Ошибка подключения к"

// support.ino
#define D_OSWATCH "osWatch"
#define D_BLOCKED_LOOP "Блокирующий цикл"
#define D_WPS_FAILED_WITH_STATUS "WPS конфигурация НЕУДАЧНА со статусом"
#define D_ACTIVE_FOR_3_MINUTES "активен в течение 3 минут"
#define D_FAILED_TO_START "не удалось запустить"
#define D_PATCH_ISSUE_2186 "Проблема с исправлением 2186"
#define D_CONNECTING_TO_AP "Подключение к AP"
#define D_IN_MODE "в режиме"
#define D_CONNECT_FAILED_NO_IP_ADDRESS "Ошибка подключения, IP-адрес не получен"
#define D_CONNECT_FAILED_AP_NOT_REACHED "Ошибка соединения, AP не может быть достигнута"
#define D_CONNECT_FAILED_WRONG_PASSWORD "Ошибка соединения, неверный пароль к AP"
#define D_CONNECT_FAILED_AP_TIMEOUT "Ошибка соединения с AP по тайм-ауту"
#define D_ATTEMPTING_CONNECTION "Попытка подключения..."
#define D_CHECKING_CONNECTION "Проверка соединения..."
#define D_QUERY_DONE "Запрос выполнен. Обнаружены службы MQTT"
#define D_MQTT_SERVICE_FOUND "MQTT сервис service найдено"
#define D_FOUND_AT "найдено в"
#define D_SYSLOG_HOST_NOT_FOUND "System лог хост не найден"

// settings.ino
#define D_SAVED_TO_FLASH_AT "Сохранено во флэш-память"
#define D_LOADED_FROM_FLASH_AT "Загружено из флэш-памяти"
#define D_USE_DEFAULTS "Использовать значение по умолчанию"
#define D_ERASED_SECTOR "Стереть сектор"

// webserver.ino
#define D_MINIMAL_FIRMWARE_PLEASE_UPGRADE "Прошивка MINIMAL - пожалуйста обновите"
#define D_WEBSERVER_ACTIVE_ON "Веб-сервер активен"
#define D_WITH_IP_ADDRESS "с IP-адресом"
#define D_WEBSERVER_STOPPED "Веб-сервер остановлен"
#define D_FILE_NOT_FOUND "Файл не найден"
#define D_REDIRECTED "Перенаправлено на адаптивный портал"
#define D_WIFIMANAGER_SET_ACCESSPOINT_AND_STATION "Wifi менеджер устанавливает Точку Доступа и сохраняет станцию"
#define D_WIFIMANAGER_SET_ACCESSPOINT "Wifi менеджер установил Точку Доступа"
#define D_TRYING_TO_CONNECT "Попытка подключения устройства к сети"

#define D_RESTART_IN "Перезапуск"
#define D_SECONDS "секунд"
#define D_DEVICE_WILL_RESTART "Устройство будет перезапущено через несколько секунд"
#define D_BUTTON_TOGGLE "Переключить"
#define D_CONFIGURATION "Конфигурация"
#define D_INFORMATION "Информация"
#define D_FIRMWARE_UPGRADE "Обновление прошивки"
#define D_CONSOLE "Консоль"
#define D_CONFIRM_RESTART "Подтвердить перезагрузку"

#define D_CONFIGURE_MODULE "Конфигурация Модуля"
#define D_CONFIGURE_WIFI "Конфигурация WiFi"
#define D_CONFIGURE_MQTT "Конфигурация MQTT"
#define D_CONFIGURE_DOMOTICZ "Конфигурация Domoticz"
#define D_CONFIGURE_LOGGING "Конфигурация Logging"
#define D_CONFIGURE_OTHER "Конфигурация прочее"
#define D_CONFIRM_RESET_CONFIGURATION "Подтвердить Сброс Конфигурации"
#define D_RESET_CONFIGURATION "Сброс Конфигурации"
#define D_BACKUP_CONFIGURATION "Резервное копирование Конфигурации"
#define D_RESTORE_CONFIGURATION "Восстановление Конфигурации"
#define D_MAIN_MENU "Главное Меню"

#define D_MODULE_PARAMETERS "Параметры модуля"
#define D_MODULE_TYPE "Тип модуля"
#define D_GPIO "GPIO"
#define D_SERIAL_IN "Serial вход"
#define D_SERIAL_OUT "Serial выход"

#define D_WIFI_PARAMETERS "Параметры Wifi"
#define D_SCAN_FOR_WIFI_NETWORKS "Сканирование беспроводных сетей Wifi"
#define D_SCAN_DONE "Сканирование завершено"
#define D_NO_NETWORKS_FOUND "Не найдено сетей"
#define D_REFRESH_TO_SCAN_AGAIN "Обновить для повторного сканирования"
#define D_DUPLICATE_ACCESSPOINT "Дублировать Точку Доступа (AP)"
#define D_SKIPPING_LOW_QUALITY "Пропущено из-за низкого качества"
#define D_RSSI "RSSI"
#define D_WEP "WEP"
#define D_WPA_PSK "WPA PSK"
#define D_WPA2_PSK "WPA2 PSK"
#define D_AP1_SSID "AP1 SSId"
#define D_AP1_PASSWORD "AP1 Пароль"
#define D_AP2_SSID "AP2 SSId"
#define D_AP2_PASSWORD "AP2 Пароль"

#define D_MQTT_PARAMETERS "Параметры MQTT"
#define D_CLIENT "Клиент"
#define D_FULL_TOPIC "Полный Топик"

#define D_LOGGING_PARAMETERS "Параметры Logging"
#define D_SERIAL_LOG_LEVEL "Serial лог уровень"
#define D_WEB_LOG_LEVEL "Web лог уровень"
#define D_SYS_LOG_LEVEL "System лог уровень"
#define D_MORE_DEBUG "Дополнительная информация для отладки"
#define D_SYSLOG_HOST "System лог хост"
#define D_SYSLOG_PORT "System лог порт"
#define D_TELEMETRY_PERIOD "Период телеметрии"

#define D_OTHER_PARAMETERS "Параметры Прочие"
#define D_WEB_ADMIN_PASSWORD "Пароль Web администратора"
#define D_MQTT_ENABLE "MQTT активен"
#define D_FRIENDLY_NAME "Дружественное Имя"
#define D_BELKIN_WEMO "Belkin WeMo"
#define D_HUE_BRIDGE "Hue Bridge"
#define D_SINGLE_DEVICE "одиночное"
#define D_MULTI_DEVICE "мульти"

#define D_SAVE_CONFIGURATION "Сохранить конфигурацию"
#define D_CONFIGURATION_SAVED "Конфигурация сохранена "
#define D_CONFIGURATION_RESET "Конфигурация сброшена"

#define D_PROGRAM_VERSION "Версия программы"
#define D_BUILD_DATE_AND_TIME "Дата & Время сборки"
#define D_CORE_AND_SDK_VERSION "Версия Core/SDK"
#define D_FLASH_WRITE_COUNT "Кол-во записей Flash"
#define D_MAC_ADDRESS "MAC Адрес"
#define D_MQTT_HOST "MQTT Хост"
#define D_MQTT_PORT "MQTT Порт"
#define D_MQTT_CLIENT "MQTT Клиент ID"
#define D_MQTT_USER "MQTT Пользователь"
#define D_MQTT_TOPIC "MQTT Топик"
#define D_MQTT_GROUP_TOPIC "MQTT Топик группы"
#define D_MQTT_FULL_TOPIC "MQTT Топик полный"
#define D_MDNS_DISCOVERY "mDNS Обнаружение"
#define D_MDNS_ADVERTISE "mDNS Транcляция"
#define D_ESP_CHIP_ID "ID чипа ESP"
#define D_FLASH_CHIP_ID "ID чипа Flash памяти"
#define D_FLASH_CHIP_SIZE "Размер Flash памяти"
#define D_FREE_PROGRAM_SPACE "Свободное пространство программ"

#define D_UPGRADE_BY_WEBSERVER "Обновление через Веб-сервер"
#define D_OTA_URL "OTA Url"
#define D_START_UPGRADE "Начать обновление"
#define D_UPGRADE_BY_FILE_UPLOAD "Обновление путем загрузки файлов"
#define D_UPLOAD_STARTED "Загрузка началась"
#define D_UPGRADE_STARTED "Обновление началось"
#define D_UPLOAD_DONE "Загрузка завершена"
#define D_UPLOAD_ERR_1 "Файл не выбран"
#define D_UPLOAD_ERR_2 "Недостаточно места"
#define D_UPLOAD_ERR_3 "Magic байт не 0xE9"
#define D_UPLOAD_ERR_4 "Размер прошивки больше, чем реальный размер флеш памяти"
#define D_UPLOAD_ERR_5 "Ошибка загрузки буфера"
#define D_UPLOAD_ERR_6 "Ошибка загрузки. Включено лог уровня 3"
#define D_UPLOAD_ERR_7 "Загрузка прервана"
#define D_UPLOAD_ERR_8 "Файл неверный"
#define D_UPLOAD_ERR_9 "Слишком большой файл"
#define D_UPLOAD_ERROR_CODE "Код ошибки загрузки"

#define D_ENTER_COMMAND "Введите команду"
#define D_ENABLE_WEBLOG_FOR_RESPONSE "Включить Веб лог уровня 2 если ожидается ответ"
#define D_NEED_USER_AND_PASSWORD "Ожидается user=<username>&password=<password>"

// xdrv_wemohue.ino
#define D_MULTICAST_DISABLED "Multicast отключен"
#define D_MULTICAST_REJOINED "Multicast (ре)соединился"
#define D_MULTICAST_JOIN_FAILED "Multicast ошибка соединения"
#define D_FAILED_TO_SEND_RESPONSE "Не удалось отправить ответ"

#define D_WEMO "WeMo"
#define D_WEMO_BASIC_EVENT "WeMo основное событие"
#define D_WEMO_EVENT_SERVICE "WeMo служба событий"
#define D_WEMO_META_SERVICE "WeMo мета-сервис"
#define D_WEMO_SETUP "WeMo настройка"
#define D_RESPONSE_SENT "Ответ отправлен"

#define D_HUE "Hue"
#define D_HUE_BRIDGE_SETUP "Hue настройка"
#define D_HUE_API_NOT_IMPLEMENTED "Hue API не реализовано"
#define D_HUE_API "Hue API"
#define D_HUE_POST_ARGS "Hue POST args"
#define D_3_RESPONSE_PACKETS_SENT "3 ответных пакета получено"

// xdrv_05_domoticz.ino
#define D_DOMOTICZ_PARAMETERS "Domoticz parameters"
#define D_DOMOTICZ_IDX "Idx"
#define D_DOMOTICZ_KEY_IDX "Key idx"
#define D_DOMOTICZ_SWITCH_IDX "Switch idx"
#define D_DOMOTICZ_SENSOR_IDX "Sensor idx"
  #define D_DOMOTICZ_TEMP "Temp"
  #define D_DOMOTICZ_TEMP_HUM "Temp,Hum"
  #define D_DOMOTICZ_TEMP_HUM_BARO "Temp,Hum,Baro"
  #define D_DOMOTICZ_POWER_ENERGY "Power,Energy"
  #define D_DOMOTICZ_ILLUMINANCE "Illuminance"
  #define D_DOMOTICZ_COUNT "Count"
  #define D_DOMOTICZ_VOLTAGE "Voltage"
  #define D_DOMOTICZ_CURRENT "Current"
  #define D_DOMOTICZ_AIRQUALITY "AirQuality"
#define D_DOMOTICZ_UPDATE_TIMER "Update timer"

// xdrv_03_energy.ino
#define D_ENERGY_TODAY "Энергия Сегодня"
#define D_ENERGY_YESTERDAY "Энергия Вчера"
#define D_ENERGY_TOTAL "Энергия Всего"

// xsns_05_ds18b20.ino
#define D_SENSOR_BUSY "Датчик DS18x20 занят"
#define D_SENSOR_CRC_ERROR "Датчик DS18x20 - ошибка CRC"
#define D_SENSORS_FOUND "Датчик DS18x20 найден"

// xsns_06_dht.ino
#define D_TIMEOUT_WAITING_FOR "Тайм-аут, в ожидании"
#define D_START_SIGNAL_LOW "сигнал старт низкий"
#define D_START_SIGNAL_HIGH "сигнал старт высокий"
#define D_PULSE "пульс"
#define D_CHECKSUM_FAILURE "Ошибка контрольной суммы"

// xsns_07_sht1x.ino
#define D_SENSOR_DID_NOT_ACK_COMMAND "Датчик не получил команду ACK"
#define D_SHT1X_FOUND "SHT1X найден"

// xsns_18_pms5003.ino
#define D_STANDARD_CONCENTRATION "CF-1 PM"     // Standard Particle CF-1 Particle Matter
#define D_ENVIRONMENTAL_CONCENTRATION "PM"     // Environmetal Particle Matter
#define D_PARTICALS_BEYOND "Particals"

// sonoff_template.h
// Max string length is 8 characters including suffixes
#define D_SENSOR_NONE     "-нет-"
#define D_SENSOR_DHT11    "DHT11"
#define D_SENSOR_AM2301   "AM2301"
#define D_SENSOR_SI7021   "SI7021"
#define D_SENSOR_DS18X20  "DS18x20"
#define D_SENSOR_I2C_SCL  "I2C SCL"
#define D_SENSOR_I2C_SDA  "I2C SDA"
#define D_SENSOR_WS2812   "WS2812"
#define D_SENSOR_IRSEND   "IRsend"
#define D_SENSOR_SWITCH   "Свич"   // Suffix "1"
#define D_SENSOR_BUTTON   "Кнопка"   // Suffix "1"
#define D_SENSOR_RELAY    "Реле"    // Suffix "1i"
#define D_SENSOR_LED      "Led"      // Suffix "1i"
#define D_SENSOR_PWM      "PWM"      // Suffix "1"
#define D_SENSOR_COUNTER  "Счетчик"  // Suffix "1"
#define D_SENSOR_IRRECV   "IRrecv"
#define D_SENSOR_MHZ_RX   "MHZ Rx"
#define D_SENSOR_MHZ_TX   "MHZ Tx"
#define D_SENSOR_PZEM_RX  "PZEM Rx"
#define D_SENSOR_PZEM_TX  "PZEM Tx"
#define D_SENSOR_SAIR_RX  "SAir Rx"
#define D_SENSOR_SAIR_TX  "SAir Tx"
#define D_SENSOR_SPI_CS   "SPI CS"
#define D_SENSOR_SPI_DC   "SPI DC"
#define D_SENSOR_BACKLIGHT "BkLight"
#define D_SENSOR_PMS5003  "PMS5003"
#define D_SENSOR_SDS0X1   "SDS0X1"

// Units
#define D_UNIT_AMPERE "А"
#define D_UNIT_HOUR "Ч"
#define D_UNIT_KILOOHM "кОм"
#define D_UNIT_KILOWATTHOUR "кВт"
#define D_UNIT_LUX "лк"
#define D_UNIT_MICROGRAM_PER_CUBIC_METER "мкг/м3"
#define D_UNIT_MICROMETER "мкм"
#define D_UNIT_MICROSECOND "мкс"
#define D_UNIT_MILLIAMPERE "мА"
#define D_UNIT_MILLISECOND "мс"
#define D_UNIT_MINUTE "мин"
#define D_UNIT_PARTS_PER_DECILITER "ppd"
#define D_UNIT_PARTS_PER_MILLION "ppm"
#define D_UNIT_PRESSURE "гПа"
#define D_UNIT_SECOND "сек"
#define D_UNIT_SECTORS "секторов"
#define D_UNIT_VOLT "В"
#define D_UNIT_WATT "Вт"
#define D_UNIT_WATTHOUR "ВтЧ"

// Log message prefix
#define D_LOG_APPLICATION "APP: "  // Application
#define D_LOG_BRIDGE "BRG: "       // Bridge
#define D_LOG_CONFIG "CFG: "       // Settings
#define D_LOG_COMMAND "CMD: "      // Command
#define D_LOG_DEBUG "DBG: "        // Debug
#define D_LOG_DHT "DHT: "          // DHT sensor
#define D_LOG_DOMOTICZ "DOM: "     // Domoticz
#define D_LOG_DSB "DSB: "          // DS18xB20 sensor
#define D_LOG_HTTP "HTP: "         // HTTP webserver
#define D_LOG_I2C "I2C: "          // I2C
#define D_LOG_IRR "IRR: "          // Infra Red Received
#define D_LOG_LOG "LOG: "          // Logging
#define D_LOG_MODULE "MOD: "       // Module
#define D_LOG_MDNS "DNS: "         // mDNS
#define D_LOG_MQTT "MQT: "         // MQTT
#define D_LOG_OTHER "OTH: "        // Other
#define D_LOG_RESULT "RSL: "       // Result
#define D_LOG_RFR "RFR: "          // RF Received
#define D_LOG_SERIAL "SER: "       // Serial
#define D_LOG_SHT1 "SHT: "         // SHT1x sensor
#define D_LOG_UPLOAD "UPL: "       // Upload
#define D_LOG_UPNP "UPP: "         // UPnP
#define D_LOG_WIFI "WIF: "         // Wifi

#endif  // _LANGUAGE_RU_RU_H_
