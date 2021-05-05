// Copyright (c) 2021 <OpenVent-Bristol, Donald Robson>

#ifndef FAKE_STATE_DEFS_H
#define FAKE_STATE_DEFS_H

#include "state/system_event.h"
#include "fff.h"

#define FFF_GCC_FUNCTION_ATTRIBUTES
DEFINE_FFF_GLOBALS;

void test_state_member_2_entry(enum system_event* const event_mask);
FAKE_VOID_FUNC(test_state_member_2_entry, enum system_event* const);

void test_state_member_2_run(enum system_event* const event_mask);
FAKE_VOID_FUNC(test_state_member_2_run, enum system_event* const);

void test_state_member_2_exit(enum system_event* const event_mask);
FAKE_VOID_FUNC(test_state_member_2_exit, enum system_event* const);

void test_state_member_3_entry(enum system_event* const event_mask);
FAKE_VOID_FUNC(test_state_member_3_entry, enum system_event* const);

void test_state_member_3_run(enum system_event* const event_mask);
FAKE_VOID_FUNC(test_state_member_3_run, enum system_event* const);

void test_state_member_3_exit(enum system_event* const event_mask);
FAKE_VOID_FUNC(test_state_member_3_exit, enum system_event* const);

void test_state_member_4_entry(enum system_event* const event_mask);
FAKE_VOID_FUNC(test_state_member_4_entry, enum system_event* const);

void test_state_member_4_run(enum system_event* const event_mask);
FAKE_VOID_FUNC(test_state_member_4_run, enum system_event* const);

void test_state_member_4_exit(enum system_event* const event_mask);
FAKE_VOID_FUNC(test_state_member_4_exit, enum system_event* const);

void test_state_member_5_entry(enum system_event* const event_mask);
FAKE_VOID_FUNC(test_state_member_5_entry, enum system_event* const);

void test_state_member_5_run(enum system_event* const event_mask);
FAKE_VOID_FUNC(test_state_member_5_run, enum system_event* const);

void test_state_member_5_exit(enum system_event* const event_mask);
FAKE_VOID_FUNC(test_state_member_5_exit, enum system_event* const);

#define FAKE_STATE_FUNCTIONS(x) \
  x(test_state_member_2_entry) \
  x(test_state_member_2_run) \
  x(test_state_member_2_exit) \
  x(test_state_member_3_entry) \
  x(test_state_member_3_run) \
  x(test_state_member_3_exit) \
  x(test_state_member_4_entry) \
  x(test_state_member_4_run) \
  x(test_state_member_4_exit) \
  x(test_state_member_5_entry) \
  x(test_state_member_5_run) \
  x(test_state_member_5_exit)

#endif /* FAKE_STATE_DEFS_H */