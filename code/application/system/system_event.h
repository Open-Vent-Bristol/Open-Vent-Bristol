// Copyright (c) 2021 <OpenVent-Bristol, Donald Robson>

#ifndef EVENT_H
#define EVENT_H

#include <stdint.h>

#define NO_EVENT (system_event_mask_t)0

typedef void (*system_event_callback)(int32_t);

typedef uint32_t system_event_mask_t;

enum system_event
{
  EV_FPGA_READY,
  EV_FPGA_SEND,
  EV_UI,
  EV_OP_MODE_CHANGE,
  EV_MOTOR_DISABLED,
  EV_TIDAL_VOLUME_EXCEEDED,
  EV_VBATT_CRITICAL,
  EV_DO_SOUND_ALARM,
  EV_DO_UPDATE_DISPLAY,
  EV_DO_LOG,
  EV_ACTUATOR_SERVICE,
  EV_ALARM_SERVICE,
  EV_FAN_SERVICE,
  EV_FPGA_WATCHDOG_EXPIRY,
  EV_SET_POINT_UPDATE,
  EV_FLOW_RATE_UPDATE,
  EV_PRESSURE_UPDATE,
  EV_FAN_PRESSURE_UPDATE,
  EV_LIMIT_DEBOUNCE_END,
  EV_POWER_DEBOUNCE_END,

  /* SYSTEM TEST */
  EV_UART_EV_INJECT,

  /* Define above this line only - limit 32 events */
  EV_NUMBER_EVENTS
};

/*
typedef enum
{
  // Ventilation events
  EVENT_PRESSURE_DROP         = (1u << 0u),
  EVENT_PRESSURE_LIMIT        = (1u << 1u),
  EVENT_ACTUATOR_LIMIT        = (1u << 2u),
  EVENT_MOTOR_CURRENT_LIMIT   = (1u << 3u),
  EVENT_TIDAL_VOLUME_LIMIT    = (1u << 4u),
  EVENT_PERIOD_LIMIT          = (1u << 5u),
  EVENT_FLOW_25_PC_LIMIT      = (1u << 6u),
  EVENT_STOP                  = (1u << 7u),

  // FPGA events
  EVENT_FPGA_MODE_CHANGE      = (1u << 8u),
  EVENT_FPGA_READY            = (1u << 9u),
  EVENT_FPGA_BUS_FAULT        = (1u << 10u),
  EVENT_FPGA_CRC_FAULT        = (1u << 11u),

  // General timer expiration
  EVENT_TIMER_RUN_VENTILATION = (1u << 16u),

  // General faults
  EVENT_UNRECOVERABLE_FAULT   = (1u << 24u),
  EVENT_MAINTENANCE_FAULT     = (1u << 25u),

  // Console events
  EVENT_CONSOLE_ENTER         = (1u << 29u),
  EVENT_CONSOLE_ACTIVITY      = (1u << 30u),
  EVENT_CONSOLE_EXIT          = (1u << 31u)
} event_t
*/

#endif /* EVENT_H */
