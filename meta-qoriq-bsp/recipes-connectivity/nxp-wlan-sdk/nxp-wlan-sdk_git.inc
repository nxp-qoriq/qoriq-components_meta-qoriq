SUMMARY = "NXP Wi-Fi SDK for module 88w8801/8987/8997/9098 and IW416/612"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://${WORKDIR}/git/LICENSE;md5=ab04ac0f249af12befccb94447c08b77"

# For Kernel 5.4 and later
SRCBRANCH = "lf-6.6.52_2.2.0"
MRVL_SRC ?= "git://github.com/nxp-imx/mwifiex.git;protocol=https"
SRC_URI = "${MRVL_SRC};branch=${SRCBRANCH}"
SRCREV = "5ad19e194f49ed9447bee7864eb562618ccaf9b1"

S = "${WORKDIR}/git"

EXTRA_OEMAKE = "KERNELDIR=${STAGING_KERNEL_BUILDDIR}"

RRECOMMENDS:${PN} = "wireless-tools"
