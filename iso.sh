#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/rose.kernel isodir/boot/rose.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "rose" {
	multiboot /boot/rose.kernel
}
EOF
grub-mkrescue -o rose.iso isodir
