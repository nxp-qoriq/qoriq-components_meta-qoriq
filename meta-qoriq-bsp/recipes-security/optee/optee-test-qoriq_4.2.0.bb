# Copyright 2022-2024 NXP
require optee-test-qoriq.inc

OPTEE_TEST_BRANCH = "lf-6.6.36_2.1.0"
SRCREV = "5b52b48a73b4cc3f228ec66ae6cf9920897bb2e6"

PV:append = "+git${SRCPV}"
