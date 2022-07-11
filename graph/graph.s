	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 3	sdk_version 11, 3
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$40, -8(%rbp)
	jge	LBB0_4
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movq	_graphics@GOTPCREL(%rip), %rax
	movl	-8(%rbp), %ecx
	movq	%rax, -16(%rbp)                 ## 8-byte Spill
	movl	%ecx, %eax
	cltd
	movl	$8, %ecx
	idivl	%ecx
	movl	%ecx, -20(%rbp)                 ## 4-byte Spill
	movl	%edx, %ecx
                                        ## kill: def $cl killed $ecx
	movl	$128, %edx
	sarl	%cl, %edx
	movl	-8(%rbp), %esi
	movl	%esi, %eax
	movl	%edx, -24(%rbp)                 ## 4-byte Spill
	cltd
	movl	-20(%rbp), %esi                 ## 4-byte Reload
	idivl	%esi
	movslq	%eax, %rdi
	imulq	$60, %rdi, %rdi
	movq	-16(%rbp), %r8                  ## 8-byte Reload
	addq	%rdi, %r8
	movslq	-8(%rbp), %rdi
	movsbl	(%r8,%rdi), %eax
	movl	-24(%rbp), %r9d                 ## 4-byte Reload
	orl	%r9d, %eax
                                        ## kill: def $al killed $al killed $eax
	movb	%al, (%r8,%rdi)
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -8(%rbp)
	jmp	LBB0_1
LBB0_4:
	callq	_print_graphics
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_print_graphics                 ## -- Begin function print_graphics
	.p2align	4, 0x90
_print_graphics:                        ## @print_graphics
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -8(%rbp)
LBB1_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB1_3 Depth 2
                                        ##       Child Loop BB1_5 Depth 3
	cmpl	$60, -8(%rbp)
	jge	LBB1_15
## %bb.2:                               ##   in Loop: Header=BB1_1 Depth=1
	movl	$0, -4(%rbp)
LBB1_3:                                 ##   Parent Loop BB1_1 Depth=1
                                        ## =>  This Loop Header: Depth=2
                                        ##       Child Loop BB1_5 Depth 3
	cmpl	$5, -4(%rbp)
	jge	LBB1_13
## %bb.4:                               ##   in Loop: Header=BB1_3 Depth=2
	movl	$128, -12(%rbp)
LBB1_5:                                 ##   Parent Loop BB1_1 Depth=1
                                        ##     Parent Loop BB1_3 Depth=2
                                        ## =>    This Inner Loop Header: Depth=3
	cmpl	$0, -12(%rbp)
	jbe	LBB1_11
## %bb.6:                               ##   in Loop: Header=BB1_5 Depth=3
	movq	_graphics@GOTPCREL(%rip), %rax
	movslq	-4(%rbp), %rcx
	imulq	$60, %rcx, %rcx
	addq	%rcx, %rax
	movslq	-8(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	andl	-12(%rbp), %edx
	cmpl	$0, %edx
	je	LBB1_8
## %bb.7:                               ##   in Loop: Header=BB1_5 Depth=3
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	jmp	LBB1_9
LBB1_8:                                 ##   in Loop: Header=BB1_5 Depth=3
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB1_9:                                 ##   in Loop: Header=BB1_5 Depth=3
	jmp	LBB1_10
LBB1_10:                                ##   in Loop: Header=BB1_5 Depth=3
	movl	-12(%rbp), %eax
	shrl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	LBB1_5
LBB1_11:                                ##   in Loop: Header=BB1_3 Depth=2
	jmp	LBB1_12
LBB1_12:                                ##   in Loop: Header=BB1_3 Depth=2
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	jmp	LBB1_3
LBB1_13:                                ##   in Loop: Header=BB1_1 Depth=1
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
## %bb.14:                              ##   in Loop: Header=BB1_1 Depth=1
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -8(%rbp)
	jmp	LBB1_1
LBB1_15:
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.comm	_graphics,300,4                 ## @graphics
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"X"

L_.str.1:                               ## @.str.1
	.asciz	"."

L_.str.2:                               ## @.str.2
	.asciz	"\n"

.subsections_via_symbols
