# Copyright 2022-2024 NXP
require optee-test-qoriq.inc

OPTEE_TEST_BRANCH = "lf-6.6.23_2.0.0"
SRCREV = "07682f1b1b41ec0bfa507286979b36ab8d344a96"

PV:append = "+git${SRCPV}"
