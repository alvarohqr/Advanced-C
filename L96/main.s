	.file	"main.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii "The Macro __LINE__ returns an integer representing the current line were is called, this is the line: #%d \12\0"
.LC1:
	.ascii "main.c\0"
	.align 8
.LC2:
	.ascii "The Macro __FILE__ returns a string whit the address of the file, this file is located at: #%s \12\0"
.LC3:
	.ascii "Sep 30 2022\0"
	.align 8
.LC4:
	.ascii "The Macro __DATE__ returns the current date in a string, today is: #%s \12\0"
.LC5:
	.ascii "15:57:33\0"
	.align 8
.LC6:
	.ascii "The Macro __TIME__ returns the current time in a string in the 24 hours format, today is: #%s \12\0"
	.align 8
.LC7:
	.ascii "The Macro __STDC__ returns 1 if the compiler conforms to ISO Standard C, __STC__ = #%d \12\0"
.LC9:
	.ascii "\12Enter 2 numbers: \0"
.LC10:
	.ascii "%f %f\0"
.LC11:
	.ascii "%.3f + %.3f = %.3 f\12\0"
.LC12:
	.ascii "\12Enter a number: \0"
.LC13:
	.ascii "%d\0"
.LC14:
	.ascii "%d ^ 2 = %d\12\0"
.LC15:
	.ascii "%d ^ 3 = %d\0"
.LC16:
	.ascii "\12Enter a character: \0"
.LC17:
	.ascii "'%c' Is upper case\12\0"
.LC18:
	.ascii "'%c' Is lower case\12\0"
.LC19:
	.ascii "'%c' is not alphabet\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$42, %edx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdx
	leaq	.LC4(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdx
	leaq	.LC6(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$1, %edx
	leaq	.LC7(%rip), %rax
	movq	%rax, %rcx
	call	printf
	pxor	%xmm0, %xmm0
	movss	%xmm0, -8(%rbp)
	pxor	%xmm0, %xmm0
	movss	%xmm0, -12(%rbp)
	leaq	.LC9(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	-12(%rbp), %rdx
	leaq	-8(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	leaq	.LC10(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	movss	-8(%rbp), %xmm1
	movss	-12(%rbp), %xmm0
	addss	%xmm1, %xmm0
	pxor	%xmm2, %xmm2
	cvtss2sd	%xmm0, %xmm2
	movss	-12(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	cvtss2sd	%xmm0, %xmm1
	movss	-8(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	movq	%xmm2, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm2
	movq	%rax, %rcx
	movq	%xmm1, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	movq	%xmm0, %rax
	movq	%rax, %r8
	movq	%r8, %xmm0
	movapd	%xmm2, %xmm3
	movq	%rcx, %r9
	movapd	%xmm1, %xmm2
	movq	%rdx, %r8
	movapd	%xmm0, %xmm1
	movq	%rax, %rdx
	leaq	.LC11(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, -16(%rbp)
	leaq	.LC12(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	-16(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC13(%rip), %rax
	movq	%rax, %rcx
	call	scanf
	movl	-16(%rbp), %edx
	movl	-16(%rbp), %eax
	imull	%eax, %edx
	movl	-16(%rbp), %eax
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC14(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	-16(%rbp), %edx
	movl	-16(%rbp), %eax
	imull	%eax, %edx
	movl	-16(%rbp), %eax
	imull	%eax, %edx
	movl	-16(%rbp), %eax
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC15(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movb	$0, -1(%rbp)
	leaq	.LC16(%rip), %rax
	movq	%rax, %rcx
	call	printf
	call	getchar
	movb	%al, -1(%rbp)
	cmpb	$64, -1(%rbp)
	jle	.L2
	cmpb	$90, -1(%rbp)
	jg	.L2
	movsbl	-1(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC17(%rip), %rax
	movq	%rax, %rcx
	call	printf
	jmp	.L3
.L2:
	cmpb	$96, -1(%rbp)
	jle	.L4
	cmpb	$122, -1(%rbp)
	jg	.L4
	movsbl	-1(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC18(%rip), %rax
	movq	%rax, %rcx
	call	printf
	jmp	.L3
.L4:
	movsbl	-1(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC19(%rip), %rax
	movq	%rax, %rcx
	call	printf
.L3:
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 11.3.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	getchar;	.scl	2;	.type	32;	.endef
