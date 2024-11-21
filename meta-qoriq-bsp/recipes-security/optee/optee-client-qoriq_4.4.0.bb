# Copyright 2022-2024 NXP
require optee-client-qoriq.inc

OPTEE_CLIENT_BRANCH = "lf-6.6.52_2.2.0"
SRCREV = "d221676a58b305bddbf97db00395205b3038de8e"

PV:append = "+git${SRCPV}"
