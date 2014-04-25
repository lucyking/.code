	.syntax unified
	.arch armv7-a
	.eabi_attribute 27, 3
	.fpu vfpv3-d16
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.thumb
	.file	"1019sqar.c"
	.section	.rodata
	.align	2
.LC0:
	.ascii	"Input your No.\000"
	.align	2
.LC1:
	.ascii	"%lf\000"
	.align	2
.LC2:
	.ascii	"The No. you input is:\011\011 %lf\012\000"
	.align	2
.LC3:
	.ascii	"The sqar of your No. is\011 %lf\012\000"
	.text
	.align	2
	.global	main
	.thumb
	.thumb_func
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{r4, r5, r7, lr}
	sub	sp, sp, #8
	add	r7, sp, #0
	movw	r0, #:lower16:.LC0
	movt	r0, #:upper16:.LC0
	bl	puts
	movw	r3, #:lower16:.LC1
	movt	r3, #:upper16:.LC1
	mov	r2, r7
	mov	r0, r3
	mov	r1, r2
	bl	__isoc99_scanf
	movw	r3, #:lower16:.LC2
	movt	r3, #:upper16:.LC2
	ldrd	r4, [r7]
	mov	r0, r3
	mov	r2, r4
	mov	r3, r5
	bl	printf
	movw	r4, #:lower16:.LC3
	movt	r4, #:upper16:.LC3
	ldrd	r2, [r7]
	mov	r0, r2
	mov	r1, r3
	bl	sq
	mov	r2, r0
	mov	r3, r1
	mov	r0, r4
	bl	printf
	mov	r3, #0
	mov	r0, r3
	add	r7, r7, #8
	mov	sp, r7
	pop	{r4, r5, r7, pc}
	.size	main, .-main
	.align	2
	.global	sq
	.thumb
	.thumb_func
	.type	sq, %function
sq:
	@ args = 0, pretend = 0, frame = 48
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	push	{r7}
	sub	sp, sp, #52
	add	r7, sp, #0
	strd	r0, [r7]
	adr	r3, .L10+8
	ldrd	r2, [r3]
	strd	r2, [r7, #40]
	ldrd	r2, [r7]
	strd	r2, [r7, #8]
	adr	r3, .L10+16
	ldrd	r2, [r3]
	strd	r2, [r7, #16]
	fldd	d6, [r7, #8]
	fldd	d7, [r7, #8]
	fmuld	d7, d6, d7
	fldd	d6, [r7, #0]
	fsubd	d7, d7, d6
	fstd	d7, [r7, #24]
	adr	r3, .L10+16
	ldrd	r2, [r3]
	strd	r2, [r7, #32]
	fldd	d7, [r7, #0]
	fcmpzd	d7
	fmstat
	bne	.L9
	fldd	d7, .L10
	b	.L4
.L8:
	fldd	d7, [r7, #24]
	fcmpezd	d7
	fmstat
	ite	le
	movle	r3, #0
	movgt	r3, #1
	uxtb	r3, r3
	cmp	r3, #0
	beq	.L6
	fldd	d6, [r7, #16]
	fldd	d7, [r7, #8]
	faddd	d6, d6, d7
	fconstd	d7, #0
	fdivd	d7, d6, d7
	fstd	d7, [r7, #8]
	b	.L7
.L6:
	fldd	d7, [r7, #24]
	fcmpezd	d7
	fmstat
	ite	pl
	movpl	r3, #0
	movmi	r3, #1
	uxtb	r3, r3
	cmp	r3, #0
	beq	.L7
	fldd	d6, [r7, #16]
	fldd	d7, [r7, #8]
	faddd	d6, d6, d7
	fconstd	d7, #0
	fdivd	d7, d6, d7
	fstd	d7, [r7, #16]
.L7:
	fldd	d6, [r7, #16]
	fldd	d7, [r7, #8]
	faddd	d6, d6, d7
	fldd	d5, [r7, #16]
	fldd	d7, [r7, #8]
	faddd	d7, d5, d7
	fmuld	d7, d6, d7
	fconstd	d6, #16
	fdivd	d7, d7, d6
	fldd	d6, [r7, #0]
	fsubd	d7, d7, d6
	fstd	d7, [r7, #24]
	ldrd	r2, [r7, #24]
	strd	r2, [r7, #32]
	fldd	d7, [r7, #32]
	fcmpezd	d7
	fmstat
	ite	pl
	movpl	r3, #0
	movmi	r3, #1
	uxtb	r3, r3
	cmp	r3, #0
	beq	.L5
	fldd	d7, [r7, #32]
	fnegd	d7, d7
	fstd	d7, [r7, #32]
	b	.L5
.L9:
	nop
.L5:
	fldd	d6, [r7, #32]
	fldd	d7, [r7, #40]
	fcmped	d6, d7
	fmstat
	ite	le
	movle	r3, #0
	movgt	r3, #1
	uxtb	r3, r3
	cmp	r3, #0
	bne	.L8
	fldd	d6, [r7, #16]
	fldd	d7, [r7, #8]
	faddd	d6, d6, d7
	fconstd	d7, #0
	fdivd	d7, d6, d7
.L4:
	fmrrd	r2, r3, d7
	mov	r0, r2
	mov	r1, r3
	add	r7, r7, #52
	mov	sp, r7
	pop	{r7}
	bx	lr
.L11:
	.align	3
.L10:
	.word	0
	.word	0
	.word	-1598689907
	.word	1050724087
	.word	0
	.word	1072693248
	.size	sq, .-sq
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",%progbits
