	.cpu arm7tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 2
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"main.c"
	.text
	.align	2
	.global	goToStart
	.arch armv4t
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToStart, %function
goToStart:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r2, #67108864
	mov	r3, #256
	mov	r1, #7168
	push	{r4, lr}
	mov	r0, #3
	strh	r1, [r2, #8]	@ movhi
	ldr	r4, .L4
	strh	r3, [r2]	@ movhi
	ldr	r1, .L4+4
	mov	r2, #83886080
	mov	lr, pc
	bx	r4
	mov	r3, #1376
	mov	r2, #100663296
	mov	r0, #3
	ldr	r1, .L4+8
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	mov	r0, #3
	ldr	r2, .L4+12
	ldr	r1, .L4+16
	mov	lr, pc
	bx	r4
	mov	r3, #0
	ldr	r2, .L4+20
	ldr	ip, .L4+24
	ldrh	lr, [r2, #48]
	ldr	r0, .L4+28
	ldr	r1, .L4+32
	ldr	r2, .L4+36
	strh	lr, [ip]	@ movhi
	str	r3, [r0]
	str	r3, [r1]
	str	r3, [r2]
	pop	{r4, lr}
	bx	lr
.L5:
	.align	2
.L4:
	.word	DMANow
	.word	bgPal
	.word	bgTiles
	.word	100720640
	.word	bgMap
	.word	67109120
	.word	buttons
	.word	state
	.word	seed
	.word	pts
	.size	goToStart, .-goToStart
	.align	2
	.global	initialize
	.syntax unified
	.arm
	.fpu softvfp
	.type	initialize, %function
initialize:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	mov	r2, #0
	ldr	r3, .L7
	ldr	r1, .L7+4
	ldrh	r0, [r3, #48]
	ldr	r3, .L7+8
	strh	r0, [r1]	@ movhi
	strh	r2, [r3]	@ movhi
	b	goToStart
.L8:
	.align	2
.L7:
	.word	67109120
	.word	buttons
	.word	oldButtons
	.size	initialize, .-initialize
	.align	2
	.global	goToInstructions
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToInstructions, %function
goToInstructions:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #256
	mov	r1, #67108864
	push	{r4, lr}
	mov	r2, #83886080
	ldr	r4, .L11
	strh	r3, [r1]	@ movhi
	mov	r0, #3
	ldr	r1, .L11+4
	mov	lr, pc
	bx	r4
	mov	r3, #2496
	mov	r2, #100663296
	mov	r0, #3
	ldr	r1, .L11+8
	mov	lr, pc
	bx	r4
	ldr	r2, .L11+12
	mov	r0, #3
	ldr	r1, .L11+16
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L11+20
	mov	lr, pc
	bx	r3
	ldr	r3, .L11+24
	mov	lr, pc
	bx	r3
	mov	r2, #1
	ldr	r3, .L11+28
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L12:
	.align	2
.L11:
	.word	DMANow
	.word	instructionsPal
	.word	instructionsTiles
	.word	100720640
	.word	instructionsMap
	.word	hideSprites
	.word	waitForVBlank
	.word	state
	.size	goToInstructions, .-goToInstructions
	.align	2
	.global	instructions
	.syntax unified
	.arm
	.fpu softvfp
	.type	instructions, %function
instructions:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L20
	push	{r4, lr}
	mov	lr, pc
	bx	r3
	ldr	r3, .L20+4
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L13
	ldr	r3, .L20+8
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L19
.L13:
	pop	{r4, lr}
	bx	lr
.L19:
	pop	{r4, lr}
	b	goToStart
.L21:
	.align	2
.L20:
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.size	instructions, .-instructions
	.align	2
	.global	goToGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToGame, %function
goToGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	mov	r2, #67108864
	mov	r4, #3
	mov	r1, #4352
	ldr	r3, .L24
	ldr	r5, .L24+4
	str	r4, [r3]
	mov	r0, r4
	strh	r1, [r2]	@ movhi
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L24+8
	mov	lr, pc
	bx	r5
	mov	r0, r4
	mov	r3, #128
	mov	r2, #100663296
	ldr	r1, .L24+12
	mov	lr, pc
	bx	r5
	mov	r0, r4
	mov	r3, #1024
	ldr	r2, .L24+16
	ldr	r1, .L24+20
	mov	lr, pc
	bx	r5
	mov	r0, r4
	mov	r3, #256
	ldr	r2, .L24+24
	ldr	r1, .L24+28
	mov	lr, pc
	bx	r5
	mov	r0, r4
	ldr	r2, .L24+32
	ldr	r1, .L24+36
	mov	r3, #16384
	mov	lr, pc
	bx	r5
	ldr	r3, .L24+40
	mov	lr, pc
	bx	r3
	ldr	r3, .L24+44
	mov	lr, pc
	bx	r3
	mov	r2, #2
	ldr	r3, .L24+48
	pop	{r4, r5, r6, lr}
	str	r2, [r3]
	bx	lr
.L25:
	.align	2
.L24:
	.word	lives
	.word	DMANow
	.word	gameScreenPal
	.word	gameScreenTiles
	.word	100720640
	.word	gameScreenMap
	.word	83886592
	.word	spritesheetPal
	.word	100728832
	.word	spritesheetTiles
	.word	hideSprites
	.word	waitForVBlank
	.word	state
	.size	goToGame, .-goToGame
	.align	2
	.global	start
	.syntax unified
	.arm
	.fpu softvfp
	.type	start, %function
start:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r2, .L38
	ldr	r4, .L38+4
	ldr	r0, [r2]
	ldrh	r3, [r4]
	add	r0, r0, #1
	tst	r3, #8
	str	r0, [r2]
	beq	.L27
	ldr	r2, .L38+8
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L36
.L27:
	tst	r3, #4
	beq	.L26
	ldr	r3, .L38+8
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L37
.L26:
	pop	{r4, lr}
	bx	lr
.L37:
	pop	{r4, lr}
	b	goToInstructions
.L36:
	ldr	r3, .L38+12
	mov	lr, pc
	bx	r3
	bl	goToGame
	ldr	r3, .L38+16
	mov	lr, pc
	bx	r3
	ldrh	r3, [r4]
	b	.L27
.L39:
	.align	2
.L38:
	.word	seed
	.word	oldButtons
	.word	buttons
	.word	srand
	.word	initGame
	.size	start, .-start
	.align	2
	.global	goToPause
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToPause, %function
goToPause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #256
	mov	r1, #67108864
	push	{r4, lr}
	mov	r2, #83886080
	ldr	r4, .L42
	strh	r3, [r1]	@ movhi
	mov	r0, #3
	ldr	r1, .L42+4
	mov	lr, pc
	bx	r4
	mov	r3, #816
	mov	r2, #100663296
	mov	r0, #3
	ldr	r1, .L42+8
	mov	lr, pc
	bx	r4
	mov	r0, #3
	ldr	r2, .L42+12
	ldr	r1, .L42+16
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L42+20
	mov	lr, pc
	bx	r3
	mov	r2, #117440512
	mov	r3, #512
	mov	r0, #3
	ldr	r1, .L42+24
	mov	lr, pc
	bx	r4
	ldr	r3, .L42+28
	mov	lr, pc
	bx	r3
	mov	r2, #3
	ldr	r3, .L42+32
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L43:
	.align	2
.L42:
	.word	DMANow
	.word	pausePal
	.word	pauseTiles
	.word	100720640
	.word	pauseMap
	.word	hideSprites
	.word	shadowOAM
	.word	waitForVBlank
	.word	state
	.size	goToPause, .-goToPause
	.align	2
	.global	pause
	.syntax unified
	.arm
	.fpu softvfp
	.type	pause, %function
pause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r4, .L56
	ldr	r3, .L56+4
	mov	lr, pc
	bx	r3
	ldrh	r3, [r4]
	tst	r3, #8
	beq	.L45
	ldr	r2, .L56+8
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L54
.L45:
	tst	r3, #4
	beq	.L44
	ldr	r3, .L56+8
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L55
.L44:
	pop	{r4, lr}
	bx	lr
.L55:
	pop	{r4, lr}
	b	goToStart
.L54:
	bl	goToGame
	ldrh	r3, [r4]
	b	.L45
.L57:
	.align	2
.L56:
	.word	oldButtons
	.word	waitForVBlank
	.word	buttons
	.size	pause, .-pause
	.align	2
	.global	goToWin
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToWin, %function
goToWin:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #256
	mov	r1, #67108864
	push	{r4, lr}
	mov	r2, #83886080
	ldr	r4, .L60
	strh	r3, [r1]	@ movhi
	mov	r0, #3
	ldr	r1, .L60+4
	mov	lr, pc
	bx	r4
	mov	r3, #1008
	mov	r2, #100663296
	mov	r0, #3
	ldr	r1, .L60+8
	mov	lr, pc
	bx	r4
	mov	r0, #3
	ldr	r2, .L60+12
	ldr	r1, .L60+16
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L60+20
	mov	lr, pc
	bx	r3
	mov	r2, #117440512
	mov	r3, #512
	mov	r0, #3
	ldr	r1, .L60+24
	mov	lr, pc
	bx	r4
	ldr	r3, .L60+28
	mov	lr, pc
	bx	r3
	mov	r2, #4
	ldr	r3, .L60+32
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L61:
	.align	2
.L60:
	.word	DMANow
	.word	winPal
	.word	winTiles
	.word	100720640
	.word	winMap
	.word	hideSprites
	.word	shadowOAM
	.word	waitForVBlank
	.word	state
	.size	goToWin, .-goToWin
	.align	2
	.global	win
	.syntax unified
	.arm
	.fpu softvfp
	.type	win, %function
win:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L69
	push	{r4, lr}
	mov	lr, pc
	bx	r3
	ldr	r3, .L69+4
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L62
	ldr	r3, .L69+8
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L68
.L62:
	pop	{r4, lr}
	bx	lr
.L68:
	pop	{r4, lr}
	b	goToStart
.L70:
	.align	2
.L69:
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.size	win, .-win
	.align	2
	.global	goToLose
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLose, %function
goToLose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #256
	mov	r1, #67108864
	push	{r4, lr}
	mov	r2, #83886080
	ldr	r4, .L73
	strh	r3, [r1]	@ movhi
	mov	r0, #3
	ldr	r1, .L73+4
	mov	lr, pc
	bx	r4
	mov	r3, #832
	mov	r2, #100663296
	mov	r0, #3
	ldr	r1, .L73+8
	mov	lr, pc
	bx	r4
	mov	r0, #3
	ldr	r2, .L73+12
	ldr	r1, .L73+16
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L73+20
	mov	lr, pc
	bx	r3
	mov	r2, #117440512
	mov	r3, #512
	mov	r0, #3
	ldr	r1, .L73+24
	mov	lr, pc
	bx	r4
	ldr	r3, .L73+28
	mov	lr, pc
	bx	r3
	mov	r2, #5
	ldr	r3, .L73+32
	pop	{r4, lr}
	str	r2, [r3]
	bx	lr
.L74:
	.align	2
.L73:
	.word	DMANow
	.word	losePal
	.word	loseTiles
	.word	100720640
	.word	loseMap
	.word	hideSprites
	.word	shadowOAM
	.word	waitForVBlank
	.word	state
	.size	goToLose, .-goToLose
	.align	2
	.global	lose
	.syntax unified
	.arm
	.fpu softvfp
	.type	lose, %function
lose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	b	win
	.size	lose, .-lose
	.align	2
	.global	showLives
	.syntax unified
	.arm
	.fpu softvfp
	.type	showLives, %function
showLives:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L77
	ldr	r3, [r3]
	ldr	r2, .L77+4
	ldr	r0, .L77+8
	ldr	r1, .L77+12
	lsl	r3, r3, #7
	add	r3, r3, #148
	strh	r3, [r2, #124]	@ movhi
	strh	r0, [r2, #120]	@ movhi
	strh	r1, [r2, #122]	@ movhi
	bx	lr
.L78:
	.align	2
.L77:
	.word	lives
	.word	shadowOAM
	.word	16386
	.word	-16214
	.size	showLives, .-showLives
	.align	2
	.global	showScore
	.syntax unified
	.arm
	.fpu softvfp
	.type	showScore, %function
showScore:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r1, #724
	mov	r0, #17
	ldr	r3, .L83
	ldr	r2, .L83+4
	ldr	r3, [r3]
	str	lr, [sp, #-4]!
	ldr	ip, .L83+8
	ldr	lr, .L83+12
	strh	r1, [r2, #132]	@ movhi
	cmp	r3, #9
	add	r1, r1, #15872
	strh	lr, [r2, #128]	@ movhi
	strh	ip, [r2, #130]	@ movhi
	strh	r1, [r2, #138]	@ movhi
	strh	r0, [r2, #136]	@ movhi
	bgt	.L80
	lsl	r3, r3, #6
	add	r3, r3, #28
	strh	r3, [r2, #140]	@ movhi
	ldr	lr, [sp], #4
	bx	lr
.L80:
	ldr	r1, .L83+16
	smull	lr, ip, r1, r3
	asr	r1, r3, #31
	rsb	r1, r1, ip, asr #2
	add	ip, r1, r1, lsl #2
	sub	r3, r3, ip, lsl #1
	lsl	r3, r3, #6
	ldr	ip, .L83+20
	lsl	r1, r1, #6
	add	r3, r3, #28
	add	r1, r1, #28
	strh	r0, [r2, #144]	@ movhi
	strh	r3, [r2, #148]	@ movhi
	strh	r1, [r2, #140]	@ movhi
	strh	ip, [r2, #146]	@ movhi
	ldr	lr, [sp], #4
	bx	lr
.L84:
	.align	2
.L83:
	.word	pts
	.word	shadowOAM
	.word	-16214
	.word	16386
	.word	1717986919
	.word	16604
	.size	showScore, .-showScore
	.align	2
	.global	game
	.syntax unified
	.arm
	.fpu softvfp
	.type	game, %function
game:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r5, .L99
	ldr	r3, [r5]
	ldr	r4, .L99+4
	ldr	r1, .L99+8
	ldr	r0, .L99+12
	lsl	r3, r3, #7
	add	r3, r3, #148
	strh	r1, [r4, #122]	@ movhi
	ldr	r2, .L99+16
	strh	r3, [r4, #124]	@ movhi
	strh	r0, [r4, #120]	@ movhi
	mov	lr, pc
	bx	r2
	ldr	r6, .L99+20
	bl	showScore
	ldr	r3, .L99+24
	mov	lr, pc
	bx	r3
	mov	r1, r4
	mov	r3, #512
	mov	r2, #117440512
	mov	r0, #3
	ldr	r4, .L99+28
	mov	lr, pc
	bx	r4
	ldrh	r3, [r6]
	tst	r3, #8
	beq	.L86
	ldr	r2, .L99+32
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L96
.L86:
	tst	r3, #4
	beq	.L87
	ldr	r3, .L99+32
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L97
.L87:
	ldr	r3, [r5]
	cmp	r3, #0
	ble	.L98
	pop	{r4, r5, r6, lr}
	bx	lr
.L98:
	pop	{r4, r5, r6, lr}
	b	goToLose
.L97:
	bl	goToWin
	b	.L87
.L96:
	bl	goToPause
	ldrh	r3, [r6]
	b	.L86
.L100:
	.align	2
.L99:
	.word	lives
	.word	shadowOAM
	.word	-16214
	.word	16386
	.word	updateGame
	.word	oldButtons
	.word	waitForVBlank
	.word	DMANow
	.word	buttons
	.size	game, .-game
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	@ Function supports interworking.
	@ Volatile: function does not return.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r2, #0
	push	{r4, r7, fp, lr}
	ldr	r4, .L113
	ldr	r8, .L113+4
	ldrh	r0, [r4, #48]
	ldr	r5, .L113+8
	ldr	r3, .L113+12
	strh	r0, [r8]	@ movhi
	strh	r2, [r5]	@ movhi
	mov	lr, pc
	bx	r3
	ldr	r6, .L113+16
	ldr	fp, .L113+20
	ldr	r10, .L113+24
	ldr	r9, .L113+28
	ldr	r7, .L113+32
.L102:
	ldr	r2, [r6]
	ldrh	r3, [r8]
.L103:
	strh	r3, [r5]	@ movhi
	ldrh	r3, [r4, #48]
	strh	r3, [r8]	@ movhi
	cmp	r2, #5
	ldrls	pc, [pc, r2, asl #2]
	b	.L103
.L105:
	.word	.L109
	.word	.L108
	.word	.L107
	.word	.L106
	.word	.L104
	.word	.L104
.L104:
	mov	lr, pc
	bx	r7
	b	.L102
.L106:
	ldr	r3, .L113+36
	mov	lr, pc
	bx	r3
	b	.L102
.L107:
	mov	lr, pc
	bx	r9
	b	.L102
.L108:
	mov	lr, pc
	bx	r10
	b	.L102
.L109:
	mov	lr, pc
	bx	fp
	b	.L102
.L114:
	.align	2
.L113:
	.word	67109120
	.word	buttons
	.word	oldButtons
	.word	goToStart
	.word	state
	.word	start
	.word	instructions
	.word	game
	.word	win
	.word	pause
	.size	main, .-main
	.comm	shadowOAM,1024,4
	.global	vOff
	.global	hOff
	.comm	oldButtons,2,2
	.comm	buttons,2,2
	.comm	pts,4,4
	.comm	lives,4,4
	.global	won
	.comm	seed,4,4
	.comm	state,4,4
	.bss
	.align	2
	.type	vOff, %object
	.size	vOff, 4
vOff:
	.space	4
	.type	hOff, %object
	.size	hOff, 4
hOff:
	.space	4
	.type	won, %object
	.size	won, 4
won:
	.space	4
	.ident	"GCC: (devkitARM release 53) 9.1.0"