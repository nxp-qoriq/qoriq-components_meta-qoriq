require recipes-graphics/imx-gpu-viv/imx-gpu-viv-6.inc

PACKAGECONFIG ?= "valgrind"
PACKAGES:remove = " \
	libwayland-viv-imx libwayland-viv-imx-dev \
	libgc-wayland-protocol-imx libgc-wayland-protocol-imx-dev \
	libnn-imx-dev \
"

INHIBIT_SYSROOT_STRIP = "1"
INSANE_SKIP:${BPN}:remove = "already-stripped"

IMX_SOC        = "IMX_SOC_NOT_SET"
IMX_SOC:mx8qm  = "mx8qm"
IMX_SOC:mx8mp  = "mx8mp"
IMX_SOC:mx8mq  = "mx8mq"
IMX_SOC:mx8qxp = "mx8qxp"
IMX_SOC:mx8mn  = "mx8mn"
IMX_SOC:mx8ulp = "mx8ulp"

do_install:append() {
    if [ -d ${S}/gpu-core/usr/lib/${IMX_SOC} ]; then
        cp -r ${S}/gpu-core/usr/lib/${IMX_SOC}/* ${D}${libdir}
    fi
    # Undo removals
    for header in ${GLES3_HEADER_REMOVALS}; do
        cp ${S}/gpu-core/usr/include/GLES3/${header} ${D}${includedir}/GLES3
    done
}

FILES:libclc-imx += "${includedir}/CL/cl_viv_vx_ext.h"

RDEPENDS:libopenvg-imx += "${@bb.utils.contains('DISTRO_FEATURES', 'systemd', 'systemd-gpuconfig', '', d)}"

FILES:libnn-imx:remove = "${libdir}/libnn*${SOLIBS} ${libdir}/libneuralnetworks${SOLIBS}"

FILES:libvulkan-imx += "${libdir}/libvulkan_VSI${SOLIBS}"
INSANE_SKIP:libvulkan-imx += "dev-so"
FILES:libopenvx-imx += "${libdir}/libOpenVX${SOLIBS}"
INSANE_SKIP:libopenvx-imx += "dev-so dev-deps"
FILES:libopencl-imx += "${libdir}/libOpenCL${SOLIBS}"
INSANE_SKIP:libopencl-imx += "dev-so dev-deps"
FILES:libopenvg-imx += "${libdir}/libOpenVG*${SOLIBS}"
INSANE_SKIP:libopenvg-imx += "dev-so"
FILES:libvdk-imx += "${libdir}/libVDK*${SOLIBS}"
INSANE_SKIP:libvdk-imx += "dev-so"