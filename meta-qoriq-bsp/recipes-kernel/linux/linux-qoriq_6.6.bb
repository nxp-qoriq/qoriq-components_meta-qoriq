LIC_FILES_CHKSUM = "file://COPYING;md5=6bc538ed5bd9a7fc9398086aedcd7e46"

LINUX_VERSION = "6.6.52"

LINUX_QORIQ_BRANCH ?= "lf-6.6.y"
LINUX_QORIQ_SRC ?= "git://github.com/nxp-qoriq/linux.git;protocol=https"
SRC_URI = "${LINUX_QORIQ_SRC};branch=${LINUX_QORIQ_BRANCH}"
SRCREV = "e0f9e2afd4cff3f02d71891244b4aa5899dfc786"

require linux-qoriq.inc
