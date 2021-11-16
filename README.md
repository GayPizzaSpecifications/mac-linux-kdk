# macOS Linux Kernel Development Kit

Build the (ARM/ARM64) Linux Kernel on any macOS host

## Details

The macOS Linux Kernel Development Kit includes some bits from glibc to successfully build host tools, which allows a full
kernel compile on macOS with little effort.

**NOTE**: This is still early, and while at the time of this writing, mainline for arm64 successfully builds on Apple Silicon and Intel,
this can change as the kernel continues development. Updates are welcome if things break.

## Usage

1. Install [Homebrew](https://brew.sh) for package management.
2. Install mac-linux-kdk: `brew install spinlocklabs/mac-linux-kdk/mac-linux-kdk`
3. Clone the Linux kernel source to a case-sensitive filesystem. (Use Disk Utility to add a case-sensitive volume)
4. Use `lkmake` instead of `make` to build the Linux kernel.
