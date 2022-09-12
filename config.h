/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#undef DEBOUNCE
#define DEBOUNCE 6

#undef TAPPING_TERM
#define TAPPING_TERM 180

#define PERMISSIVE_HOLD

#define USB_SUSPEND_WAKEUP_DELAY 0
#define CAPS_LOCK_STATUS
#define LAYER_STATE_8BIT
#define RGB_MATRIX_STARTUP_SPD 60

// Custom settings
#define FORCE_NKRO
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12
