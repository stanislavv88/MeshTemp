#pragma once

void bluetooth_ready(void);
void bluetooth_set_bonding(bool allow);
bool bluetooth_get_bonding();

void bluetooth_update_battery(u8_t level);

void bluetooth_update_temperature(u16_t value);
void bluetooth_update_humidity(u16_t value);
