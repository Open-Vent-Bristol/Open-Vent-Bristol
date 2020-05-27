#include "gpio/gpio.h"
#include "board/board.h"
#include <stdint.h>

void gpio_init(void)
{
  // ALERTS: input, tri-state
  ALERTS_MODE &= ~(1u << ALERTS_PIN);
  ALERTS_PULLUP &= ~(1u << ALERTS_PIN);

  // MUX_A, MUX_B: output
  MUX_A_MODE |= (1u << MUX_A_PIN);
  MUX_B_MODE |= (1u << MUX_B_PIN);

  // MOTOR_IN_A: output
  MOTOR_IN_A_MODE |= (1u << MOTOR_IN_A_PIN);

  // MOTOR_IN_B, ALERT_ENABLE_n, GPIO_SPARE, SR_MR_n: output
  MOTOR_IN_B_MODE |= (1u << MOTOR_IN_B_PIN);
  ALERT_ENABLE_n_MODE |= (1u << ALERT_ENABLE_n_PIN);
  ALERT_ENABLE_n_PORT |= (1u << ALERT_ENABLE_n_PIN);
  GPIO_SPARE_MODE |= (1u << GPIO_SPARE_PIN);
  SR_MR_n_MODE |= (1u << SR_MR_n_PIN);
  SR_MR_n_PORT |= (1u << SR_MR_n_PIN);

  // SWITCHES: input, tri-state
  SWITCHES_MODE &= ~(1u << SWITCHES_PIN);
  SWITCHES_PULLUP &= ~(1u << SWITCHES_PIN);

  // LATCH: output
  LATCH_MODE |= (1u << LATCH_PIN);
}

void gpio_set_mask(register_t port, register_size_t pin_mask)
{
  *port |= pin_mask;
}

void gpio_clear_mask(register_t port, register_size_t pin_mask)
{
  *port &= ~pin_mask;
}

register_size_t gpio_read_mask(register_t port, register_size_t pin_mask)
{
  return (*port & pin_mask);
}

void gpio_set_pin(register_t port, uint8_t pin_number)
{
  *port |= (1u << pin_number);
}

void gpio_clear_pin(register_t port, uint8_t pin_number)
{
  *port &= ~(1u << pin_number);
}

uint8_t gpio_read_pin(register_t port, uint8_t pin_number)
{
  uint8_t return_val = 0u;

  if (*port & (1u << pin_number))
  {
    return_val = 1u;
  }

  return return_val;
}