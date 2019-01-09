# OpenThread on NXP(Freescale) Kinetis MK32W042S1M2 Example

This directory contains example platform drivers for the [NXP(Freescale) Kinetis MK32W042S1M2][mk32w042s1m2]
based on [FRDM-K32W042][frdm-k32w042] hardware platform.

[mk32w042s1ms]: https://www.nxp.com/products/processors-and-microcontrollers/arm-based-processors-and-mcus/kinetis-cortex-m-mcus/w-serieswireless-conn.m0-plus-m4/dual-core-large-memory-high-security-bluetooth-5-plus-802.15.4-mcu:K32W0x
[frdm-k32w042]: http://www.nxp.com/products/software-and-tools/hardware-development-tools/freedom-development-boards/nxp-freedom-development-kit-for-kinetis-kw41z-31z-21z-mcus:FRDM-KW41Z

The example platform drivers are intended to present the minimal code
necessary to support OpenThread.  As a result, the example platform
drivers do not necessarily highlight the platform's full capabilities.

## Toolchain

Download and install the [GNU toolchain for ARM Cortex-M][gnu-toolchain].

[gnu-toolchain]: https://launchpad.net/gcc-arm-embedded

In a Bash terminal, follow these instructions to install the GNU toolchain and
other dependencies.

```bash
$ cd <path-to-openthread>
$ ./script/bootstrap
```

## Build Examples

```bash
$ cd <path-to-openthread>
$ ./bootstrap
$ make -f examples/Makefile-k32w042
```

After a successful build, the `elf` files are found in
`<path-to-openthread>/output/k32w042/bin`.  You can convert them to `bin`
files using `arm-none-eabi-objcopy`:
```bash
$ arm-none-eabi-objcopy -O binary ot-cli-ftd ot-cli-ftd.bin
```

## Flash Binaries

Compiled binaries may be flashed onto the MK32W042S1M2 using drag-and-drop into the board's MSD Bootloader
 or the [NXP(Freescale) Test Tool][test-tool] or [JTAG interface][jtag].
The [NXP(Freescale) Test Tool][test-tool] provides a convenient method for flashing a MK32W042S1M2 via the [J-Link][jlink].

[test-tool]: http://www.nxp.com/webapp/sps/download/license.jsp?colCode=TESTTOOL_SETUP
[jtag]: https://en.wikipedia.org/wiki/JTAG
[jlink]: https://www.segger.com/jlink-software.html

## Running the example

1. Prepare two boards with the flashed `CLI Example` (as shown above).
2. The CLI example uses UART connection. To view raw UART output, start a terminal
   emulator like PuTTY and connect to the used COM port with the following UART settings:
    - Baud rate: 115200
    - 8 data bits
    - 1 stop bit
    - No parity
    - No flow control

3. Open a terminal connection on the first board and start a new Thread network.

 ```bash
 > panid 0xabcd
 Done
 > ifconfig up
 Done
 > thread start
 Done
 ```

4. After a couple of seconds the node will become a Leader of the network.

 ```bash
 > state
 Leader
 ```

5. Open a terminal connection on the second board and attach a node to the network.

 ```bash
 > panid 0xabcd
 Done
 > ifconfig up
 Done
 > thread start
 Done
 ```

6. After a couple of seconds the second node will attach and become a Child.

 ```bash
 > state
 Child
 ```

7. List all IPv6 addresses of the first board.

 ```bash
 > ipaddr
 fdde:ad00:beef:0:0:ff:fe00:fc00
 fdde:ad00:beef:0:0:ff:fe00:9c00
 fdde:ad00:beef:0:4bcb:73a5:7c28:318e
 fe80:0:0:0:5c91:c61:b67c:271c
 ```

8. Choose one of them and send an ICMPv6 ping from the second board.

 ```bash
 > ping fdde:ad00:beef:0:0:ff:fe00:fc00
 16 bytes from fdde:ad00:beef:0:0:ff:fe00:fc00: icmp_seq=1 hlim=64 time=8ms
 ```

For a list of all available commands, visit [OpenThread CLI Reference README.md][CLI].

[CLI]: https://github.com/openthread/openthread/blob/master/src/cli/README.md
