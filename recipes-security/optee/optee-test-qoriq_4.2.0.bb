# Copyright 2022-2024 NXP
require optee-test-qoriq.inc

OPTEE_TEST_BRANCH = "lf-6.6.36_2.1.0"
SRCREV = "${AUTOREV}"

PV:append = "+git${SRCPV}"
