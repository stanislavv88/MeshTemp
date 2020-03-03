# MeshTemp

Bringing Bluetooth mesh to Xiaomi's Bluetooth Temperature Sensors

## Notes

- This project is still in development. The Xiaomi Bluetooth temperature sensor has been [modified to have a nRF51822-QFAC](https://twitter.com/NZSmartie/status/1123519600325316608) for the extra RAM (32K) and Flash (256K)
- The end goal is to build firmware that will work on unmodified board.

## Requirements

- Zephyr's West tool
  ```bash
  python3 -m pip install west
  ```
- Zephyr SDK
  > *TODO:* Add instructions for downloading Zephyr SDK to match current zephyr version.

## Building

```bash
# Use west to clone our repository and set up appropriate project structure 
west init -m https://github.com/NZSmartie/MeshTemp && cd MeshTemp
# Checkout all required modules as per MeshTemp/west.yml
west update
# Build the firmware
cd MeshTemp && west build
```