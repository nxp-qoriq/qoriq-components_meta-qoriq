SRCREV = "ebf8801c4a95aa346616cf444d7f558b8800e0bc"
do_install:lx2160ardb-rev2 () {
       install -d ${D}/uefi
       cp -r  ${B}/grub ${D}/uefi
       cp -r  ${B}/lx2160ardb ${D}/uefi/
}

do_deploy:lx2160ardb-rev2 () {
       install -d ${DEPLOYDIR}/uefi
       cp -r  ${B}/grub   ${DEPLOYDIR}/uefi
       cp -r  ${B}/lx2160ardb ${DEPLOYDIR}/uefi/
}
