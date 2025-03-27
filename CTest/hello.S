.text
.align 4
.intel_syntax noprefix

.globl ASMTest

ASMTest:

    sub     rdi, rsi
    mov     rax, rdi

    // If your CPU does not support AVX-512, comment the following instructions.
    vpaddd  zmm0, zmm0, zmm1
    vpaddd  zmm30 {k1} {z}, zmm30, zmm31
    
    ret


