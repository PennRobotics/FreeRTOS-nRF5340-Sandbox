### FreeRTOS-nRF5340-Sandbox

Repository for trying out FreeRTOS


# TODO-urgent: Change target from nRF5340

It seems STM32 will allow bare metal programming but the majority of
development on the Nordic boards happens thru Zephyr. As the goal is
to explore FreeRTOS, this target will require far more work than it
is worth.

Check if the Nordic board source is available via its Pack file. That
could possibly work if the nRF9160 demo is used as a reference.


### TODO:

- Add **build** to .gitignore
- Add sources to Makefile, refer to **build** directory
- Make sure all compiler includes and flags are set
- Ensure license compatibility before adding dependencies here


### Compile steps

- Copy FreeRTOS kernel into **build**
- Copy board headers into **build**
- Copy FreeRTOS board configuration into **build**
