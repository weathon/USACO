
game-Linux64:     file format elf64-x86-64


Disassembly of section .init:

0000000000001210 <_init>:
    1210:	48 83 ec 08          	sub    $0x8,%rsp
    1214:	48 8b 05 cd 3d 20 00 	mov    0x203dcd(%rip),%rax        # 204fe8 <__gmon_start__>
    121b:	48 85 c0             	test   %rax,%rax
    121e:	74 02                	je     1222 <_init+0x12>
    1220:	ff d0                	callq  *%rax
    1222:	48 83 c4 08          	add    $0x8,%rsp
    1226:	c3                   	retq   

Disassembly of section .plt:

0000000000001230 <.plt>:
    1230:	ff 35 8a 3c 20 00    	pushq  0x203c8a(%rip)        # 204ec0 <_GLOBAL_OFFSET_TABLE_+0x8>
    1236:	ff 25 8c 3c 20 00    	jmpq   *0x203c8c(%rip)        # 204ec8 <_GLOBAL_OFFSET_TABLE_+0x10>
    123c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000001240 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@plt>:
    1240:	ff 25 8a 3c 20 00    	jmpq   *0x203c8a(%rip)        # 204ed0 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@GLIBCXX_3.4.21>
    1246:	68 00 00 00 00       	pushq  $0x0
    124b:	e9 e0 ff ff ff       	jmpq   1230 <.plt>

0000000000001250 <memcmp@plt>:
    1250:	ff 25 82 3c 20 00    	jmpq   *0x203c82(%rip)        # 204ed8 <memcmp@GLIBC_2.2.5>
    1256:	68 01 00 00 00       	pushq  $0x1
    125b:	e9 d0 ff ff ff       	jmpq   1230 <.plt>

0000000000001260 <memset@plt>:
    1260:	ff 25 7a 3c 20 00    	jmpq   *0x203c7a(%rip)        # 204ee0 <memset@GLIBC_2.2.5>
    1266:	68 02 00 00 00       	pushq  $0x2
    126b:	e9 c0 ff ff ff       	jmpq   1230 <.plt>

0000000000001270 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv@plt>:
    1270:	ff 25 72 3c 20 00    	jmpq   *0x203c72(%rip)        # 204ee8 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv@GLIBCXX_3.4.21>
    1276:	68 03 00 00 00       	pushq  $0x3
    127b:	e9 b0 ff ff ff       	jmpq   1230 <.plt>

0000000000001280 <_ZNSirsERi@plt>:
    1280:	ff 25 6a 3c 20 00    	jmpq   *0x203c6a(%rip)        # 204ef0 <_ZNSirsERi@GLIBCXX_3.4>
    1286:	68 04 00 00 00       	pushq  $0x4
    128b:	e9 a0 ff ff ff       	jmpq   1230 <.plt>

0000000000001290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>:
    1290:	ff 25 62 3c 20 00    	jmpq   *0x203c62(%rip)        # 204ef8 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@GLIBCXX_3.4.21>
    1296:	68 05 00 00 00       	pushq  $0x5
    129b:	e9 90 ff ff ff       	jmpq   1230 <.plt>

00000000000012a0 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv@plt>:
    12a0:	ff 25 5a 3c 20 00    	jmpq   *0x203c5a(%rip)        # 204f00 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv@GLIBCXX_3.4.21>
    12a6:	68 06 00 00 00       	pushq  $0x6
    12ab:	e9 80 ff ff ff       	jmpq   1230 <.plt>

00000000000012b0 <memcpy@plt>:
    12b0:	ff 25 52 3c 20 00    	jmpq   *0x203c52(%rip)        # 204f08 <memcpy@GLIBC_2.14>
    12b6:	68 07 00 00 00       	pushq  $0x7
    12bb:	e9 70 ff ff ff       	jmpq   1230 <.plt>

00000000000012c0 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv@plt>:
    12c0:	ff 25 4a 3c 20 00    	jmpq   *0x203c4a(%rip)        # 204f10 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv@GLIBCXX_3.4.21>
    12c6:	68 08 00 00 00       	pushq  $0x8
    12cb:	e9 60 ff ff ff       	jmpq   1230 <.plt>

00000000000012d0 <__cxa_atexit@plt>:
    12d0:	ff 25 42 3c 20 00    	jmpq   *0x203c42(%rip)        # 204f18 <__cxa_atexit@GLIBC_2.2.5>
    12d6:	68 09 00 00 00       	pushq  $0x9
    12db:	e9 50 ff ff ff       	jmpq   1230 <.plt>

00000000000012e0 <_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@plt>:
    12e0:	ff 25 3a 3c 20 00    	jmpq   *0x203c3a(%rip)        # 204f20 <_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@GLIBCXX_3.4.21>
    12e6:	68 0a 00 00 00       	pushq  $0xa
    12eb:	e9 40 ff ff ff       	jmpq   1230 <.plt>

00000000000012f0 <time@plt>:
    12f0:	ff 25 32 3c 20 00    	jmpq   *0x203c32(%rip)        # 204f28 <time@GLIBC_2.2.5>
    12f6:	68 0b 00 00 00       	pushq  $0xb
    12fb:	e9 30 ff ff ff       	jmpq   1230 <.plt>

0000000000001300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>:
    1300:	ff 25 2a 3c 20 00    	jmpq   *0x203c2a(%rip)        # 204f30 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@GLIBCXX_3.4>
    1306:	68 0c 00 00 00       	pushq  $0xc
    130b:	e9 20 ff ff ff       	jmpq   1230 <.plt>

0000000000001310 <_ZNSolsEPFRSoS_E@plt>:
    1310:	ff 25 22 3c 20 00    	jmpq   *0x203c22(%rip)        # 204f38 <_ZNSolsEPFRSoS_E@GLIBCXX_3.4>
    1316:	68 0d 00 00 00       	pushq  $0xd
    131b:	e9 10 ff ff ff       	jmpq   1230 <.plt>

0000000000001320 <freopen@plt>:
    1320:	ff 25 1a 3c 20 00    	jmpq   *0x203c1a(%rip)        # 204f40 <freopen@GLIBC_2.2.5>
    1326:	68 0e 00 00 00       	pushq  $0xe
    132b:	e9 00 ff ff ff       	jmpq   1230 <.plt>

0000000000001330 <_ZNSaIcED1Ev@plt>:
    1330:	ff 25 12 3c 20 00    	jmpq   *0x203c12(%rip)        # 204f48 <_ZNSaIcED1Ev@GLIBCXX_3.4>
    1336:	68 0f 00 00 00       	pushq  $0xf
    133b:	e9 f0 fe ff ff       	jmpq   1230 <.plt>

0000000000001340 <__stack_chk_fail@plt>:
    1340:	ff 25 0a 3c 20 00    	jmpq   *0x203c0a(%rip)        # 204f50 <__stack_chk_fail@GLIBC_2.4>
    1346:	68 10 00 00 00       	pushq  $0x10
    134b:	e9 e0 fe ff ff       	jmpq   1230 <.plt>

0000000000001350 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@plt>:
    1350:	ff 25 02 3c 20 00    	jmpq   *0x203c02(%rip)        # 204f58 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@GLIBCXX_3.4>
    1356:	68 11 00 00 00       	pushq  $0x11
    135b:	e9 d0 fe ff ff       	jmpq   1230 <.plt>

0000000000001360 <exit@plt>:
    1360:	ff 25 fa 3b 20 00    	jmpq   *0x203bfa(%rip)        # 204f60 <exit@GLIBC_2.2.5>
    1366:	68 12 00 00 00       	pushq  $0x12
    136b:	e9 c0 fe ff ff       	jmpq   1230 <.plt>

0000000000001370 <_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE@plt>:
    1370:	ff 25 f2 3b 20 00    	jmpq   *0x203bf2(%rip)        # 204f68 <_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE@GLIBCXX_3.4.21>
    1376:	68 13 00 00 00       	pushq  $0x13
    137b:	e9 b0 fe ff ff       	jmpq   1230 <.plt>

0000000000001380 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv@plt>:
    1380:	ff 25 ea 3b 20 00    	jmpq   *0x203bea(%rip)        # 204f70 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv@GLIBCXX_3.4.21>
    1386:	68 14 00 00 00       	pushq  $0x14
    138b:	e9 a0 fe ff ff       	jmpq   1230 <.plt>

0000000000001390 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@plt>:
    1390:	ff 25 e2 3b 20 00    	jmpq   *0x203be2(%rip)        # 204f78 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@GLIBCXX_3.4.21>
    1396:	68 15 00 00 00       	pushq  $0x15
    139b:	e9 90 fe ff ff       	jmpq   1230 <.plt>

00000000000013a0 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev@plt>:
    13a0:	ff 25 da 3b 20 00    	jmpq   *0x203bda(%rip)        # 204f80 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev@GLIBCXX_3.4.21>
    13a6:	68 16 00 00 00       	pushq  $0x16
    13ab:	e9 80 fe ff ff       	jmpq   1230 <.plt>

00000000000013b0 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv@plt>:
    13b0:	ff 25 d2 3b 20 00    	jmpq   *0x203bd2(%rip)        # 204f88 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv@GLIBCXX_3.4.21>
    13b6:	68 17 00 00 00       	pushq  $0x17
    13bb:	e9 70 fe ff ff       	jmpq   1230 <.plt>

00000000000013c0 <_ZNSt8ios_base4InitC1Ev@plt>:
    13c0:	ff 25 ca 3b 20 00    	jmpq   *0x203bca(%rip)        # 204f90 <_ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4>
    13c6:	68 18 00 00 00       	pushq  $0x18
    13cb:	e9 60 fe ff ff       	jmpq   1230 <.plt>

00000000000013d0 <memmove@plt>:
    13d0:	ff 25 c2 3b 20 00    	jmpq   *0x203bc2(%rip)        # 204f98 <memmove@GLIBC_2.2.5>
    13d6:	68 19 00 00 00       	pushq  $0x19
    13db:	e9 50 fe ff ff       	jmpq   1230 <.plt>

00000000000013e0 <_ZNSolsEi@plt>:
    13e0:	ff 25 ba 3b 20 00    	jmpq   *0x203bba(%rip)        # 204fa0 <_ZNSolsEi@GLIBCXX_3.4>
    13e6:	68 1a 00 00 00       	pushq  $0x1a
    13eb:	e9 40 fe ff ff       	jmpq   1230 <.plt>

00000000000013f0 <_Unwind_Resume@plt>:
    13f0:	ff 25 b2 3b 20 00    	jmpq   *0x203bb2(%rip)        # 204fa8 <_Unwind_Resume@GCC_3.0>
    13f6:	68 1b 00 00 00       	pushq  $0x1b
    13fb:	e9 30 fe ff ff       	jmpq   1230 <.plt>

0000000000001400 <_ZNSaIcEC1Ev@plt>:
    1400:	ff 25 aa 3b 20 00    	jmpq   *0x203baa(%rip)        # 204fb0 <_ZNSaIcEC1Ev@GLIBCXX_3.4>
    1406:	68 1c 00 00 00       	pushq  $0x1c
    140b:	e9 20 fe ff ff       	jmpq   1230 <.plt>

0000000000001410 <_ZNSolsEl@plt>:
    1410:	ff 25 a2 3b 20 00    	jmpq   *0x203ba2(%rip)        # 204fb8 <_ZNSolsEl@GLIBCXX_3.4>
    1416:	68 1d 00 00 00       	pushq  $0x1d
    141b:	e9 10 fe ff ff       	jmpq   1230 <.plt>

0000000000001420 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm@plt>:
    1420:	ff 25 9a 3b 20 00    	jmpq   *0x203b9a(%rip)        # 204fc0 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm@GLIBCXX_3.4.21>
    1426:	68 1e 00 00 00       	pushq  $0x1e
    142b:	e9 00 fe ff ff       	jmpq   1230 <.plt>

Disassembly of section .plt.got:

0000000000001430 <__cxa_finalize@plt>:
    1430:	ff 25 92 3b 20 00    	jmpq   *0x203b92(%rip)        # 204fc8 <__cxa_finalize@GLIBC_2.2.5>
    1436:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

0000000000001440 <_start>:
    1440:	31 ed                	xor    %ebp,%ebp
    1442:	49 89 d1             	mov    %rdx,%r9
    1445:	5e                   	pop    %rsi
    1446:	48 89 e2             	mov    %rsp,%rdx
    1449:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    144d:	50                   	push   %rax
    144e:	54                   	push   %rsp
    144f:	4c 8d 05 4a 25 00 00 	lea    0x254a(%rip),%r8        # 39a0 <__libc_csu_fini>
    1456:	48 8d 0d d3 24 00 00 	lea    0x24d3(%rip),%rcx        # 3930 <__libc_csu_init>
    145d:	48 8d 3d 65 0f 00 00 	lea    0xf65(%rip),%rdi        # 23c9 <main>
    1464:	ff 15 76 3b 20 00    	callq  *0x203b76(%rip)        # 204fe0 <__libc_start_main@GLIBC_2.2.5>
    146a:	f4                   	hlt    
    146b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001470 <deregister_tm_clones>:
    1470:	48 8d 3d a1 3b 20 00 	lea    0x203ba1(%rip),%rdi        # 205018 <__TMC_END__>
    1477:	55                   	push   %rbp
    1478:	48 8d 05 99 3b 20 00 	lea    0x203b99(%rip),%rax        # 205018 <__TMC_END__>
    147f:	48 39 f8             	cmp    %rdi,%rax
    1482:	48 89 e5             	mov    %rsp,%rbp
    1485:	74 19                	je     14a0 <deregister_tm_clones+0x30>
    1487:	48 8b 05 4a 3b 20 00 	mov    0x203b4a(%rip),%rax        # 204fd8 <_ITM_deregisterTMCloneTable>
    148e:	48 85 c0             	test   %rax,%rax
    1491:	74 0d                	je     14a0 <deregister_tm_clones+0x30>
    1493:	5d                   	pop    %rbp
    1494:	ff e0                	jmpq   *%rax
    1496:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    149d:	00 00 00 
    14a0:	5d                   	pop    %rbp
    14a1:	c3                   	retq   
    14a2:	0f 1f 40 00          	nopl   0x0(%rax)
    14a6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    14ad:	00 00 00 

00000000000014b0 <register_tm_clones>:
    14b0:	48 8d 3d 61 3b 20 00 	lea    0x203b61(%rip),%rdi        # 205018 <__TMC_END__>
    14b7:	48 8d 35 5a 3b 20 00 	lea    0x203b5a(%rip),%rsi        # 205018 <__TMC_END__>
    14be:	55                   	push   %rbp
    14bf:	48 29 fe             	sub    %rdi,%rsi
    14c2:	48 89 e5             	mov    %rsp,%rbp
    14c5:	48 c1 fe 03          	sar    $0x3,%rsi
    14c9:	48 89 f0             	mov    %rsi,%rax
    14cc:	48 c1 e8 3f          	shr    $0x3f,%rax
    14d0:	48 01 c6             	add    %rax,%rsi
    14d3:	48 d1 fe             	sar    %rsi
    14d6:	74 18                	je     14f0 <register_tm_clones+0x40>
    14d8:	48 8b 05 11 3b 20 00 	mov    0x203b11(%rip),%rax        # 204ff0 <_ITM_registerTMCloneTable>
    14df:	48 85 c0             	test   %rax,%rax
    14e2:	74 0c                	je     14f0 <register_tm_clones+0x40>
    14e4:	5d                   	pop    %rbp
    14e5:	ff e0                	jmpq   *%rax
    14e7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    14ee:	00 00 
    14f0:	5d                   	pop    %rbp
    14f1:	c3                   	retq   
    14f2:	0f 1f 40 00          	nopl   0x0(%rax)
    14f6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    14fd:	00 00 00 

0000000000001500 <__do_global_dtors_aux>:
    1500:	80 3d 89 3e 20 00 00 	cmpb   $0x0,0x203e89(%rip)        # 205390 <completed.7698>
    1507:	75 2f                	jne    1538 <__do_global_dtors_aux+0x38>
    1509:	48 83 3d b7 3a 20 00 	cmpq   $0x0,0x203ab7(%rip)        # 204fc8 <__cxa_finalize@GLIBC_2.2.5>
    1510:	00 
    1511:	55                   	push   %rbp
    1512:	48 89 e5             	mov    %rsp,%rbp
    1515:	74 0c                	je     1523 <__do_global_dtors_aux+0x23>
    1517:	48 8b 3d ea 3a 20 00 	mov    0x203aea(%rip),%rdi        # 205008 <__dso_handle>
    151e:	e8 0d ff ff ff       	callq  1430 <__cxa_finalize@plt>
    1523:	e8 48 ff ff ff       	callq  1470 <deregister_tm_clones>
    1528:	c6 05 61 3e 20 00 01 	movb   $0x1,0x203e61(%rip)        # 205390 <completed.7698>
    152f:	5d                   	pop    %rbp
    1530:	c3                   	retq   
    1531:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1538:	f3 c3                	repz retq 
    153a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000001540 <frame_dummy>:
    1540:	55                   	push   %rbp
    1541:	48 89 e5             	mov    %rsp,%rbp
    1544:	5d                   	pop    %rbp
    1545:	e9 66 ff ff ff       	jmpq   14b0 <register_tm_clones>

000000000000154a <_Z11currentTimev>:
    154a:	55                   	push   %rbp
    154b:	48 89 e5             	mov    %rsp,%rbp
    154e:	48 83 ec 10          	sub    $0x10,%rsp
    1552:	bf 00 00 00 00       	mov    $0x0,%edi
    1557:	e8 94 fd ff ff       	callq  12f0 <time@plt>
    155c:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1560:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1564:	48 89 c6             	mov    %rax,%rsi
    1567:	48 8d 3d d2 3a 20 00 	lea    0x203ad2(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    156e:	e8 9d fe ff ff       	callq  1410 <_ZNSolsEl@plt>
    1573:	48 8d 35 3f 24 00 00 	lea    0x243f(%rip),%rsi        # 39b9 <_ZStL19piecewise_construct+0x1>
    157a:	48 89 c7             	mov    %rax,%rdi
    157d:	e8 7e fd ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1582:	90                   	nop
    1583:	c9                   	leaveq 
    1584:	c3                   	retq   

0000000000001585 <_Z3gcdii>:
    1585:	55                   	push   %rbp
    1586:	48 89 e5             	mov    %rsp,%rbp
    1589:	48 83 ec 10          	sub    $0x10,%rsp
    158d:	89 7d fc             	mov    %edi,-0x4(%rbp)
    1590:	89 75 f8             	mov    %esi,-0x8(%rbp)
    1593:	83 7d f8 00          	cmpl   $0x0,-0x8(%rbp)
    1597:	74 15                	je     15ae <_Z3gcdii+0x29>
    1599:	8b 45 fc             	mov    -0x4(%rbp),%eax
    159c:	99                   	cltd   
    159d:	f7 7d f8             	idivl  -0x8(%rbp)
    15a0:	8b 45 f8             	mov    -0x8(%rbp),%eax
    15a3:	89 d6                	mov    %edx,%esi
    15a5:	89 c7                	mov    %eax,%edi
    15a7:	e8 d9 ff ff ff       	callq  1585 <_Z3gcdii>
    15ac:	eb 03                	jmp    15b1 <_Z3gcdii+0x2c>
    15ae:	8b 45 fc             	mov    -0x4(%rbp),%eax
    15b1:	c9                   	leaveq 
    15b2:	c3                   	retq   

00000000000015b3 <_Z8gameOverv>:
    15b3:	55                   	push   %rbp
    15b4:	48 89 e5             	mov    %rsp,%rbp
    15b7:	e8 8e ff ff ff       	callq  154a <_Z11currentTimev>
    15bc:	48 8d 35 f8 23 00 00 	lea    0x23f8(%rip),%rsi        # 39bb <_ZStL19piecewise_construct+0x3>
    15c3:	48 8d 3d 76 3a 20 00 	lea    0x203a76(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    15ca:	e8 31 fd ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    15cf:	48 89 c2             	mov    %rax,%rdx
    15d2:	48 8b 05 f7 39 20 00 	mov    0x2039f7(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    15d9:	48 89 c6             	mov    %rax,%rsi
    15dc:	48 89 d7             	mov    %rdx,%rdi
    15df:	e8 2c fd ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    15e4:	bf 00 00 00 00       	mov    $0x0,%edi
    15e9:	e8 72 fd ff ff       	callq  1360 <exit@plt>

00000000000015ee <_Z9gameStartv>:
    15ee:	55                   	push   %rbp
    15ef:	48 89 e5             	mov    %rsp,%rbp
    15f2:	48 8b 05 27 3a 20 00 	mov    0x203a27(%rip),%rax        # 205020 <stdout@@GLIBC_2.2.5>
    15f9:	48 89 c2             	mov    %rax,%rdx
    15fc:	48 8d 35 c4 23 00 00 	lea    0x23c4(%rip),%rsi        # 39c7 <_ZStL19piecewise_construct+0xf>
    1603:	48 8d 3d bf 23 00 00 	lea    0x23bf(%rip),%rdi        # 39c9 <_ZStL19piecewise_construct+0x11>
    160a:	e8 11 fd ff ff       	callq  1320 <freopen@plt>
    160f:	e8 36 ff ff ff       	callq  154a <_Z11currentTimev>
    1614:	48 8d 35 b7 23 00 00 	lea    0x23b7(%rip),%rsi        # 39d2 <_ZStL19piecewise_construct+0x1a>
    161b:	48 8d 3d 1e 3a 20 00 	lea    0x203a1e(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    1622:	e8 d9 fc ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1627:	48 89 c2             	mov    %rax,%rdx
    162a:	48 8b 05 9f 39 20 00 	mov    0x20399f(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1631:	48 89 c6             	mov    %rax,%rsi
    1634:	48 89 d7             	mov    %rdx,%rdi
    1637:	e8 d4 fc ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    163c:	90                   	nop
    163d:	5d                   	pop    %rbp
    163e:	c3                   	retq   

000000000000163f <_Z7my_hashNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE>:
    163f:	55                   	push   %rbp
    1640:	48 89 e5             	mov    %rsp,%rbp
    1643:	53                   	push   %rbx
    1644:	48 83 ec 28          	sub    $0x28,%rsp
    1648:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
    164c:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    1650:	48 89 c7             	mov    %rax,%rdi
    1653:	e8 58 fd ff ff       	callq  13b0 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv@plt>
    1658:	89 45 ec             	mov    %eax,-0x14(%rbp)
    165b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%rbp)
    1662:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    1669:	8b 45 e8             	mov    -0x18(%rbp),%eax
    166c:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    166f:	7d 74                	jge    16e5 <_Z7my_hashNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE+0xa6>
    1671:	8b 45 e8             	mov    -0x18(%rbp),%eax
    1674:	48 63 d0             	movslq %eax,%rdx
    1677:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    167b:	48 89 d6             	mov    %rdx,%rsi
    167e:	48 89 c7             	mov    %rax,%rdi
    1681:	e8 9a fd ff ff       	callq  1420 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm@plt>
    1686:	0f b6 00             	movzbl (%rax),%eax
    1689:	0f be d8             	movsbl %al,%ebx
    168c:	8b 45 e8             	mov    -0x18(%rbp),%eax
    168f:	48 63 d0             	movslq %eax,%rdx
    1692:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    1696:	48 89 d6             	mov    %rdx,%rsi
    1699:	48 89 c7             	mov    %rax,%rdi
    169c:	e8 7f fd ff ff       	callq  1420 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm@plt>
    16a1:	0f b6 00             	movzbl (%rax),%eax
    16a4:	0f be c0             	movsbl %al,%eax
    16a7:	0f af d8             	imul   %eax,%ebx
    16aa:	89 da                	mov    %ebx,%edx
    16ac:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    16af:	8d 0c 02             	lea    (%rdx,%rax,1),%ecx
    16b2:	ba c9 df 4b 85       	mov    $0x854bdfc9,%edx
    16b7:	89 c8                	mov    %ecx,%eax
    16b9:	f7 ea                	imul   %edx
    16bb:	8d 04 0a             	lea    (%rdx,%rcx,1),%eax
    16be:	c1 f8 0d             	sar    $0xd,%eax
    16c1:	89 c2                	mov    %eax,%edx
    16c3:	89 c8                	mov    %ecx,%eax
    16c5:	c1 f8 1f             	sar    $0x1f,%eax
    16c8:	29 c2                	sub    %eax,%edx
    16ca:	89 d0                	mov    %edx,%eax
    16cc:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    16cf:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    16d2:	69 c0 75 3d 00 00    	imul   $0x3d75,%eax,%eax
    16d8:	29 c1                	sub    %eax,%ecx
    16da:	89 c8                	mov    %ecx,%eax
    16dc:	89 45 e4             	mov    %eax,-0x1c(%rbp)
    16df:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    16e3:	eb 84                	jmp    1669 <_Z7my_hashNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE+0x2a>
    16e5:	8b 45 e4             	mov    -0x1c(%rbp),%eax
    16e8:	48 83 c4 28          	add    $0x28,%rsp
    16ec:	5b                   	pop    %rbx
    16ed:	5d                   	pop    %rbp
    16ee:	c3                   	retq   

00000000000016ef <_Z4diffNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_>:
    16ef:	55                   	push   %rbp
    16f0:	48 89 e5             	mov    %rsp,%rbp
    16f3:	53                   	push   %rbx
    16f4:	48 83 ec 28          	sub    $0x28,%rsp
    16f8:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
    16fc:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
    1700:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    1704:	48 89 c7             	mov    %rax,%rdi
    1707:	e8 a4 fc ff ff       	callq  13b0 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv@plt>
    170c:	48 89 c3             	mov    %rax,%rbx
    170f:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    1713:	48 89 c7             	mov    %rax,%rdi
    1716:	e8 95 fc ff ff       	callq  13b0 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv@plt>
    171b:	48 39 c3             	cmp    %rax,%rbx
    171e:	0f 95 c0             	setne  %al
    1721:	84 c0                	test   %al,%al
    1723:	74 0a                	je     172f <_Z4diffNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_+0x40>
    1725:	b8 00 00 00 00       	mov    $0x0,%eax
    172a:	e9 c3 00 00 00       	jmpq   17f2 <_Z4diffNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_+0x103>
    172f:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    1733:	48 89 c7             	mov    %rax,%rdi
    1736:	e8 75 fc ff ff       	callq  13b0 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv@plt>
    173b:	89 45 ec             	mov    %eax,-0x14(%rbp)
    173e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%rbp)
    1745:	8b 45 e8             	mov    -0x18(%rbp),%eax
    1748:	3b 45 ec             	cmp    -0x14(%rbp),%eax
    174b:	7d 46                	jge    1793 <_Z4diffNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_+0xa4>
    174d:	8b 45 e8             	mov    -0x18(%rbp),%eax
    1750:	48 63 d0             	movslq %eax,%rdx
    1753:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    1757:	48 89 d6             	mov    %rdx,%rsi
    175a:	48 89 c7             	mov    %rax,%rdi
    175d:	e8 be fc ff ff       	callq  1420 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm@plt>
    1762:	0f b6 18             	movzbl (%rax),%ebx
    1765:	8b 45 e8             	mov    -0x18(%rbp),%eax
    1768:	48 63 d0             	movslq %eax,%rdx
    176b:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    176f:	48 89 d6             	mov    %rdx,%rsi
    1772:	48 89 c7             	mov    %rax,%rdi
    1775:	e8 a6 fc ff ff       	callq  1420 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm@plt>
    177a:	0f b6 00             	movzbl (%rax),%eax
    177d:	38 c3                	cmp    %al,%bl
    177f:	0f 94 c0             	sete   %al
    1782:	84 c0                	test   %al,%al
    1784:	74 07                	je     178d <_Z4diffNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_+0x9e>
    1786:	b8 00 00 00 00       	mov    $0x0,%eax
    178b:	eb 65                	jmp    17f2 <_Z4diffNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_+0x103>
    178d:	83 45 e8 01          	addl   $0x1,-0x18(%rbp)
    1791:	eb b2                	jmp    1745 <_Z4diffNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_+0x56>
    1793:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    1797:	48 89 c7             	mov    %rax,%rdi
    179a:	e8 d1 fa ff ff       	callq  1270 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv@plt>
    179f:	48 89 c3             	mov    %rax,%rbx
    17a2:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    17a6:	48 89 c7             	mov    %rax,%rdi
    17a9:	e8 12 fb ff ff       	callq  12c0 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv@plt>
    17ae:	48 89 de             	mov    %rbx,%rsi
    17b1:	48 89 c7             	mov    %rax,%rdi
    17b4:	e8 08 0d 00 00       	callq  24c1 <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEEvT_SA_>
    17b9:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    17bd:	48 89 c7             	mov    %rax,%rdi
    17c0:	e8 ab fa ff ff       	callq  1270 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE3endEv@plt>
    17c5:	48 89 c3             	mov    %rax,%rbx
    17c8:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    17cc:	48 89 c7             	mov    %rax,%rdi
    17cf:	e8 ec fa ff ff       	callq  12c0 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5beginEv@plt>
    17d4:	48 89 de             	mov    %rbx,%rsi
    17d7:	48 89 c7             	mov    %rax,%rdi
    17da:	e8 e2 0c 00 00       	callq  24c1 <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEEvT_SA_>
    17df:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
    17e3:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    17e7:	48 89 d6             	mov    %rdx,%rsi
    17ea:	48 89 c7             	mov    %rax,%rdi
    17ed:	e8 2b 0d 00 00       	callq  251d <_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_>
    17f2:	48 83 c4 28          	add    $0x28,%rsp
    17f6:	5b                   	pop    %rbx
    17f7:	5d                   	pop    %rbp
    17f8:	c3                   	retq   

00000000000017f9 <_Z10firstStagev>:
    17f9:	55                   	push   %rbp
    17fa:	48 89 e5             	mov    %rsp,%rbp
    17fd:	41 56                	push   %r14
    17ff:	41 55                	push   %r13
    1801:	41 54                	push   %r12
    1803:	53                   	push   %rbx
    1804:	48 81 ec c0 00 00 00 	sub    $0xc0,%rsp
    180b:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    1812:	00 00 
    1814:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    1818:	31 c0                	xor    %eax,%eax
    181a:	48 8d 35 bf 21 00 00 	lea    0x21bf(%rip),%rsi        # 39e0 <_ZStL19piecewise_construct+0x28>
    1821:	48 8d 3d 58 3a 20 00 	lea    0x203a58(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    1828:	e8 d3 fa ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    182d:	48 89 c2             	mov    %rax,%rdx
    1830:	48 8b 05 99 37 20 00 	mov    0x203799(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1837:	48 89 c6             	mov    %rax,%rsi
    183a:	48 89 d7             	mov    %rdx,%rdi
    183d:	e8 ce fa ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    1842:	48 8d 35 b7 21 00 00 	lea    0x21b7(%rip),%rsi        # 3a00 <_ZStL19piecewise_construct+0x48>
    1849:	48 8d 3d 30 3a 20 00 	lea    0x203a30(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    1850:	e8 ab fa ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1855:	48 89 c2             	mov    %rax,%rdx
    1858:	48 8b 05 71 37 20 00 	mov    0x203771(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    185f:	48 89 c6             	mov    %rax,%rsi
    1862:	48 89 d7             	mov    %rdx,%rdi
    1865:	e8 a6 fa ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    186a:	48 8d 35 b5 21 00 00 	lea    0x21b5(%rip),%rsi        # 3a26 <_ZStL19piecewise_construct+0x6e>
    1871:	48 8d 3d 08 3a 20 00 	lea    0x203a08(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    1878:	e8 83 fa ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    187d:	48 8d 85 30 ff ff ff 	lea    -0xd0(%rbp),%rax
    1884:	48 89 c7             	mov    %rax,%rdi
    1887:	e8 14 fb ff ff       	callq  13a0 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev@plt>
    188c:	48 8d 85 2b ff ff ff 	lea    -0xd5(%rbp),%rax
    1893:	48 89 c7             	mov    %rax,%rdi
    1896:	e8 65 fb ff ff       	callq  1400 <_ZNSaIcEC1Ev@plt>
    189b:	48 8d 95 2b ff ff ff 	lea    -0xd5(%rbp),%rdx
    18a2:	48 8d 85 50 ff ff ff 	lea    -0xb0(%rbp),%rax
    18a9:	48 8d 35 89 21 00 00 	lea    0x2189(%rip),%rsi        # 3a39 <_ZStL19piecewise_construct+0x81>
    18b0:	48 89 c7             	mov    %rax,%rdi
    18b3:	e8 d8 fa ff ff       	callq  1390 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@plt>
    18b8:	48 8d 85 2b ff ff ff 	lea    -0xd5(%rbp),%rax
    18bf:	48 89 c7             	mov    %rax,%rdi
    18c2:	e8 69 fa ff ff       	callq  1330 <_ZNSaIcED1Ev@plt>
    18c7:	48 8d 85 30 ff ff ff 	lea    -0xd0(%rbp),%rax
    18ce:	48 89 c6             	mov    %rax,%rsi
    18d1:	48 8d 3d 88 38 20 00 	lea    0x203888(%rip),%rdi        # 205160 <_ZSt3cin@@GLIBCXX_3.4>
    18d8:	e8 93 fa ff ff       	callq  1370 <_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE@plt>
    18dd:	e8 68 fc ff ff       	callq  154a <_Z11currentTimev>
    18e2:	48 8d 35 5e 21 00 00 	lea    0x215e(%rip),%rsi        # 3a47 <_ZStL19piecewise_construct+0x8f>
    18e9:	48 8d 3d 50 37 20 00 	lea    0x203750(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    18f0:	e8 0b fa ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    18f5:	48 89 c2             	mov    %rax,%rdx
    18f8:	48 8d 85 30 ff ff ff 	lea    -0xd0(%rbp),%rax
    18ff:	48 89 c6             	mov    %rax,%rsi
    1902:	48 89 d7             	mov    %rdx,%rdi
    1905:	e8 d6 f9 ff ff       	callq  12e0 <_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@plt>
    190a:	48 89 c2             	mov    %rax,%rdx
    190d:	48 8b 05 bc 36 20 00 	mov    0x2036bc(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1914:	48 89 c6             	mov    %rax,%rsi
    1917:	48 89 d7             	mov    %rdx,%rdi
    191a:	e8 f1 f9 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    191f:	48 8d 95 30 ff ff ff 	lea    -0xd0(%rbp),%rdx
    1926:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
    192a:	48 89 d6             	mov    %rdx,%rsi
    192d:	48 89 c7             	mov    %rax,%rdi
    1930:	e8 0b f9 ff ff       	callq  1240 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@plt>
    1935:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
    1939:	48 89 c7             	mov    %rax,%rdi
    193c:	e8 fe fc ff ff       	callq  163f <_Z7my_hashNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE>
    1941:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%rbp)
    1947:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
    194b:	48 89 c7             	mov    %rax,%rdi
    194e:	e8 3d f9 ff ff       	callq  1290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>
    1953:	bb 00 00 00 00       	mov    $0x0,%ebx
    1958:	41 bc 00 00 00 00    	mov    $0x0,%r12d
    195e:	41 bd 00 00 00 00    	mov    $0x0,%r13d
    1964:	48 8d 95 50 ff ff ff 	lea    -0xb0(%rbp),%rdx
    196b:	48 8d 85 70 ff ff ff 	lea    -0x90(%rbp),%rax
    1972:	48 89 d6             	mov    %rdx,%rsi
    1975:	48 89 c7             	mov    %rax,%rdi
    1978:	e8 c3 f8 ff ff       	callq  1240 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@plt>
    197d:	bb 01 00 00 00       	mov    $0x1,%ebx
    1982:	48 8d 85 70 ff ff ff 	lea    -0x90(%rbp),%rax
    1989:	48 89 c7             	mov    %rax,%rdi
    198c:	e8 ae fc ff ff       	callq  163f <_Z7my_hashNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE>
    1991:	39 85 2c ff ff ff    	cmp    %eax,-0xd4(%rbp)
    1997:	75 52                	jne    19eb <_Z10firstStagev+0x1f2>
    1999:	48 8d 95 50 ff ff ff 	lea    -0xb0(%rbp),%rdx
    19a0:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
    19a4:	48 89 d6             	mov    %rdx,%rsi
    19a7:	48 89 c7             	mov    %rax,%rdi
    19aa:	e8 91 f8 ff ff       	callq  1240 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@plt>
    19af:	41 bc 01 00 00 00    	mov    $0x1,%r12d
    19b5:	48 8d 95 30 ff ff ff 	lea    -0xd0(%rbp),%rdx
    19bc:	48 8d 45 90          	lea    -0x70(%rbp),%rax
    19c0:	48 89 d6             	mov    %rdx,%rsi
    19c3:	48 89 c7             	mov    %rax,%rdi
    19c6:	e8 75 f8 ff ff       	callq  1240 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@plt>
    19cb:	41 bd 01 00 00 00    	mov    $0x1,%r13d
    19d1:	48 8d 55 b0          	lea    -0x50(%rbp),%rdx
    19d5:	48 8d 45 90          	lea    -0x70(%rbp),%rax
    19d9:	48 89 d6             	mov    %rdx,%rsi
    19dc:	48 89 c7             	mov    %rax,%rdi
    19df:	e8 0b fd ff ff       	callq  16ef <_Z4diffNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_>
    19e4:	83 f0 01             	xor    $0x1,%eax
    19e7:	84 c0                	test   %al,%al
    19e9:	74 08                	je     19f3 <_Z10firstStagev+0x1fa>
    19eb:	41 be 01 00 00 00    	mov    $0x1,%r14d
    19f1:	eb 06                	jmp    19f9 <_Z10firstStagev+0x200>
    19f3:	41 be 00 00 00 00    	mov    $0x0,%r14d
    19f9:	45 84 ed             	test   %r13b,%r13b
    19fc:	74 0c                	je     1a0a <_Z10firstStagev+0x211>
    19fe:	48 8d 45 90          	lea    -0x70(%rbp),%rax
    1a02:	48 89 c7             	mov    %rax,%rdi
    1a05:	e8 86 f8 ff ff       	callq  1290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>
    1a0a:	45 84 e4             	test   %r12b,%r12b
    1a0d:	74 0c                	je     1a1b <_Z10firstStagev+0x222>
    1a0f:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
    1a13:	48 89 c7             	mov    %rax,%rdi
    1a16:	e8 75 f8 ff ff       	callq  1290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>
    1a1b:	84 db                	test   %bl,%bl
    1a1d:	74 0f                	je     1a2e <_Z10firstStagev+0x235>
    1a1f:	48 8d 85 70 ff ff ff 	lea    -0x90(%rbp),%rax
    1a26:	48 89 c7             	mov    %rax,%rdi
    1a29:	e8 62 f8 ff ff       	callq  1290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>
    1a2e:	45 84 f6             	test   %r14b,%r14b
    1a31:	74 6d                	je     1aa0 <_Z10firstStagev+0x2a7>
    1a33:	48 8d 35 1c 20 00 00 	lea    0x201c(%rip),%rsi        # 3a56 <_ZStL19piecewise_construct+0x9e>
    1a3a:	48 8d 3d 3f 38 20 00 	lea    0x20383f(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    1a41:	e8 ba f8 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1a46:	48 89 c2             	mov    %rax,%rdx
    1a49:	48 8b 05 80 35 20 00 	mov    0x203580(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1a50:	48 89 c6             	mov    %rax,%rsi
    1a53:	48 89 d7             	mov    %rdx,%rdi
    1a56:	e8 b5 f8 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    1a5b:	e8 ea fa ff ff       	callq  154a <_Z11currentTimev>
    1a60:	48 8d 35 fc 1f 00 00 	lea    0x1ffc(%rip),%rsi        # 3a63 <_ZStL19piecewise_construct+0xab>
    1a67:	48 8d 3d d2 35 20 00 	lea    0x2035d2(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    1a6e:	e8 8d f8 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1a73:	48 89 c2             	mov    %rax,%rdx
    1a76:	8b 85 2c ff ff ff    	mov    -0xd4(%rbp),%eax
    1a7c:	89 c6                	mov    %eax,%esi
    1a7e:	48 89 d7             	mov    %rdx,%rdi
    1a81:	e8 5a f9 ff ff       	callq  13e0 <_ZNSolsEi@plt>
    1a86:	48 89 c2             	mov    %rax,%rdx
    1a89:	48 8b 05 40 35 20 00 	mov    0x203540(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1a90:	48 89 c6             	mov    %rax,%rsi
    1a93:	48 89 d7             	mov    %rdx,%rdi
    1a96:	e8 75 f8 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    1a9b:	e8 13 fb ff ff       	callq  15b3 <_Z8gameOverv>
    1aa0:	48 8d 35 c7 1f 00 00 	lea    0x1fc7(%rip),%rsi        # 3a6e <_ZStL19piecewise_construct+0xb6>
    1aa7:	48 8d 3d d2 37 20 00 	lea    0x2037d2(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    1aae:	e8 4d f8 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1ab3:	48 89 c2             	mov    %rax,%rdx
    1ab6:	48 8b 05 13 35 20 00 	mov    0x203513(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1abd:	48 89 c6             	mov    %rax,%rsi
    1ac0:	48 89 d7             	mov    %rdx,%rdi
    1ac3:	e8 48 f8 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    1ac8:	e8 7d fa ff ff       	callq  154a <_Z11currentTimev>
    1acd:	48 8d 35 ae 1f 00 00 	lea    0x1fae(%rip),%rsi        # 3a82 <_ZStL19piecewise_construct+0xca>
    1ad4:	48 8d 3d 65 35 20 00 	lea    0x203565(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    1adb:	e8 20 f8 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1ae0:	48 89 c2             	mov    %rax,%rdx
    1ae3:	48 8b 05 e6 34 20 00 	mov    0x2034e6(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1aea:	48 89 c6             	mov    %rax,%rsi
    1aed:	48 89 d7             	mov    %rdx,%rdi
    1af0:	e8 1b f8 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    1af5:	e8 50 fa ff ff       	callq  154a <_Z11currentTimev>
    1afa:	48 8d 35 62 1f 00 00 	lea    0x1f62(%rip),%rsi        # 3a63 <_ZStL19piecewise_construct+0xab>
    1b01:	48 8d 3d 38 35 20 00 	lea    0x203538(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    1b08:	e8 f3 f7 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1b0d:	48 89 c2             	mov    %rax,%rdx
    1b10:	8b 85 2c ff ff ff    	mov    -0xd4(%rbp),%eax
    1b16:	89 c6                	mov    %eax,%esi
    1b18:	48 89 d7             	mov    %rdx,%rdi
    1b1b:	e8 c0 f8 ff ff       	callq  13e0 <_ZNSolsEi@plt>
    1b20:	48 89 c2             	mov    %rax,%rdx
    1b23:	48 8b 05 a6 34 20 00 	mov    0x2034a6(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1b2a:	48 89 c6             	mov    %rax,%rsi
    1b2d:	48 89 d7             	mov    %rdx,%rdi
    1b30:	e8 db f7 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    1b35:	8b 85 2c ff ff ff    	mov    -0xd4(%rbp),%eax
    1b3b:	89 05 d7 6d 2c 00    	mov    %eax,0x2c6dd7(%rip)        # 2c8918 <N>
    1b41:	48 8d 85 50 ff ff ff 	lea    -0xb0(%rbp),%rax
    1b48:	48 89 c7             	mov    %rax,%rdi
    1b4b:	e8 40 f7 ff ff       	callq  1290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>
    1b50:	48 8d 85 30 ff ff ff 	lea    -0xd0(%rbp),%rax
    1b57:	48 89 c7             	mov    %rax,%rdi
    1b5a:	e8 31 f7 ff ff       	callq  1290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>
    1b5f:	90                   	nop
    1b60:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    1b64:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    1b6b:	00 00 
    1b6d:	0f 84 9e 00 00 00    	je     1c11 <_Z10firstStagev+0x418>
    1b73:	e9 94 00 00 00       	jmpq   1c0c <_Z10firstStagev+0x413>
    1b78:	48 89 c3             	mov    %rax,%rbx
    1b7b:	48 8d 85 2b ff ff ff 	lea    -0xd5(%rbp),%rax
    1b82:	48 89 c7             	mov    %rax,%rdi
    1b85:	e8 a6 f7 ff ff       	callq  1330 <_ZNSaIcED1Ev@plt>
    1b8a:	eb 66                	jmp    1bf2 <_Z10firstStagev+0x3f9>
    1b8c:	48 89 c3             	mov    %rax,%rbx
    1b8f:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
    1b93:	48 89 c7             	mov    %rax,%rdi
    1b96:	e8 f5 f6 ff ff       	callq  1290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>
    1b9b:	eb 46                	jmp    1be3 <_Z10firstStagev+0x3ea>
    1b9d:	49 89 c6             	mov    %rax,%r14
    1ba0:	45 84 ed             	test   %r13b,%r13b
    1ba3:	74 0c                	je     1bb1 <_Z10firstStagev+0x3b8>
    1ba5:	48 8d 45 90          	lea    -0x70(%rbp),%rax
    1ba9:	48 89 c7             	mov    %rax,%rdi
    1bac:	e8 df f6 ff ff       	callq  1290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>
    1bb1:	4d 89 f5             	mov    %r14,%r13
    1bb4:	45 84 e4             	test   %r12b,%r12b
    1bb7:	74 0c                	je     1bc5 <_Z10firstStagev+0x3cc>
    1bb9:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
    1bbd:	48 89 c7             	mov    %rax,%rdi
    1bc0:	e8 cb f6 ff ff       	callq  1290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>
    1bc5:	4d 89 ec             	mov    %r13,%r12
    1bc8:	84 db                	test   %bl,%bl
    1bca:	74 0f                	je     1bdb <_Z10firstStagev+0x3e2>
    1bcc:	48 8d 85 70 ff ff ff 	lea    -0x90(%rbp),%rax
    1bd3:	48 89 c7             	mov    %rax,%rdi
    1bd6:	e8 b5 f6 ff ff       	callq  1290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>
    1bdb:	4c 89 e3             	mov    %r12,%rbx
    1bde:	eb 03                	jmp    1be3 <_Z10firstStagev+0x3ea>
    1be0:	48 89 c3             	mov    %rax,%rbx
    1be3:	48 8d 85 50 ff ff ff 	lea    -0xb0(%rbp),%rax
    1bea:	48 89 c7             	mov    %rax,%rdi
    1bed:	e8 9e f6 ff ff       	callq  1290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>
    1bf2:	48 8d 85 30 ff ff ff 	lea    -0xd0(%rbp),%rax
    1bf9:	48 89 c7             	mov    %rax,%rdi
    1bfc:	e8 8f f6 ff ff       	callq  1290 <_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@plt>
    1c01:	48 89 d8             	mov    %rbx,%rax
    1c04:	48 89 c7             	mov    %rax,%rdi
    1c07:	e8 e4 f7 ff ff       	callq  13f0 <_Unwind_Resume@plt>
    1c0c:	e8 2f f7 ff ff       	callq  1340 <__stack_chk_fail@plt>
    1c11:	48 81 c4 c0 00 00 00 	add    $0xc0,%rsp
    1c18:	5b                   	pop    %rbx
    1c19:	41 5c                	pop    %r12
    1c1b:	41 5d                	pop    %r13
    1c1d:	41 5e                	pop    %r14
    1c1f:	5d                   	pop    %rbp
    1c20:	c3                   	retq   

0000000000001c21 <_Z9initTablev>:
    1c21:	55                   	push   %rbp
    1c22:	48 89 e5             	mov    %rsp,%rbp
    1c25:	c7 45 f8 02 00 00 00 	movl   $0x2,-0x8(%rbp)
    1c2c:	8b 05 e6 6c 2c 00    	mov    0x2c6ce6(%rip),%eax        # 2c8918 <N>
    1c32:	39 45 f8             	cmp    %eax,-0x8(%rbp)
    1c35:	0f 8f ed 00 00 00    	jg     1d28 <_Z9initTablev+0x107>
    1c3b:	8b 45 f8             	mov    -0x8(%rbp),%eax
    1c3e:	48 98                	cltq   
    1c40:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    1c47:	00 
    1c48:	48 8d 05 b1 44 23 00 	lea    0x2344b1(%rip),%rax        # 236100 <vis>
    1c4f:	8b 04 02             	mov    (%rdx,%rax,1),%eax
    1c52:	85 c0                	test   %eax,%eax
    1c54:	75 2c                	jne    1c82 <_Z9initTablev+0x61>
    1c56:	8b 05 b8 6c 2c 00    	mov    0x2c6cb8(%rip),%eax        # 2c8914 <cnt>
    1c5c:	83 c0 01             	add    $0x1,%eax
    1c5f:	89 05 af 6c 2c 00    	mov    %eax,0x2c6caf(%rip)        # 2c8914 <cnt>
    1c65:	8b 05 a9 6c 2c 00    	mov    0x2c6ca9(%rip),%eax        # 2c8914 <cnt>
    1c6b:	48 98                	cltq   
    1c6d:	48 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%rcx
    1c74:	00 
    1c75:	48 8d 05 24 37 20 00 	lea    0x203724(%rip),%rax        # 2053a0 <pri>
    1c7c:	8b 55 f8             	mov    -0x8(%rbp),%edx
    1c7f:	89 14 01             	mov    %edx,(%rcx,%rax,1)
    1c82:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%rbp)
    1c89:	8b 05 85 6c 2c 00    	mov    0x2c6c85(%rip),%eax        # 2c8914 <cnt>
    1c8f:	39 45 fc             	cmp    %eax,-0x4(%rbp)
    1c92:	0f 8f 87 00 00 00    	jg     1d1f <_Z9initTablev+0xfe>
    1c98:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1c9b:	48 98                	cltq   
    1c9d:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    1ca4:	00 
    1ca5:	48 8d 05 f4 36 20 00 	lea    0x2036f4(%rip),%rax        # 2053a0 <pri>
    1cac:	8b 04 02             	mov    (%rdx,%rax,1),%eax
    1caf:	0f af 45 f8          	imul   -0x8(%rbp),%eax
    1cb3:	89 c2                	mov    %eax,%edx
    1cb5:	8b 05 5d 6c 2c 00    	mov    0x2c6c5d(%rip),%eax        # 2c8918 <N>
    1cbb:	39 c2                	cmp    %eax,%edx
    1cbd:	7f 60                	jg     1d1f <_Z9initTablev+0xfe>
    1cbf:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1cc2:	48 98                	cltq   
    1cc4:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    1ccb:	00 
    1ccc:	48 8d 05 cd 36 20 00 	lea    0x2036cd(%rip),%rax        # 2053a0 <pri>
    1cd3:	8b 04 02             	mov    (%rdx,%rax,1),%eax
    1cd6:	0f af 45 f8          	imul   -0x8(%rbp),%eax
    1cda:	48 98                	cltq   
    1cdc:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    1ce3:	00 
    1ce4:	48 8d 05 15 44 23 00 	lea    0x234415(%rip),%rax        # 236100 <vis>
    1ceb:	c7 04 02 01 00 00 00 	movl   $0x1,(%rdx,%rax,1)
    1cf2:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1cf5:	48 98                	cltq   
    1cf7:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    1cfe:	00 
    1cff:	48 8d 05 9a 36 20 00 	lea    0x20369a(%rip),%rax        # 2053a0 <pri>
    1d06:	8b 0c 02             	mov    (%rdx,%rax,1),%ecx
    1d09:	8b 45 f8             	mov    -0x8(%rbp),%eax
    1d0c:	99                   	cltd   
    1d0d:	f7 f9                	idiv   %ecx
    1d0f:	89 d0                	mov    %edx,%eax
    1d11:	85 c0                	test   %eax,%eax
    1d13:	74 09                	je     1d1e <_Z9initTablev+0xfd>
    1d15:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    1d19:	e9 6b ff ff ff       	jmpq   1c89 <_Z9initTablev+0x68>
    1d1e:	90                   	nop
    1d1f:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    1d23:	e9 04 ff ff ff       	jmpq   1c2c <_Z9initTablev+0xb>
    1d28:	90                   	nop
    1d29:	5d                   	pop    %rbp
    1d2a:	c3                   	retq   

0000000000001d2b <_Z5checki>:
    1d2b:	55                   	push   %rbp
    1d2c:	48 89 e5             	mov    %rsp,%rbp
    1d2f:	48 83 ec 20          	sub    $0x20,%rsp
    1d33:	89 7d ec             	mov    %edi,-0x14(%rbp)
    1d36:	ba 54 0d 03 00       	mov    $0x30d54,%edx
    1d3b:	be 00 00 00 00       	mov    $0x0,%esi
    1d40:	48 8d 3d 19 51 26 00 	lea    0x265119(%rip),%rdi        # 266e60 <used>
    1d47:	e8 14 f5 ff ff       	callq  1260 <memset@plt>
    1d4c:	e8 f9 f7 ff ff       	callq  154a <_Z11currentTimev>
    1d51:	48 8d 35 3e 1d 00 00 	lea    0x1d3e(%rip),%rsi        # 3a96 <_ZStL19piecewise_construct+0xde>
    1d58:	48 8d 3d e1 32 20 00 	lea    0x2032e1(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    1d5f:	e8 9c f5 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1d64:	48 89 c2             	mov    %rax,%rdx
    1d67:	8b 45 ec             	mov    -0x14(%rbp),%eax
    1d6a:	89 c6                	mov    %eax,%esi
    1d6c:	48 89 d7             	mov    %rdx,%rdi
    1d6f:	e8 6c f6 ff ff       	callq  13e0 <_ZNSolsEi@plt>
    1d74:	48 89 c2             	mov    %rax,%rdx
    1d77:	48 8b 05 52 32 20 00 	mov    0x203252(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1d7e:	48 89 c6             	mov    %rax,%rsi
    1d81:	48 89 d7             	mov    %rdx,%rdi
    1d84:	e8 87 f5 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    1d89:	ba 54 0d 03 00       	mov    $0x30d54,%edx
    1d8e:	be 00 00 00 00       	mov    $0x0,%esi
    1d93:	48 8d 3d 26 5e 29 00 	lea    0x295e26(%rip),%rdi        # 297bc0 <tmp>
    1d9a:	e8 c1 f4 ff ff       	callq  1260 <memset@plt>
    1d9f:	8b 45 ec             	mov    -0x14(%rbp),%eax
    1da2:	48 98                	cltq   
    1da4:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    1dab:	00 
    1dac:	48 8d 05 0d 5e 29 00 	lea    0x295e0d(%rip),%rax        # 297bc0 <tmp>
    1db3:	c7 04 02 01 00 00 00 	movl   $0x1,(%rdx,%rax,1)
    1dba:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%rbp)
    1dc1:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%rbp)
    1dc8:	e8 7d f7 ff ff       	callq  154a <_Z11currentTimev>
    1dcd:	48 8d 35 d1 1c 00 00 	lea    0x1cd1(%rip),%rsi        # 3aa5 <_ZStL19piecewise_construct+0xed>
    1dd4:	48 8d 3d 65 32 20 00 	lea    0x203265(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    1ddb:	e8 20 f5 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1de0:	48 89 c2             	mov    %rax,%rdx
    1de3:	8b 45 f4             	mov    -0xc(%rbp),%eax
    1de6:	89 c6                	mov    %eax,%esi
    1de8:	48 89 d7             	mov    %rdx,%rdi
    1deb:	e8 f0 f5 ff ff       	callq  13e0 <_ZNSolsEi@plt>
    1df0:	48 8d 35 b9 1c 00 00 	lea    0x1cb9(%rip),%rsi        # 3ab0 <_ZStL19piecewise_construct+0xf8>
    1df7:	48 89 c7             	mov    %rax,%rdi
    1dfa:	e8 01 f5 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1dff:	48 8d 05 5a 50 26 00 	lea    0x26505a(%rip),%rax        # 266e60 <used>
    1e06:	48 8d 0d b3 5d 29 00 	lea    0x295db3(%rip),%rcx        # 297bc0 <tmp>
    1e0d:	ba 54 0d 03 00       	mov    $0x30d54,%edx
    1e12:	48 89 ce             	mov    %rcx,%rsi
    1e15:	48 89 c7             	mov    %rax,%rdi
    1e18:	e8 93 f4 ff ff       	callq  12b0 <memcpy@plt>
    1e1d:	c7 45 f8 01 00 00 00 	movl   $0x1,-0x8(%rbp)
    1e24:	8b 05 ee 6a 2c 00    	mov    0x2c6aee(%rip),%eax        # 2c8918 <N>
    1e2a:	39 45 f8             	cmp    %eax,-0x8(%rbp)
    1e2d:	0f 8f c9 00 00 00    	jg     1efc <_Z5checki+0x1d1>
    1e33:	8b 45 f8             	mov    -0x8(%rbp),%eax
    1e36:	48 98                	cltq   
    1e38:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    1e3f:	00 
    1e40:	48 8d 05 19 50 26 00 	lea    0x265019(%rip),%rax        # 266e60 <used>
    1e47:	8b 04 02             	mov    (%rdx,%rax,1),%eax
    1e4a:	85 c0                	test   %eax,%eax
    1e4c:	0f 84 a1 00 00 00    	je     1ef3 <_Z5checki+0x1c8>
    1e52:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%rbp)
    1e59:	8b 05 b9 6a 2c 00    	mov    0x2c6ab9(%rip),%eax        # 2c8918 <N>
    1e5f:	39 45 fc             	cmp    %eax,-0x4(%rbp)
    1e62:	0f 8f 8b 00 00 00    	jg     1ef3 <_Z5checki+0x1c8>
    1e68:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1e6b:	48 98                	cltq   
    1e6d:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    1e74:	00 
    1e75:	48 8d 05 44 5d 29 00 	lea    0x295d44(%rip),%rax        # 297bc0 <tmp>
    1e7c:	8b 04 02             	mov    (%rdx,%rax,1),%eax
    1e7f:	85 c0                	test   %eax,%eax
    1e81:	75 21                	jne    1ea4 <_Z5checki+0x179>
    1e83:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1e86:	8d 50 01             	lea    0x1(%rax),%edx
    1e89:	8b 45 f8             	mov    -0x8(%rbp),%eax
    1e8c:	83 c0 01             	add    $0x1,%eax
    1e8f:	89 d6                	mov    %edx,%esi
    1e91:	89 c7                	mov    %eax,%edi
    1e93:	e8 ed f6 ff ff       	callq  1585 <_Z3gcdii>
    1e98:	83 f8 01             	cmp    $0x1,%eax
    1e9b:	75 07                	jne    1ea4 <_Z5checki+0x179>
    1e9d:	b8 01 00 00 00       	mov    $0x1,%eax
    1ea2:	eb 05                	jmp    1ea9 <_Z5checki+0x17e>
    1ea4:	b8 00 00 00 00       	mov    $0x0,%eax
    1ea9:	84 c0                	test   %al,%al
    1eab:	74 3d                	je     1eea <_Z5checki+0x1bf>
    1ead:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1eb0:	48 98                	cltq   
    1eb2:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    1eb9:	00 
    1eba:	48 8d 05 ff 5c 29 00 	lea    0x295cff(%rip),%rax        # 297bc0 <tmp>
    1ec1:	c7 04 02 01 00 00 00 	movl   $0x1,(%rdx,%rax,1)
    1ec8:	83 45 f0 01          	addl   $0x1,-0x10(%rbp)
    1ecc:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1ecf:	89 c6                	mov    %eax,%esi
    1ed1:	48 8d 3d 68 31 20 00 	lea    0x203168(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    1ed8:	e8 03 f5 ff ff       	callq  13e0 <_ZNSolsEi@plt>
    1edd:	be 20 00 00 00       	mov    $0x20,%esi
    1ee2:	48 89 c7             	mov    %rax,%rdi
    1ee5:	e8 66 f4 ff ff       	callq  1350 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@plt>
    1eea:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    1eee:	e9 66 ff ff ff       	jmpq   1e59 <_Z5checki+0x12e>
    1ef3:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    1ef7:	e9 28 ff ff ff       	jmpq   1e24 <_Z5checki+0xf9>
    1efc:	48 8b 05 cd 30 20 00 	mov    0x2030cd(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1f03:	48 89 c6             	mov    %rax,%rsi
    1f06:	48 8d 3d 33 31 20 00 	lea    0x203133(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    1f0d:	e8 fe f3 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    1f12:	8b 05 00 6a 2c 00    	mov    0x2c6a00(%rip),%eax        # 2c8918 <N>
    1f18:	39 45 f0             	cmp    %eax,-0x10(%rbp)
    1f1b:	74 09                	je     1f26 <_Z5checki+0x1fb>
    1f1d:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
    1f21:	e9 a2 fe ff ff       	jmpq   1dc8 <_Z5checki+0x9d>
    1f26:	90                   	nop
    1f27:	83 7d f4 01          	cmpl   $0x1,-0xc(%rbp)
    1f2b:	0f 94 c0             	sete   %al
    1f2e:	c9                   	leaveq 
    1f2f:	c3                   	retq   

0000000000001f30 <_Z11secondStagev>:
    1f30:	55                   	push   %rbp
    1f31:	48 89 e5             	mov    %rsp,%rbp
    1f34:	48 83 ec 20          	sub    $0x20,%rsp
    1f38:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    1f3f:	00 00 
    1f41:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1f45:	31 c0                	xor    %eax,%eax
    1f47:	48 8d 35 89 1b 00 00 	lea    0x1b89(%rip),%rsi        # 3ad7 <_ZStL19piecewise_construct+0x11f>
    1f4e:	48 8d 3d 2b 33 20 00 	lea    0x20332b(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    1f55:	e8 a6 f3 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1f5a:	48 89 c2             	mov    %rax,%rdx
    1f5d:	48 8b 05 6c 30 20 00 	mov    0x20306c(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1f64:	48 89 c6             	mov    %rax,%rsi
    1f67:	48 89 d7             	mov    %rdx,%rdi
    1f6a:	e8 a1 f3 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    1f6f:	48 8d 35 82 1b 00 00 	lea    0x1b82(%rip),%rsi        # 3af8 <_ZStL19piecewise_construct+0x140>
    1f76:	48 8d 3d 03 33 20 00 	lea    0x203303(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    1f7d:	e8 7e f3 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1f82:	48 89 c2             	mov    %rax,%rdx
    1f85:	48 8b 05 44 30 20 00 	mov    0x203044(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1f8c:	48 89 c6             	mov    %rax,%rsi
    1f8f:	48 89 d7             	mov    %rdx,%rdi
    1f92:	e8 79 f3 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    1f97:	48 8d 35 7e 1b 00 00 	lea    0x1b7e(%rip),%rsi        # 3b1c <_ZStL19piecewise_construct+0x164>
    1f9e:	48 8d 3d db 32 20 00 	lea    0x2032db(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    1fa5:	e8 56 f3 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1faa:	48 89 c2             	mov    %rax,%rdx
    1fad:	48 8b 05 1c 30 20 00 	mov    0x20301c(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1fb4:	48 89 c6             	mov    %rax,%rsi
    1fb7:	48 89 d7             	mov    %rdx,%rdi
    1fba:	e8 51 f3 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    1fbf:	48 8d 35 6a 1b 00 00 	lea    0x1b6a(%rip),%rsi        # 3b30 <_ZStL19piecewise_construct+0x178>
    1fc6:	48 8d 3d b3 32 20 00 	lea    0x2032b3(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    1fcd:	e8 2e f3 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1fd2:	48 89 c2             	mov    %rax,%rdx
    1fd5:	48 8b 05 f4 2f 20 00 	mov    0x202ff4(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1fdc:	48 89 c6             	mov    %rax,%rsi
    1fdf:	48 89 d7             	mov    %rdx,%rdi
    1fe2:	e8 29 f3 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    1fe7:	48 8d 35 7a 1b 00 00 	lea    0x1b7a(%rip),%rsi        # 3b68 <_ZStL19piecewise_construct+0x1b0>
    1fee:	48 8d 3d 8b 32 20 00 	lea    0x20328b(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    1ff5:	e8 06 f3 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1ffa:	48 89 c2             	mov    %rax,%rdx
    1ffd:	48 8b 05 cc 2f 20 00 	mov    0x202fcc(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    2004:	48 89 c6             	mov    %rax,%rsi
    2007:	48 89 d7             	mov    %rdx,%rdi
    200a:	e8 01 f3 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    200f:	48 8d 35 a2 1b 00 00 	lea    0x1ba2(%rip),%rsi        # 3bb8 <_ZStL19piecewise_construct+0x200>
    2016:	48 8d 3d 63 32 20 00 	lea    0x203263(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    201d:	e8 de f2 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    2022:	48 89 c2             	mov    %rax,%rdx
    2025:	48 8b 05 a4 2f 20 00 	mov    0x202fa4(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    202c:	48 89 c6             	mov    %rax,%rsi
    202f:	48 89 d7             	mov    %rdx,%rdi
    2032:	e8 d9 f2 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    2037:	48 8d 35 b2 1b 00 00 	lea    0x1bb2(%rip),%rsi        # 3bf0 <_ZStL19piecewise_construct+0x238>
    203e:	48 8d 3d 3b 32 20 00 	lea    0x20323b(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    2045:	e8 b6 f2 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    204a:	48 89 c2             	mov    %rax,%rdx
    204d:	48 8b 05 7c 2f 20 00 	mov    0x202f7c(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    2054:	48 89 c6             	mov    %rax,%rsi
    2057:	48 89 d7             	mov    %rdx,%rdi
    205a:	e8 b1 f2 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    205f:	48 8d 35 b1 1b 00 00 	lea    0x1bb1(%rip),%rsi        # 3c17 <_ZStL19piecewise_construct+0x25f>
    2066:	48 8d 3d 13 32 20 00 	lea    0x203213(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    206d:	e8 8e f2 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    2072:	48 89 c2             	mov    %rax,%rdx
    2075:	48 8b 05 54 2f 20 00 	mov    0x202f54(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    207c:	48 89 c6             	mov    %rax,%rsi
    207f:	48 89 d7             	mov    %rdx,%rdi
    2082:	e8 89 f2 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    2087:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%rbp)
    208e:	c6 45 eb 01          	movb   $0x1,-0x15(%rbp)
    2092:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%rbp)
    2099:	81 7d f4 2f 02 00 00 	cmpl   $0x22f,-0xc(%rbp)
    20a0:	0f 8f 75 01 00 00    	jg     221b <_Z11secondStagev+0x2eb>
    20a6:	48 8d 35 7b 1b 00 00 	lea    0x1b7b(%rip),%rsi        # 3c28 <_ZStL19piecewise_construct+0x270>
    20ad:	48 8d 3d cc 31 20 00 	lea    0x2031cc(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    20b4:	e8 47 f2 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    20b9:	48 8d 45 ec          	lea    -0x14(%rbp),%rax
    20bd:	48 89 c6             	mov    %rax,%rsi
    20c0:	48 8d 3d 99 30 20 00 	lea    0x203099(%rip),%rdi        # 205160 <_ZSt3cin@@GLIBCXX_3.4>
    20c7:	e8 b4 f1 ff ff       	callq  1280 <_ZNSirsERi@plt>
    20cc:	8b 45 ec             	mov    -0x14(%rbp),%eax
    20cf:	89 c7                	mov    %eax,%edi
    20d1:	e8 55 fc ff ff       	callq  1d2b <_Z5checki>
    20d6:	84 c0                	test   %al,%al
    20d8:	0f 84 07 01 00 00    	je     21e5 <_Z11secondStagev+0x2b5>
    20de:	80 7d eb 00          	cmpb   $0x0,-0x15(%rbp)
    20e2:	74 0f                	je     20f3 <_Z11secondStagev+0x1c3>
    20e4:	c6 45 eb 00          	movb   $0x0,-0x15(%rbp)
    20e8:	8b 45 ec             	mov    -0x14(%rbp),%eax
    20eb:	89 45 f0             	mov    %eax,-0x10(%rbp)
    20ee:	e9 ad 00 00 00       	jmpq   21a0 <_Z11secondStagev+0x270>
    20f3:	8b 45 ec             	mov    -0x14(%rbp),%eax
    20f6:	39 45 f0             	cmp    %eax,-0x10(%rbp)
    20f9:	7e 5c                	jle    2157 <_Z11secondStagev+0x227>
    20fb:	48 8d 35 56 1b 00 00 	lea    0x1b56(%rip),%rsi        # 3c58 <_ZStL19piecewise_construct+0x2a0>
    2102:	48 8d 3d 77 31 20 00 	lea    0x203177(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    2109:	e8 f2 f1 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    210e:	48 89 c2             	mov    %rax,%rdx
    2111:	48 8b 05 b8 2e 20 00 	mov    0x202eb8(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    2118:	48 89 c6             	mov    %rax,%rsi
    211b:	48 89 d7             	mov    %rdx,%rdi
    211e:	e8 ed f1 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    2123:	e8 22 f4 ff ff       	callq  154a <_Z11currentTimev>
    2128:	48 8d 35 4a 1b 00 00 	lea    0x1b4a(%rip),%rsi        # 3c79 <_ZStL19piecewise_construct+0x2c1>
    212f:	48 8d 3d 0a 2f 20 00 	lea    0x202f0a(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    2136:	e8 c5 f1 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    213b:	48 89 c2             	mov    %rax,%rdx
    213e:	48 8b 05 8b 2e 20 00 	mov    0x202e8b(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    2145:	48 89 c6             	mov    %rax,%rsi
    2148:	48 89 d7             	mov    %rdx,%rdi
    214b:	e8 c0 f1 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    2150:	e8 5e f4 ff ff       	callq  15b3 <_Z8gameOverv>
    2155:	eb 49                	jmp    21a0 <_Z11secondStagev+0x270>
    2157:	8b 45 ec             	mov    -0x14(%rbp),%eax
    215a:	48 98                	cltq   
    215c:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    2163:	00 
    2164:	48 8d 05 95 3f 23 00 	lea    0x233f95(%rip),%rax        # 236100 <vis>
    216b:	8b 04 02             	mov    (%rdx,%rax,1),%eax
    216e:	83 f8 ff             	cmp    $0xffffffff,%eax
    2171:	75 2d                	jne    21a0 <_Z11secondStagev+0x270>
    2173:	48 8d 35 0f 1b 00 00 	lea    0x1b0f(%rip),%rsi        # 3c89 <_ZStL19piecewise_construct+0x2d1>
    217a:	48 8d 3d ff 30 20 00 	lea    0x2030ff(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    2181:	e8 7a f1 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    2186:	48 89 c2             	mov    %rax,%rdx
    2189:	48 8b 05 40 2e 20 00 	mov    0x202e40(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    2190:	48 89 c6             	mov    %rax,%rsi
    2193:	48 89 d7             	mov    %rdx,%rdi
    2196:	e8 75 f1 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    219b:	e8 13 f4 ff ff       	callq  15b3 <_Z8gameOverv>
    21a0:	48 8d 35 f4 1a 00 00 	lea    0x1af4(%rip),%rsi        # 3c9b <_ZStL19piecewise_construct+0x2e3>
    21a7:	48 8d 3d d2 30 20 00 	lea    0x2030d2(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    21ae:	e8 4d f1 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    21b3:	48 89 c2             	mov    %rax,%rdx
    21b6:	48 8b 05 13 2e 20 00 	mov    0x202e13(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    21bd:	48 89 c6             	mov    %rax,%rsi
    21c0:	48 89 d7             	mov    %rdx,%rdi
    21c3:	e8 48 f1 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    21c8:	8b 45 ec             	mov    -0x14(%rbp),%eax
    21cb:	48 98                	cltq   
    21cd:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    21d4:	00 
    21d5:	48 8d 05 24 3f 23 00 	lea    0x233f24(%rip),%rax        # 236100 <vis>
    21dc:	c7 04 02 ff ff ff ff 	movl   $0xffffffff,(%rdx,%rax,1)
    21e3:	eb 2d                	jmp    2212 <_Z11secondStagev+0x2e2>
    21e5:	48 8d 35 b8 1a 00 00 	lea    0x1ab8(%rip),%rsi        # 3ca4 <_ZStL19piecewise_construct+0x2ec>
    21ec:	48 8d 3d 8d 30 20 00 	lea    0x20308d(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    21f3:	e8 08 f1 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    21f8:	48 89 c2             	mov    %rax,%rdx
    21fb:	48 8b 05 ce 2d 20 00 	mov    0x202dce(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    2202:	48 89 c6             	mov    %rax,%rsi
    2205:	48 89 d7             	mov    %rdx,%rdi
    2208:	e8 03 f1 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    220d:	e8 a1 f3 ff ff       	callq  15b3 <_Z8gameOverv>
    2212:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
    2216:	e9 7e fe ff ff       	jmpq   2099 <_Z11secondStagev+0x169>
    221b:	48 8d 35 90 1a 00 00 	lea    0x1a90(%rip),%rsi        # 3cb2 <_ZStL19piecewise_construct+0x2fa>
    2222:	48 8d 3d 57 30 20 00 	lea    0x203057(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    2229:	e8 d2 f0 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    222e:	48 89 c2             	mov    %rax,%rdx
    2231:	48 8b 05 98 2d 20 00 	mov    0x202d98(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    2238:	48 89 c6             	mov    %rax,%rsi
    223b:	48 89 d7             	mov    %rdx,%rdi
    223e:	e8 cd f0 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    2243:	90                   	nop
    2244:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2248:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    224f:	00 00 
    2251:	74 05                	je     2258 <_Z11secondStagev+0x328>
    2253:	e8 e8 f0 ff ff       	callq  1340 <__stack_chk_fail@plt>
    2258:	c9                   	leaveq 
    2259:	c3                   	retq   

000000000000225a <_Z7gameWinv>:
    225a:	55                   	push   %rbp
    225b:	48 89 e5             	mov    %rsp,%rbp
    225e:	48 8d 35 62 1a 00 00 	lea    0x1a62(%rip),%rsi        # 3cc7 <_ZStL19piecewise_construct+0x30f>
    2265:	48 8d 3d 14 30 20 00 	lea    0x203014(%rip),%rdi        # 205280 <_ZSt4cerr@@GLIBCXX_3.4>
    226c:	e8 8f f0 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    2271:	48 89 c2             	mov    %rax,%rdx
    2274:	48 8b 05 55 2d 20 00 	mov    0x202d55(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    227b:	48 89 c6             	mov    %rax,%rsi
    227e:	48 89 d7             	mov    %rdx,%rdi
    2281:	e8 8a f0 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    2286:	e8 bf f2 ff ff       	callq  154a <_Z11currentTimev>
    228b:	48 8d 35 3e 1a 00 00 	lea    0x1a3e(%rip),%rsi        # 3cd0 <_ZStL19piecewise_construct+0x318>
    2292:	48 8d 3d a7 2d 20 00 	lea    0x202da7(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    2299:	e8 62 f0 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    229e:	48 89 c2             	mov    %rax,%rdx
    22a1:	48 8b 05 28 2d 20 00 	mov    0x202d28(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    22a8:	48 89 c6             	mov    %rax,%rsi
    22ab:	48 89 d7             	mov    %rdx,%rdi
    22ae:	e8 5d f0 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    22b3:	e8 92 f2 ff ff       	callq  154a <_Z11currentTimev>
    22b8:	48 8d 35 31 1a 00 00 	lea    0x1a31(%rip),%rsi        # 3cf0 <_ZStL19piecewise_construct+0x338>
    22bf:	48 8d 3d 7a 2d 20 00 	lea    0x202d7a(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    22c6:	e8 35 f0 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    22cb:	48 89 c2             	mov    %rax,%rdx
    22ce:	48 8b 05 fb 2c 20 00 	mov    0x202cfb(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    22d5:	48 89 c6             	mov    %rax,%rsi
    22d8:	48 89 d7             	mov    %rdx,%rdi
    22db:	e8 30 f0 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    22e0:	e8 65 f2 ff ff       	callq  154a <_Z11currentTimev>
    22e5:	48 8d 35 26 1a 00 00 	lea    0x1a26(%rip),%rsi        # 3d12 <_ZStL19piecewise_construct+0x35a>
    22ec:	48 8d 3d 4d 2d 20 00 	lea    0x202d4d(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    22f3:	e8 08 f0 ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    22f8:	48 89 c2             	mov    %rax,%rdx
    22fb:	48 8b 05 ce 2c 20 00 	mov    0x202cce(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    2302:	48 89 c6             	mov    %rax,%rsi
    2305:	48 89 d7             	mov    %rdx,%rdi
    2308:	e8 03 f0 ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    230d:	e8 38 f2 ff ff       	callq  154a <_Z11currentTimev>
    2312:	48 8d 35 17 1a 00 00 	lea    0x1a17(%rip),%rsi        # 3d30 <_ZStL19piecewise_construct+0x378>
    2319:	48 8d 3d 20 2d 20 00 	lea    0x202d20(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    2320:	e8 db ef ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    2325:	48 89 c2             	mov    %rax,%rdx
    2328:	48 8b 05 a1 2c 20 00 	mov    0x202ca1(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    232f:	48 89 c6             	mov    %rax,%rsi
    2332:	48 89 d7             	mov    %rdx,%rdi
    2335:	e8 d6 ef ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    233a:	e8 0b f2 ff ff       	callq  154a <_Z11currentTimev>
    233f:	48 8d 35 12 1a 00 00 	lea    0x1a12(%rip),%rsi        # 3d58 <_ZStL19piecewise_construct+0x3a0>
    2346:	48 8d 3d f3 2c 20 00 	lea    0x202cf3(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    234d:	e8 ae ef ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    2352:	48 89 c2             	mov    %rax,%rdx
    2355:	48 8b 05 74 2c 20 00 	mov    0x202c74(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    235c:	48 89 c6             	mov    %rax,%rsi
    235f:	48 89 d7             	mov    %rdx,%rdi
    2362:	e8 a9 ef ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    2367:	e8 de f1 ff ff       	callq  154a <_Z11currentTimev>
    236c:	48 8d 35 0d 1a 00 00 	lea    0x1a0d(%rip),%rsi        # 3d80 <_ZStL19piecewise_construct+0x3c8>
    2373:	48 8d 3d c6 2c 20 00 	lea    0x202cc6(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    237a:	e8 81 ef ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    237f:	48 89 c2             	mov    %rax,%rdx
    2382:	48 8b 05 47 2c 20 00 	mov    0x202c47(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    2389:	48 89 c6             	mov    %rax,%rsi
    238c:	48 89 d7             	mov    %rdx,%rdi
    238f:	e8 7c ef ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    2394:	e8 b1 f1 ff ff       	callq  154a <_Z11currentTimev>
    2399:	48 8d 35 0e 1a 00 00 	lea    0x1a0e(%rip),%rsi        # 3dae <_ZStL19piecewise_construct+0x3f6>
    23a0:	48 8d 3d 99 2c 20 00 	lea    0x202c99(%rip),%rdi        # 205040 <_ZSt4cout@@GLIBCXX_3.4>
    23a7:	e8 54 ef ff ff       	callq  1300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    23ac:	48 89 c2             	mov    %rax,%rdx
    23af:	48 8b 05 1a 2c 20 00 	mov    0x202c1a(%rip),%rax        # 204fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    23b6:	48 89 c6             	mov    %rax,%rsi
    23b9:	48 89 d7             	mov    %rdx,%rdi
    23bc:	e8 4f ef ff ff       	callq  1310 <_ZNSolsEPFRSoS_E@plt>
    23c1:	e8 ed f1 ff ff       	callq  15b3 <_Z8gameOverv>
    23c6:	90                   	nop
    23c7:	5d                   	pop    %rbp
    23c8:	c3                   	retq   

00000000000023c9 <main>:
    23c9:	55                   	push   %rbp
    23ca:	48 89 e5             	mov    %rsp,%rbp
    23cd:	e8 1c f2 ff ff       	callq  15ee <_Z9gameStartv>
    23d2:	e8 22 f4 ff ff       	callq  17f9 <_Z10firstStagev>
    23d7:	e8 45 f8 ff ff       	callq  1c21 <_Z9initTablev>
    23dc:	e8 4f fb ff ff       	callq  1f30 <_Z11secondStagev>
    23e1:	e8 74 fe ff ff       	callq  225a <_Z7gameWinv>
    23e6:	b8 00 00 00 00       	mov    $0x0,%eax
    23eb:	5d                   	pop    %rbp
    23ec:	c3                   	retq   

00000000000023ed <_Z41__static_initialization_and_destruction_0ii>:
    23ed:	55                   	push   %rbp
    23ee:	48 89 e5             	mov    %rsp,%rbp
    23f1:	48 83 ec 10          	sub    $0x10,%rsp
    23f5:	89 7d fc             	mov    %edi,-0x4(%rbp)
    23f8:	89 75 f8             	mov    %esi,-0x8(%rbp)
    23fb:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
    23ff:	75 32                	jne    2433 <_Z41__static_initialization_and_destruction_0ii+0x46>
    2401:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
    2408:	75 29                	jne    2433 <_Z41__static_initialization_and_destruction_0ii+0x46>
  extern wostream wclog;	/// Linked to standard error (buffered)
#endif
  //@}

  // For construction of filebuffers for cout, cin, cerr, clog et. al.
  static ios_base::Init __ioinit;
    240a:	48 8d 3d 0b 65 2c 00 	lea    0x2c650b(%rip),%rdi        # 2c891c <_ZStL8__ioinit>
    2411:	e8 aa ef ff ff       	callq  13c0 <_ZNSt8ios_base4InitC1Ev@plt>
    2416:	48 8d 15 eb 2b 20 00 	lea    0x202beb(%rip),%rdx        # 205008 <__dso_handle>
    241d:	48 8d 35 f8 64 2c 00 	lea    0x2c64f8(%rip),%rsi        # 2c891c <_ZStL8__ioinit>
    2424:	48 8b 05 cd 2b 20 00 	mov    0x202bcd(%rip),%rax        # 204ff8 <_ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4>
    242b:	48 89 c7             	mov    %rax,%rdi
    242e:	e8 9d ee ff ff       	callq  12d0 <__cxa_atexit@plt>
    2433:	90                   	nop
    2434:	c9                   	leaveq 
    2435:	c3                   	retq   

0000000000002436 <_GLOBAL__sub_I_pri>:
    2436:	55                   	push   %rbp
    2437:	48 89 e5             	mov    %rsp,%rbp
    243a:	be ff ff 00 00       	mov    $0xffff,%esi
    243f:	bf 01 00 00 00       	mov    $0x1,%edi
    2444:	e8 a4 ff ff ff       	callq  23ed <_Z41__static_initialization_and_destruction_0ii>
    2449:	5d                   	pop    %rbp
    244a:	c3                   	retq   

000000000000244b <_ZN9__gnu_cxx5__ops16__iter_less_iterEv>:
  };

  _GLIBCXX14_CONSTEXPR
  inline _Iter_less_iter
  __iter_less_iter()
  { return _Iter_less_iter(); }
    244b:	55                   	push   %rbp
    244c:	48 89 e5             	mov    %rsp,%rbp
    244f:	5d                   	pop    %rbp
    2450:	c3                   	retq   
    2451:	90                   	nop

0000000000002452 <_ZN9__gnu_cxx5__ops14_Iter_less_valC1ENS0_15_Iter_less_iterE>:
#else
    _Iter_less_val() { }
#endif

    explicit
    _Iter_less_val(_Iter_less_iter) { }
    2452:	55                   	push   %rbp
    2453:	48 89 e5             	mov    %rsp,%rbp
    2456:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    245a:	90                   	nop
    245b:	5d                   	pop    %rbp
    245c:	c3                   	retq   

000000000000245d <_ZN9__gnu_cxx5__ops15__val_comp_iterENS0_15_Iter_less_iterE>:
  __val_less_iter()
  { return _Val_less_iter(); }

  inline _Val_less_iter
  __val_comp_iter(_Iter_less_iter)
  { return _Val_less_iter(); }
    245d:	55                   	push   %rbp
    245e:	48 89 e5             	mov    %rsp,%rbp
    2461:	5d                   	pop    %rbp
    2462:	c3                   	retq   

0000000000002463 <_ZSt4__lgl>:
  __lg(unsigned __n)
  { return sizeof(int) * __CHAR_BIT__  - 1 - __builtin_clz(__n); }

  inline _GLIBCXX_CONSTEXPR long
  __lg(long __n)
  { return sizeof(long) * __CHAR_BIT__ - 1 - __builtin_clzl(__n); }
    2463:	55                   	push   %rbp
    2464:	48 89 e5             	mov    %rsp,%rbp
    2467:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    246b:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    246f:	48 0f bd c0          	bsr    %rax,%rax
    2473:	48 83 f0 3f          	xor    $0x3f,%rax
    2477:	48 98                	cltq   
    2479:	ba 3f 00 00 00       	mov    $0x3f,%edx
    247e:	48 29 c2             	sub    %rax,%rdx
    2481:	48 89 d0             	mov    %rdx,%rax
    2484:	5d                   	pop    %rbp
    2485:	c3                   	retq   

0000000000002486 <_ZNSt11char_traitsIcE7compareEPKcS2_m>:
	return (static_cast<unsigned char>(__c1)
		< static_cast<unsigned char>(__c2));
      }

      static _GLIBCXX17_CONSTEXPR int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
    2486:	55                   	push   %rbp
    2487:	48 89 e5             	mov    %rsp,%rbp
    248a:	48 83 ec 20          	sub    $0x20,%rsp
    248e:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    2492:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
    2496:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
	if (__builtin_constant_p(__n)
	    && __constant_char_array_p(__s1, __n)
	    && __constant_char_array_p(__s2, __n))
	  return __gnu_cxx::char_traits<char_type>::compare(__s1, __s2, __n);
#endif
	if (__n == 0)
    249a:	48 83 7d e8 00       	cmpq   $0x0,-0x18(%rbp)
    249f:	75 07                	jne    24a8 <_ZNSt11char_traitsIcE7compareEPKcS2_m+0x22>
	  return 0;
    24a1:	b8 00 00 00 00       	mov    $0x0,%eax
    24a6:	eb 17                	jmp    24bf <_ZNSt11char_traitsIcE7compareEPKcS2_m+0x39>
	return __builtin_memcmp(__s1, __s2, __n);
    24a8:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    24ac:	48 8b 4d f0          	mov    -0x10(%rbp),%rcx
    24b0:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    24b4:	48 89 ce             	mov    %rcx,%rsi
    24b7:	48 89 c7             	mov    %rax,%rdi
    24ba:	e8 91 ed ff ff       	callq  1250 <memcmp@plt>
      }
    24bf:	c9                   	leaveq 
    24c0:	c3                   	retq   

00000000000024c1 <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEEvT_SA_>:
   *  The relative ordering of equivalent elements is not preserved, use
   *  @p stable_sort() if this is needed.
  */
  template<typename _RandomAccessIterator>
    inline void
    sort(_RandomAccessIterator __first, _RandomAccessIterator __last)
    24c1:	55                   	push   %rbp
    24c2:	48 89 e5             	mov    %rsp,%rbp
    24c5:	53                   	push   %rbx
    24c6:	48 83 ec 28          	sub    $0x28,%rsp
    24ca:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
    24ce:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
    24d2:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    24d9:	00 00 
    24db:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    24df:	31 c0                	xor    %eax,%eax
      __glibcxx_function_requires(_LessThanComparableConcept<
	    typename iterator_traits<_RandomAccessIterator>::value_type>)
      __glibcxx_requires_valid_range(__first, __last);
      __glibcxx_requires_irreflexive(__first, __last);

      std::__sort(__first, __last, __gnu_cxx::__ops::__iter_less_iter());
    24e1:	e8 65 ff ff ff       	callq  244b <_ZN9__gnu_cxx5__ops16__iter_less_iterEv>
    24e6:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
    24ea:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    24ee:	48 83 ec 08          	sub    $0x8,%rsp
    24f2:	53                   	push   %rbx
    24f3:	48 89 d6             	mov    %rdx,%rsi
    24f6:	48 89 c7             	mov    %rax,%rdi
    24f9:	e8 c1 00 00 00       	callq  25bf <_ZSt6__sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_>
    24fe:	48 83 c4 10          	add    $0x10,%rsp
    }
    2502:	90                   	nop
    2503:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2507:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    250e:	00 00 
    2510:	74 05                	je     2517 <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEEvT_SA_+0x56>
    2512:	e8 29 ee ff ff       	callq  1340 <__stack_chk_fail@plt>
    2517:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
    251b:	c9                   	leaveq 
    251c:	c3                   	retq   

000000000000251d <_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_>:
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
    251d:	55                   	push   %rbp
    251e:	48 89 e5             	mov    %rsp,%rbp
    2521:	41 54                	push   %r12
    2523:	53                   	push   %rbx
    2524:	48 83 ec 10          	sub    $0x10,%rsp
    2528:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    252c:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
	       const basic_string<_CharT>& __rhs) _GLIBCXX_NOEXCEPT
    { return (__lhs.size() == __rhs.size()
    2530:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2534:	48 89 c7             	mov    %rax,%rdi
    2537:	e8 64 ed ff ff       	callq  12a0 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv@plt>
    253c:	48 89 c3             	mov    %rax,%rbx
    253f:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    2543:	48 89 c7             	mov    %rax,%rdi
    2546:	e8 55 ed ff ff       	callq  12a0 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv@plt>
	      && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
    254b:	48 39 c3             	cmp    %rax,%rbx
    254e:	75 43                	jne    2593 <_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_+0x76>
    2550:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2554:	48 89 c7             	mov    %rax,%rdi
    2557:	e8 44 ed ff ff       	callq  12a0 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv@plt>
    255c:	49 89 c4             	mov    %rax,%r12
    255f:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    2563:	48 89 c7             	mov    %rax,%rdi
    2566:	e8 15 ee ff ff       	callq  1380 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv@plt>
    256b:	48 89 c3             	mov    %rax,%rbx
    256e:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2572:	48 89 c7             	mov    %rax,%rdi
    2575:	e8 06 ee ff ff       	callq  1380 <_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv@plt>
    257a:	4c 89 e2             	mov    %r12,%rdx
    257d:	48 89 de             	mov    %rbx,%rsi
    2580:	48 89 c7             	mov    %rax,%rdi
    2583:	e8 fe fe ff ff       	callq  2486 <_ZNSt11char_traitsIcE7compareEPKcS2_m>
    2588:	85 c0                	test   %eax,%eax
    258a:	75 07                	jne    2593 <_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_+0x76>
    258c:	b8 01 00 00 00       	mov    $0x1,%eax
    2591:	eb 05                	jmp    2598 <_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_+0x7b>
    2593:	b8 00 00 00 00       	mov    $0x0,%eax
						    __lhs.size())); }
    2598:	48 83 c4 10          	add    $0x10,%rsp
    259c:	5b                   	pop    %rbx
    259d:	41 5c                	pop    %r12
    259f:	5d                   	pop    %rbp
    25a0:	c3                   	retq   
    25a1:	90                   	nop

00000000000025a2 <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC1ERKS1_>:

      _GLIBCXX_CONSTEXPR __normal_iterator() _GLIBCXX_NOEXCEPT
      : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) _GLIBCXX_NOEXCEPT
    25a2:	55                   	push   %rbp
    25a3:	48 89 e5             	mov    %rsp,%rbp
    25a6:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    25aa:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
      : _M_current(__i) { }
    25ae:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    25b2:	48 8b 10             	mov    (%rax),%rdx
    25b5:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    25b9:	48 89 10             	mov    %rdx,(%rax)
    25bc:	90                   	nop
    25bd:	5d                   	pop    %rbp
    25be:	c3                   	retq   

00000000000025bf <_ZSt6__sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_>:
    __sort(_RandomAccessIterator __first, _RandomAccessIterator __last,
    25bf:	55                   	push   %rbp
    25c0:	48 89 e5             	mov    %rsp,%rbp
    25c3:	41 54                	push   %r12
    25c5:	53                   	push   %rbx
    25c6:	48 83 ec 10          	sub    $0x10,%rsp
    25ca:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    25ce:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
      if (__first != __last)
    25d2:	48 8d 55 e0          	lea    -0x20(%rbp),%rdx
    25d6:	48 8d 45 e8          	lea    -0x18(%rbp),%rax
    25da:	48 89 d6             	mov    %rdx,%rsi
    25dd:	48 89 c7             	mov    %rax,%rdi
    25e0:	e8 66 00 00 00       	callq  264b <_ZN9__gnu_cxxneIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
    25e5:	84 c0                	test   %al,%al
    25e7:	74 58                	je     2641 <_ZSt6__sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_+0x82>
				std::__lg(__last - __first) * 2,
    25e9:	48 8d 55 e8          	lea    -0x18(%rbp),%rdx
    25ed:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
    25f1:	48 89 d6             	mov    %rdx,%rsi
    25f4:	48 89 c7             	mov    %rax,%rdi
    25f7:	e8 8b 00 00 00       	callq  2687 <_ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_>
    25fc:	48 89 c7             	mov    %rax,%rdi
    25ff:	e8 5f fe ff ff       	callq  2463 <_ZSt4__lgl>
	  std::__introsort_loop(__first, __last,
    2604:	48 8d 14 00          	lea    (%rax,%rax,1),%rdx
    2608:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
    260c:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2610:	48 83 ec 08          	sub    $0x8,%rsp
    2614:	41 54                	push   %r12
    2616:	48 89 ce             	mov    %rcx,%rsi
    2619:	48 89 c7             	mov    %rax,%rdi
    261c:	e8 a5 00 00 00       	callq  26c6 <_ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElNS0_5__ops15_Iter_less_iterEEvT_SC_T0_T1_>
    2621:	48 83 c4 10          	add    $0x10,%rsp
	  std::__final_insertion_sort(__first, __last, __comp);
    2625:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    2629:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    262d:	48 83 ec 08          	sub    $0x8,%rsp
    2631:	53                   	push   %rbx
    2632:	48 89 d6             	mov    %rdx,%rsi
    2635:	48 89 c7             	mov    %rax,%rdi
    2638:	e8 6b 01 00 00       	callq  27a8 <_ZSt22__final_insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_>
    263d:	48 83 c4 10          	add    $0x10,%rsp
    }
    2641:	90                   	nop
    2642:	48 8d 65 f0          	lea    -0x10(%rbp),%rsp
    2646:	5b                   	pop    %rbx
    2647:	41 5c                	pop    %r12
    2649:	5d                   	pop    %rbp
    264a:	c3                   	retq   

000000000000264b <_ZN9__gnu_cxxneIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T0_EESD_>:
    _GLIBCXX_NOEXCEPT
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
    264b:	55                   	push   %rbp
    264c:	48 89 e5             	mov    %rsp,%rbp
    264f:	53                   	push   %rbx
    2650:	48 83 ec 18          	sub    $0x18,%rsp
    2654:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    2658:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
	       const __normal_iterator<_Iterator, _Container>& __rhs)
    _GLIBCXX_NOEXCEPT
    { return __lhs.base() != __rhs.base(); }
    265c:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2660:	48 89 c7             	mov    %rax,%rdi
    2663:	e8 f8 01 00 00       	callq  2860 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv>
    2668:	48 8b 18             	mov    (%rax),%rbx
    266b:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    266f:	48 89 c7             	mov    %rax,%rdi
    2672:	e8 e9 01 00 00       	callq  2860 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv>
    2677:	48 8b 00             	mov    (%rax),%rax
    267a:	48 39 c3             	cmp    %rax,%rbx
    267d:	0f 95 c0             	setne  %al
    2680:	48 83 c4 18          	add    $0x18,%rsp
    2684:	5b                   	pop    %rbx
    2685:	5d                   	pop    %rbp
    2686:	c3                   	retq   

0000000000002687 <_ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_>:
#endif
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
    2687:	55                   	push   %rbp
    2688:	48 89 e5             	mov    %rsp,%rbp
    268b:	53                   	push   %rbx
    268c:	48 83 ec 18          	sub    $0x18,%rsp
    2690:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    2694:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
	      const __normal_iterator<_Iterator, _Container>& __rhs)
    _GLIBCXX_NOEXCEPT
    { return __lhs.base() - __rhs.base(); }
    2698:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    269c:	48 89 c7             	mov    %rax,%rdi
    269f:	e8 bc 01 00 00       	callq  2860 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv>
    26a4:	48 8b 00             	mov    (%rax),%rax
    26a7:	48 89 c3             	mov    %rax,%rbx
    26aa:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    26ae:	48 89 c7             	mov    %rax,%rdi
    26b1:	e8 aa 01 00 00       	callq  2860 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv>
    26b6:	48 8b 00             	mov    (%rax),%rax
    26b9:	48 29 c3             	sub    %rax,%rbx
    26bc:	48 89 d8             	mov    %rbx,%rax
    26bf:	48 83 c4 18          	add    $0x18,%rsp
    26c3:	5b                   	pop    %rbx
    26c4:	5d                   	pop    %rbp
    26c5:	c3                   	retq   

00000000000026c6 <_ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElNS0_5__ops15_Iter_less_iterEEvT_SC_T0_T1_>:
    __introsort_loop(_RandomAccessIterator __first,
    26c6:	55                   	push   %rbp
    26c7:	48 89 e5             	mov    %rsp,%rbp
    26ca:	41 55                	push   %r13
    26cc:	41 54                	push   %r12
    26ce:	53                   	push   %rbx
    26cf:	48 83 ec 38          	sub    $0x38,%rsp
    26d3:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
    26d7:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
    26db:	48 89 55 b8          	mov    %rdx,-0x48(%rbp)
    26df:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    26e6:	00 00 
    26e8:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    26ec:	31 c0                	xor    %eax,%eax
      while (__last - __first > int(_S_threshold))
    26ee:	48 8d 55 c8          	lea    -0x38(%rbp),%rdx
    26f2:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
    26f6:	48 89 d6             	mov    %rdx,%rsi
    26f9:	48 89 c7             	mov    %rax,%rdi
    26fc:	e8 86 ff ff ff       	callq  2687 <_ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_>
    2701:	48 83 f8 10          	cmp    $0x10,%rax
    2705:	0f 9f c0             	setg   %al
    2708:	84 c0                	test   %al,%al
    270a:	74 7d                	je     2789 <_ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElNS0_5__ops15_Iter_less_iterEEvT_SC_T0_T1_+0xc3>
	  if (__depth_limit == 0)
    270c:	48 83 7d b8 00       	cmpq   $0x0,-0x48(%rbp)
    2711:	75 23                	jne    2736 <_ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElNS0_5__ops15_Iter_less_iterEEvT_SC_T0_T1_+0x70>
	      std::__partial_sort(__first, __last, __last, __comp);
    2713:	48 8b 55 c0          	mov    -0x40(%rbp),%rdx
    2717:	48 8b 4d c0          	mov    -0x40(%rbp),%rcx
    271b:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    271f:	48 83 ec 08          	sub    $0x8,%rsp
    2723:	41 55                	push   %r13
    2725:	48 89 ce             	mov    %rcx,%rsi
    2728:	48 89 c7             	mov    %rax,%rdi
    272b:	e8 3e 01 00 00       	callq  286e <_ZSt14__partial_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_T0_>
    2730:	48 83 c4 10          	add    $0x10,%rsp
    2734:	eb 53                	jmp    2789 <_ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElNS0_5__ops15_Iter_less_iterEEvT_SC_T0_T1_+0xc3>
	  --__depth_limit;
    2736:	48 83 6d b8 01       	subq   $0x1,-0x48(%rbp)
	  _RandomAccessIterator __cut =
    273b:	48 8b 55 c0          	mov    -0x40(%rbp),%rdx
    273f:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    2743:	48 83 ec 08          	sub    $0x8,%rsp
    2747:	41 54                	push   %r12
    2749:	48 89 d6             	mov    %rdx,%rsi
    274c:	48 89 c7             	mov    %rax,%rdi
    274f:	e8 69 01 00 00       	callq  28bd <_ZSt27__unguarded_partition_pivotIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEET_SC_SC_T0_>
    2754:	48 83 c4 10          	add    $0x10,%rsp
    2758:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
	  std::__introsort_loop(__cut, __last, __depth_limit, __comp);
    275c:	48 8b 55 b8          	mov    -0x48(%rbp),%rdx
    2760:	48 8b 4d c0          	mov    -0x40(%rbp),%rcx
    2764:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    2768:	48 83 ec 08          	sub    $0x8,%rsp
    276c:	53                   	push   %rbx
    276d:	48 89 ce             	mov    %rcx,%rsi
    2770:	48 89 c7             	mov    %rax,%rdi
    2773:	e8 4e ff ff ff       	callq  26c6 <_ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElNS0_5__ops15_Iter_less_iterEEvT_SC_T0_T1_>
    2778:	48 83 c4 10          	add    $0x10,%rsp
	  __last = __cut;
    277c:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    2780:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
      while (__last - __first > int(_S_threshold))
    2784:	e9 65 ff ff ff       	jmpq   26ee <_ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElNS0_5__ops15_Iter_less_iterEEvT_SC_T0_T1_+0x28>
    }
    2789:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    278d:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    2794:	00 00 
    2796:	74 05                	je     279d <_ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElNS0_5__ops15_Iter_less_iterEEvT_SC_T0_T1_+0xd7>
    2798:	e8 a3 eb ff ff       	callq  1340 <__stack_chk_fail@plt>
    279d:	48 8d 65 e8          	lea    -0x18(%rbp),%rsp
    27a1:	5b                   	pop    %rbx
    27a2:	41 5c                	pop    %r12
    27a4:	41 5d                	pop    %r13
    27a6:	5d                   	pop    %rbp
    27a7:	c3                   	retq   

00000000000027a8 <_ZSt22__final_insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_>:
    __final_insertion_sort(_RandomAccessIterator __first,
    27a8:	55                   	push   %rbp
    27a9:	48 89 e5             	mov    %rsp,%rbp
    27ac:	41 55                	push   %r13
    27ae:	41 54                	push   %r12
    27b0:	53                   	push   %rbx
    27b1:	48 83 ec 18          	sub    $0x18,%rsp
    27b5:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
    27b9:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
      if (__last - __first > int(_S_threshold))
    27bd:	48 8d 55 d8          	lea    -0x28(%rbp),%rdx
    27c1:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
    27c5:	48 89 d6             	mov    %rdx,%rsi
    27c8:	48 89 c7             	mov    %rax,%rdi
    27cb:	e8 b7 fe ff ff       	callq  2687 <_ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_>
    27d0:	48 83 f8 10          	cmp    $0x10,%rax
    27d4:	0f 9f c0             	setg   %al
    27d7:	84 c0                	test   %al,%al
    27d9:	74 5c                	je     2837 <_ZSt22__final_insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_+0x8f>
	  std::__insertion_sort(__first, __first + int(_S_threshold), __comp);
    27db:	48 8d 45 d8          	lea    -0x28(%rbp),%rax
    27df:	be 10 00 00 00       	mov    $0x10,%esi
    27e4:	48 89 c7             	mov    %rax,%rdi
    27e7:	e8 c0 01 00 00       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    27ec:	48 89 c2             	mov    %rax,%rdx
    27ef:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    27f3:	48 83 ec 08          	sub    $0x8,%rsp
    27f7:	41 55                	push   %r13
    27f9:	48 89 d6             	mov    %rdx,%rsi
    27fc:	48 89 c7             	mov    %rax,%rdi
    27ff:	e8 06 02 00 00       	callq  2a0a <_ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_>
    2804:	48 83 c4 10          	add    $0x10,%rsp
	  std::__unguarded_insertion_sort(__first + int(_S_threshold), __last,
    2808:	48 8d 45 d8          	lea    -0x28(%rbp),%rax
    280c:	be 10 00 00 00       	mov    $0x10,%esi
    2811:	48 89 c7             	mov    %rax,%rdi
    2814:	e8 93 01 00 00       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    2819:	48 89 c2             	mov    %rax,%rdx
    281c:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    2820:	48 83 ec 08          	sub    $0x8,%rsp
    2824:	41 54                	push   %r12
    2826:	48 89 c6             	mov    %rax,%rsi
    2829:	48 89 d7             	mov    %rdx,%rdi
    282c:	e8 1c 03 00 00       	callq  2b4d <_ZSt26__unguarded_insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_>
    2831:	48 83 c4 10          	add    $0x10,%rsp
    }
    2835:	eb 1c                	jmp    2853 <_ZSt22__final_insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_+0xab>
	std::__insertion_sort(__first, __last, __comp);
    2837:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
    283b:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    283f:	48 83 ec 08          	sub    $0x8,%rsp
    2843:	53                   	push   %rbx
    2844:	48 89 d6             	mov    %rdx,%rsi
    2847:	48 89 c7             	mov    %rax,%rdi
    284a:	e8 bb 01 00 00       	callq  2a0a <_ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_>
    284f:	48 83 c4 10          	add    $0x10,%rsp
    }
    2853:	90                   	nop
    2854:	48 8d 65 e8          	lea    -0x18(%rbp),%rsp
    2858:	5b                   	pop    %rbx
    2859:	41 5c                	pop    %r12
    285b:	41 5d                	pop    %r13
    285d:	5d                   	pop    %rbp
    285e:	c3                   	retq   
    285f:	90                   	nop

0000000000002860 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv>:
      base() const _GLIBCXX_NOEXCEPT
    2860:	55                   	push   %rbp
    2861:	48 89 e5             	mov    %rsp,%rbp
    2864:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
      { return _M_current; }
    2868:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    286c:	5d                   	pop    %rbp
    286d:	c3                   	retq   

000000000000286e <_ZSt14__partial_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_T0_>:
    __partial_sort(_RandomAccessIterator __first,
    286e:	55                   	push   %rbp
    286f:	48 89 e5             	mov    %rsp,%rbp
    2872:	48 83 ec 20          	sub    $0x20,%rsp
    2876:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    287a:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
    287e:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
      std::__heap_select(__first, __middle, __last, __comp);
    2882:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    2886:	48 8b 4d f0          	mov    -0x10(%rbp),%rcx
    288a:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    288e:	48 83 ec 08          	sub    $0x8,%rsp
    2892:	41 50                	push   %r8
    2894:	48 89 ce             	mov    %rcx,%rsi
    2897:	48 89 c7             	mov    %rax,%rdi
    289a:	e8 3f 03 00 00       	callq  2bde <_ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_T0_>
    289f:	48 83 c4 10          	add    $0x10,%rsp
      std::__sort_heap(__first, __middle, __comp);
    28a3:	48 8b 4d f0          	mov    -0x10(%rbp),%rcx
    28a7:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    28ab:	48 8d 55 10          	lea    0x10(%rbp),%rdx
    28af:	48 89 ce             	mov    %rcx,%rsi
    28b2:	48 89 c7             	mov    %rax,%rdi
    28b5:	e8 d2 03 00 00       	callq  2c8c <_ZSt11__sort_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_RT0_>
    }
    28ba:	90                   	nop
    28bb:	c9                   	leaveq 
    28bc:	c3                   	retq   

00000000000028bd <_ZSt27__unguarded_partition_pivotIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEET_SC_SC_T0_>:
    __unguarded_partition_pivot(_RandomAccessIterator __first,
    28bd:	55                   	push   %rbp
    28be:	48 89 e5             	mov    %rsp,%rbp
    28c1:	41 55                	push   %r13
    28c3:	41 54                	push   %r12
    28c5:	53                   	push   %rbx
    28c6:	48 83 ec 28          	sub    $0x28,%rsp
    28ca:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
    28ce:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
    28d2:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    28d9:	00 00 
    28db:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    28df:	31 c0                	xor    %eax,%eax
      _RandomAccessIterator __mid = __first + (__last - __first) / 2;
    28e1:	48 8d 55 c8          	lea    -0x38(%rbp),%rdx
    28e5:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
    28e9:	48 89 d6             	mov    %rdx,%rsi
    28ec:	48 89 c7             	mov    %rax,%rdi
    28ef:	e8 93 fd ff ff       	callq  2687 <_ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_>
    28f4:	48 89 c2             	mov    %rax,%rdx
    28f7:	48 c1 ea 3f          	shr    $0x3f,%rdx
    28fb:	48 01 d0             	add    %rdx,%rax
    28fe:	48 d1 f8             	sar    %rax
    2901:	48 89 c2             	mov    %rax,%rdx
    2904:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    2908:	48 89 d6             	mov    %rdx,%rsi
    290b:	48 89 c7             	mov    %rax,%rdi
    290e:	e8 99 00 00 00       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    2913:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
      std::__move_median_to_first(__first, __first + 1, __mid, __last - 1,
    2917:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
    291b:	be 01 00 00 00       	mov    $0x1,%esi
    2920:	48 89 c7             	mov    %rax,%rdi
    2923:	e8 c0 03 00 00       	callq  2ce8 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmiEl>
    2928:	48 89 c3             	mov    %rax,%rbx
    292b:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    292f:	be 01 00 00 00       	mov    $0x1,%esi
    2934:	48 89 c7             	mov    %rax,%rdi
    2937:	e8 70 00 00 00       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    293c:	48 89 c6             	mov    %rax,%rsi
    293f:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
    2943:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    2947:	48 83 ec 08          	sub    $0x8,%rsp
    294b:	41 55                	push   %r13
    294d:	48 89 d9             	mov    %rbx,%rcx
    2950:	48 89 c7             	mov    %rax,%rdi
    2953:	e8 f1 03 00 00       	callq  2d49 <_ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_SC_T0_>
    2958:	48 83 c4 10          	add    $0x10,%rsp
      return std::__unguarded_partition(__first + 1, __last, __first, __comp);
    295c:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    2960:	be 01 00 00 00       	mov    $0x1,%esi
    2965:	48 89 c7             	mov    %rax,%rdi
    2968:	e8 3f 00 00 00       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    296d:	48 89 c1             	mov    %rax,%rcx
    2970:	48 8b 55 c8          	mov    -0x38(%rbp),%rdx
    2974:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
    2978:	48 83 ec 08          	sub    $0x8,%rsp
    297c:	41 54                	push   %r12
    297e:	48 89 c6             	mov    %rax,%rsi
    2981:	48 89 cf             	mov    %rcx,%rdi
    2984:	e8 d5 04 00 00       	callq  2e5e <_ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEET_SC_SC_SC_T0_>
    2989:	48 83 c4 10          	add    $0x10,%rsp
    }
    298d:	48 8b 5d d8          	mov    -0x28(%rbp),%rbx
    2991:	64 48 33 1c 25 28 00 	xor    %fs:0x28,%rbx
    2998:	00 00 
    299a:	74 05                	je     29a1 <_ZSt27__unguarded_partition_pivotIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEET_SC_SC_T0_+0xe4>
    299c:	e8 9f e9 ff ff       	callq  1340 <__stack_chk_fail@plt>
    29a1:	48 8d 65 e8          	lea    -0x18(%rbp),%rsp
    29a5:	5b                   	pop    %rbx
    29a6:	41 5c                	pop    %r12
    29a8:	41 5d                	pop    %r13
    29aa:	5d                   	pop    %rbp
    29ab:	c3                   	retq   

00000000000029ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>:
      operator+(difference_type __n) const _GLIBCXX_NOEXCEPT
    29ac:	55                   	push   %rbp
    29ad:	48 89 e5             	mov    %rsp,%rbp
    29b0:	48 83 ec 30          	sub    $0x30,%rsp
    29b4:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
    29b8:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
    29bc:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    29c3:	00 00 
    29c5:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    29c9:	31 c0                	xor    %eax,%eax
      { return __normal_iterator(_M_current + __n); }
    29cb:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    29cf:	48 8b 10             	mov    (%rax),%rdx
    29d2:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    29d6:	48 01 d0             	add    %rdx,%rax
    29d9:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    29dd:	48 8d 55 e8          	lea    -0x18(%rbp),%rdx
    29e1:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
    29e5:	48 89 d6             	mov    %rdx,%rsi
    29e8:	48 89 c7             	mov    %rax,%rdi
    29eb:	e8 b2 fb ff ff       	callq  25a2 <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC1ERKS1_>
    29f0:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    29f4:	48 8b 4d f8          	mov    -0x8(%rbp),%rcx
    29f8:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
    29ff:	00 00 
    2a01:	74 05                	je     2a08 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl+0x5c>
    2a03:	e8 38 e9 ff ff       	callq  1340 <__stack_chk_fail@plt>
    2a08:	c9                   	leaveq 
    2a09:	c3                   	retq   

0000000000002a0a <_ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_>:
    __insertion_sort(_RandomAccessIterator __first,
    2a0a:	55                   	push   %rbp
    2a0b:	48 89 e5             	mov    %rsp,%rbp
    2a0e:	41 55                	push   %r13
    2a10:	41 54                	push   %r12
    2a12:	53                   	push   %rbx
    2a13:	48 83 ec 38          	sub    $0x38,%rsp
    2a17:	48 89 7d b8          	mov    %rdi,-0x48(%rbp)
    2a1b:	48 89 75 b0          	mov    %rsi,-0x50(%rbp)
    2a1f:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2a26:	00 00 
    2a28:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    2a2c:	31 c0                	xor    %eax,%eax
      if (__first == __last) return;
    2a2e:	48 8d 55 b0          	lea    -0x50(%rbp),%rdx
    2a32:	48 8d 45 b8          	lea    -0x48(%rbp),%rax
    2a36:	48 89 d6             	mov    %rdx,%rsi
    2a39:	48 89 c7             	mov    %rax,%rdi
    2a3c:	e8 cf 04 00 00       	callq  2f10 <_ZN9__gnu_cxxeqIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
    2a41:	84 c0                	test   %al,%al
    2a43:	0f 85 e4 00 00 00    	jne    2b2d <_ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_+0x123>
      for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
    2a49:	48 8d 45 b8          	lea    -0x48(%rbp),%rax
    2a4d:	be 01 00 00 00       	mov    $0x1,%esi
    2a52:	48 89 c7             	mov    %rax,%rdi
    2a55:	e8 52 ff ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    2a5a:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    2a5e:	48 8d 55 b0          	lea    -0x50(%rbp),%rdx
    2a62:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
    2a66:	48 89 d6             	mov    %rdx,%rsi
    2a69:	48 89 c7             	mov    %rax,%rdi
    2a6c:	e8 da fb ff ff       	callq  264b <_ZN9__gnu_cxxneIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
    2a71:	84 c0                	test   %al,%al
    2a73:	0f 84 b5 00 00 00    	je     2b2e <_ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_+0x124>
	  if (__comp(__i, __first))
    2a79:	48 8b 55 b8          	mov    -0x48(%rbp),%rdx
    2a7d:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    2a81:	48 89 c6             	mov    %rax,%rsi
    2a84:	48 8d 7d 10          	lea    0x10(%rbp),%rdi
    2a88:	e8 df 04 00 00       	callq  2f6c <_ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESB_EEbT_T0_>
    2a8d:	84 c0                	test   %al,%al
    2a8f:	74 66                	je     2af7 <_ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_+0xed>
		__val = _GLIBCXX_MOVE(*__i);
    2a91:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
    2a95:	48 89 c7             	mov    %rax,%rdi
    2a98:	e8 0f 05 00 00       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    2a9d:	48 89 c7             	mov    %rax,%rdi
    2aa0:	e8 18 05 00 00       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    2aa5:	0f b6 00             	movzbl (%rax),%eax
    2aa8:	88 45 cf             	mov    %al,-0x31(%rbp)
	      _GLIBCXX_MOVE_BACKWARD3(__first, __i, __i + 1);
    2aab:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
    2aaf:	be 01 00 00 00       	mov    $0x1,%esi
    2ab4:	48 89 c7             	mov    %rax,%rdi
    2ab7:	e8 f0 fe ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    2abc:	48 89 c2             	mov    %rax,%rdx
    2abf:	48 8b 4d d0          	mov    -0x30(%rbp),%rcx
    2ac3:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
    2ac7:	48 89 ce             	mov    %rcx,%rsi
    2aca:	48 89 c7             	mov    %rax,%rdi
    2acd:	e8 f9 04 00 00       	callq  2fcb <_ZSt13move_backwardIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_ET0_T_SB_SA_>
	      *__first = _GLIBCXX_MOVE(__val);
    2ad2:	48 8d 45 cf          	lea    -0x31(%rbp),%rax
    2ad6:	48 89 c7             	mov    %rax,%rdi
    2ad9:	e8 df 04 00 00       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    2ade:	48 89 c3             	mov    %rax,%rbx
    2ae1:	48 8d 45 b8          	lea    -0x48(%rbp),%rax
    2ae5:	48 89 c7             	mov    %rax,%rdi
    2ae8:	e8 bf 04 00 00       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    2aed:	48 89 c2             	mov    %rax,%rdx
    2af0:	0f b6 03             	movzbl (%rbx),%eax
    2af3:	88 02                	mov    %al,(%rdx)
    2af5:	eb 25                	jmp    2b1c <_ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_+0x112>
				__gnu_cxx::__ops::__val_comp_iter(__comp));
    2af7:	48 83 ec 08          	sub    $0x8,%rsp
    2afb:	41 55                	push   %r13
    2afd:	e8 5b f9 ff ff       	callq  245d <_ZN9__gnu_cxx5__ops15__val_comp_iterENS0_15_Iter_less_iterE>
    2b02:	48 83 c4 10          	add    $0x10,%rsp
	    std::__unguarded_linear_insert(__i,
    2b06:	48 8b 45 d0          	mov    -0x30(%rbp),%rax
    2b0a:	48 83 ec 08          	sub    $0x8,%rsp
    2b0e:	41 54                	push   %r12
    2b10:	48 89 c7             	mov    %rax,%rdi
    2b13:	e8 ff 04 00 00       	callq  3017 <_ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops14_Val_less_iterEEvT_T0_>
    2b18:	48 83 c4 10          	add    $0x10,%rsp
      for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
    2b1c:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
    2b20:	48 89 c7             	mov    %rax,%rdi
    2b23:	e8 24 04 00 00       	callq  2f4c <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEppEv>
    2b28:	e9 31 ff ff ff       	jmpq   2a5e <_ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_+0x54>
      if (__first == __last) return;
    2b2d:	90                   	nop
    }
    2b2e:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    2b32:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    2b39:	00 00 
    2b3b:	74 05                	je     2b42 <_ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_+0x138>
    2b3d:	e8 fe e7 ff ff       	callq  1340 <__stack_chk_fail@plt>
    2b42:	48 8d 65 e8          	lea    -0x18(%rbp),%rsp
    2b46:	5b                   	pop    %rbx
    2b47:	41 5c                	pop    %r12
    2b49:	41 5d                	pop    %r13
    2b4b:	5d                   	pop    %rbp
    2b4c:	c3                   	retq   

0000000000002b4d <_ZSt26__unguarded_insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_>:
    __unguarded_insertion_sort(_RandomAccessIterator __first,
    2b4d:	55                   	push   %rbp
    2b4e:	48 89 e5             	mov    %rsp,%rbp
    2b51:	41 54                	push   %r12
    2b53:	53                   	push   %rbx
    2b54:	48 83 ec 20          	sub    $0x20,%rsp
    2b58:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
    2b5c:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
    2b60:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2b67:	00 00 
    2b69:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    2b6d:	31 c0                	xor    %eax,%eax
      for (_RandomAccessIterator __i = __first; __i != __last; ++__i)
    2b6f:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    2b73:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
    2b77:	48 8d 55 d0          	lea    -0x30(%rbp),%rdx
    2b7b:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
    2b7f:	48 89 d6             	mov    %rdx,%rsi
    2b82:	48 89 c7             	mov    %rax,%rdi
    2b85:	e8 c1 fa ff ff       	callq  264b <_ZN9__gnu_cxxneIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
    2b8a:	84 c0                	test   %al,%al
    2b8c:	74 32                	je     2bc0 <_ZSt26__unguarded_insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_+0x73>
				__gnu_cxx::__ops::__val_comp_iter(__comp));
    2b8e:	48 83 ec 08          	sub    $0x8,%rsp
    2b92:	41 54                	push   %r12
    2b94:	e8 c4 f8 ff ff       	callq  245d <_ZN9__gnu_cxx5__ops15__val_comp_iterENS0_15_Iter_less_iterE>
    2b99:	48 83 c4 10          	add    $0x10,%rsp
	std::__unguarded_linear_insert(__i,
    2b9d:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    2ba1:	48 83 ec 08          	sub    $0x8,%rsp
    2ba5:	53                   	push   %rbx
    2ba6:	48 89 c7             	mov    %rax,%rdi
    2ba9:	e8 69 04 00 00       	callq  3017 <_ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops14_Val_less_iterEEvT_T0_>
    2bae:	48 83 c4 10          	add    $0x10,%rsp
      for (_RandomAccessIterator __i = __first; __i != __last; ++__i)
    2bb2:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
    2bb6:	48 89 c7             	mov    %rax,%rdi
    2bb9:	e8 8e 03 00 00       	callq  2f4c <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEppEv>
    2bbe:	eb b7                	jmp    2b77 <_ZSt26__unguarded_insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_+0x2a>
    }
    2bc0:	90                   	nop
    2bc1:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2bc5:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    2bcc:	00 00 
    2bce:	74 05                	je     2bd5 <_ZSt26__unguarded_insertion_sortIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_T0_+0x88>
    2bd0:	e8 6b e7 ff ff       	callq  1340 <__stack_chk_fail@plt>
    2bd5:	48 8d 65 f0          	lea    -0x10(%rbp),%rsp
    2bd9:	5b                   	pop    %rbx
    2bda:	41 5c                	pop    %r12
    2bdc:	5d                   	pop    %rbp
    2bdd:	c3                   	retq   

0000000000002bde <_ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_T0_>:
    __heap_select(_RandomAccessIterator __first,
    2bde:	55                   	push   %rbp
    2bdf:	48 89 e5             	mov    %rsp,%rbp
    2be2:	48 83 ec 30          	sub    $0x30,%rsp
    2be6:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    2bea:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    2bee:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
    2bf2:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2bf9:	00 00 
    2bfb:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    2bff:	31 c0                	xor    %eax,%eax
      std::__make_heap(__first, __middle, __comp);
    2c01:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
    2c05:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2c09:	48 8d 55 10          	lea    0x10(%rbp),%rdx
    2c0d:	48 89 ce             	mov    %rcx,%rsi
    2c10:	48 89 c7             	mov    %rax,%rdi
    2c13:	e8 e1 04 00 00       	callq  30f9 <_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_RT0_>
      for (_RandomAccessIterator __i = __middle; __i < __last; ++__i)
    2c18:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    2c1c:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
    2c20:	48 8d 55 d8          	lea    -0x28(%rbp),%rdx
    2c24:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
    2c28:	48 89 d6             	mov    %rdx,%rsi
    2c2b:	48 89 c7             	mov    %rax,%rdi
    2c2e:	e8 c8 05 00 00       	callq  31fb <_ZN9__gnu_cxxltIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
    2c33:	84 c0                	test   %al,%al
    2c35:	74 3e                	je     2c75 <_ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_T0_+0x97>
	if (__comp(__i, __first))
    2c37:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    2c3b:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    2c3f:	48 89 c6             	mov    %rax,%rsi
    2c42:	48 8d 7d 10          	lea    0x10(%rbp),%rdi
    2c46:	e8 21 03 00 00       	callq  2f6c <_ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESB_EEbT_T0_>
    2c4b:	84 c0                	test   %al,%al
    2c4d:	74 18                	je     2c67 <_ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_T0_+0x89>
	  std::__pop_heap(__first, __middle, __i, __comp);
    2c4f:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
    2c53:	48 8b 75 e0          	mov    -0x20(%rbp),%rsi
    2c57:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2c5b:	48 8d 4d 10          	lea    0x10(%rbp),%rcx
    2c5f:	48 89 c7             	mov    %rax,%rdi
    2c62:	e8 d0 05 00 00       	callq  3237 <_ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_RT0_>
      for (_RandomAccessIterator __i = __middle; __i < __last; ++__i)
    2c67:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
    2c6b:	48 89 c7             	mov    %rax,%rdi
    2c6e:	e8 d9 02 00 00       	callq  2f4c <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEppEv>
    2c73:	eb ab                	jmp    2c20 <_ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_T0_+0x42>
    }
    2c75:	90                   	nop
    2c76:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2c7a:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    2c81:	00 00 
    2c83:	74 05                	je     2c8a <_ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_T0_+0xac>
    2c85:	e8 b6 e6 ff ff       	callq  1340 <__stack_chk_fail@plt>
    2c8a:	c9                   	leaveq 
    2c8b:	c3                   	retq   

0000000000002c8c <_ZSt11__sort_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_RT0_>:
      std::__make_heap(__first, __last, __cmp);
    }

  template<typename _RandomAccessIterator, typename _Compare>
    void
    __sort_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
    2c8c:	55                   	push   %rbp
    2c8d:	48 89 e5             	mov    %rsp,%rbp
    2c90:	48 83 ec 20          	sub    $0x20,%rsp
    2c94:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    2c98:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
    2c9c:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
		_Compare& __comp)
    {
      while (__last - __first > 1)
    2ca0:	48 8d 55 f8          	lea    -0x8(%rbp),%rdx
    2ca4:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
    2ca8:	48 89 d6             	mov    %rdx,%rsi
    2cab:	48 89 c7             	mov    %rax,%rdi
    2cae:	e8 d4 f9 ff ff       	callq  2687 <_ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_>
    2cb3:	48 83 f8 01          	cmp    $0x1,%rax
    2cb7:	0f 9f c0             	setg   %al
    2cba:	84 c0                	test   %al,%al
    2cbc:	74 26                	je     2ce4 <_ZSt11__sort_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_RT0_+0x58>
	{
	  --__last;
    2cbe:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
    2cc2:	48 89 c7             	mov    %rax,%rdi
    2cc5:	e8 40 06 00 00       	callq  330a <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmmEv>
	  std::__pop_heap(__first, __last, __last, __comp);
    2cca:	48 8b 4d e8          	mov    -0x18(%rbp),%rcx
    2cce:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
    2cd2:	48 8b 75 f0          	mov    -0x10(%rbp),%rsi
    2cd6:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2cda:	48 89 c7             	mov    %rax,%rdi
    2cdd:	e8 55 05 00 00       	callq  3237 <_ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_RT0_>
      while (__last - __first > 1)
    2ce2:	eb bc                	jmp    2ca0 <_ZSt11__sort_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_RT0_+0x14>
	}
    }
    2ce4:	90                   	nop
    2ce5:	c9                   	leaveq 
    2ce6:	c3                   	retq   
    2ce7:	90                   	nop

0000000000002ce8 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmiEl>:
      operator-(difference_type __n) const _GLIBCXX_NOEXCEPT
    2ce8:	55                   	push   %rbp
    2ce9:	48 89 e5             	mov    %rsp,%rbp
    2cec:	48 83 ec 30          	sub    $0x30,%rsp
    2cf0:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
    2cf4:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
    2cf8:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2cff:	00 00 
    2d01:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    2d05:	31 c0                	xor    %eax,%eax
      { return __normal_iterator(_M_current - __n); }
    2d07:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    2d0b:	48 8b 00             	mov    (%rax),%rax
    2d0e:	48 8b 55 d0          	mov    -0x30(%rbp),%rdx
    2d12:	48 f7 da             	neg    %rdx
    2d15:	48 01 d0             	add    %rdx,%rax
    2d18:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    2d1c:	48 8d 55 e8          	lea    -0x18(%rbp),%rdx
    2d20:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
    2d24:	48 89 d6             	mov    %rdx,%rsi
    2d27:	48 89 c7             	mov    %rax,%rdi
    2d2a:	e8 73 f8 ff ff       	callq  25a2 <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC1ERKS1_>
    2d2f:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    2d33:	48 8b 4d f8          	mov    -0x8(%rbp),%rcx
    2d37:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
    2d3e:	00 00 
    2d40:	74 05                	je     2d47 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmiEl+0x5f>
    2d42:	e8 f9 e5 ff ff       	callq  1340 <__stack_chk_fail@plt>
    2d47:	c9                   	leaveq 
    2d48:	c3                   	retq   

0000000000002d49 <_ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_SC_T0_>:
    __move_median_to_first(_Iterator __result,_Iterator __a, _Iterator __b,
    2d49:	55                   	push   %rbp
    2d4a:	48 89 e5             	mov    %rsp,%rbp
    2d4d:	48 83 ec 20          	sub    $0x20,%rsp
    2d51:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    2d55:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
    2d59:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
    2d5d:	48 89 4d e0          	mov    %rcx,-0x20(%rbp)
      if (__comp(__a, __b))
    2d61:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    2d65:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    2d69:	48 89 c6             	mov    %rax,%rsi
    2d6c:	48 8d 7d 10          	lea    0x10(%rbp),%rdi
    2d70:	e8 f7 01 00 00       	callq  2f6c <_ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESB_EEbT_T0_>
    2d75:	84 c0                	test   %al,%al
    2d77:	74 75                	je     2dee <_ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_SC_T0_+0xa5>
	  if (__comp(__b, __c))
    2d79:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    2d7d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2d81:	48 89 c6             	mov    %rax,%rsi
    2d84:	48 8d 7d 10          	lea    0x10(%rbp),%rdi
    2d88:	e8 df 01 00 00       	callq  2f6c <_ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESB_EEbT_T0_>
    2d8d:	84 c0                	test   %al,%al
    2d8f:	74 18                	je     2da9 <_ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_SC_T0_+0x60>
	    std::iter_swap(__result, __b);
    2d91:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    2d95:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2d99:	48 89 d6             	mov    %rdx,%rsi
    2d9c:	48 89 c7             	mov    %rax,%rdi
    2d9f:	e8 86 05 00 00       	callq  332a <_ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_EvT_T0_>
    }
    2da4:	e9 b2 00 00 00       	jmpq   2e5b <_ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_SC_T0_+0x112>
	  else if (__comp(__a, __c))
    2da9:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    2dad:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    2db1:	48 89 c6             	mov    %rax,%rsi
    2db4:	48 8d 7d 10          	lea    0x10(%rbp),%rdi
    2db8:	e8 af 01 00 00       	callq  2f6c <_ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESB_EEbT_T0_>
    2dbd:	84 c0                	test   %al,%al
    2dbf:	74 18                	je     2dd9 <_ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_SC_T0_+0x90>
	    std::iter_swap(__result, __c);
    2dc1:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    2dc5:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2dc9:	48 89 d6             	mov    %rdx,%rsi
    2dcc:	48 89 c7             	mov    %rax,%rdi
    2dcf:	e8 56 05 00 00       	callq  332a <_ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_EvT_T0_>
    }
    2dd4:	e9 82 00 00 00       	jmpq   2e5b <_ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_SC_T0_+0x112>
	    std::iter_swap(__result, __a);
    2dd9:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
    2ddd:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2de1:	48 89 d6             	mov    %rdx,%rsi
    2de4:	48 89 c7             	mov    %rax,%rdi
    2de7:	e8 3e 05 00 00       	callq  332a <_ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_EvT_T0_>
    }
    2dec:	eb 6d                	jmp    2e5b <_ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_SC_T0_+0x112>
      else if (__comp(__a, __c))
    2dee:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    2df2:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    2df6:	48 89 c6             	mov    %rax,%rsi
    2df9:	48 8d 7d 10          	lea    0x10(%rbp),%rdi
    2dfd:	e8 6a 01 00 00       	callq  2f6c <_ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESB_EEbT_T0_>
    2e02:	84 c0                	test   %al,%al
    2e04:	74 15                	je     2e1b <_ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_SC_T0_+0xd2>
	std::iter_swap(__result, __a);
    2e06:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
    2e0a:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2e0e:	48 89 d6             	mov    %rdx,%rsi
    2e11:	48 89 c7             	mov    %rax,%rdi
    2e14:	e8 11 05 00 00       	callq  332a <_ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_EvT_T0_>
    }
    2e19:	eb 40                	jmp    2e5b <_ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_SC_T0_+0x112>
      else if (__comp(__b, __c))
    2e1b:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    2e1f:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2e23:	48 89 c6             	mov    %rax,%rsi
    2e26:	48 8d 7d 10          	lea    0x10(%rbp),%rdi
    2e2a:	e8 3d 01 00 00       	callq  2f6c <_ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESB_EEbT_T0_>
    2e2f:	84 c0                	test   %al,%al
    2e31:	74 15                	je     2e48 <_ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_SC_T0_+0xff>
	std::iter_swap(__result, __c);
    2e33:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    2e37:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2e3b:	48 89 d6             	mov    %rdx,%rsi
    2e3e:	48 89 c7             	mov    %rax,%rdi
    2e41:	e8 e4 04 00 00       	callq  332a <_ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_EvT_T0_>
    }
    2e46:	eb 13                	jmp    2e5b <_ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_SC_T0_+0x112>
	std::iter_swap(__result, __b);
    2e48:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    2e4c:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2e50:	48 89 d6             	mov    %rdx,%rsi
    2e53:	48 89 c7             	mov    %rax,%rdi
    2e56:	e8 cf 04 00 00       	callq  332a <_ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_EvT_T0_>
    }
    2e5b:	90                   	nop
    2e5c:	c9                   	leaveq 
    2e5d:	c3                   	retq   

0000000000002e5e <_ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEET_SC_SC_SC_T0_>:
    __unguarded_partition(_RandomAccessIterator __first,
    2e5e:	55                   	push   %rbp
    2e5f:	48 89 e5             	mov    %rsp,%rbp
    2e62:	48 83 ec 20          	sub    $0x20,%rsp
    2e66:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    2e6a:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
    2e6e:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
	  while (__comp(__first, __pivot))
    2e72:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    2e76:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2e7a:	48 89 c6             	mov    %rax,%rsi
    2e7d:	48 8d 7d 10          	lea    0x10(%rbp),%rdi
    2e81:	e8 e6 00 00 00       	callq  2f6c <_ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESB_EEbT_T0_>
    2e86:	84 c0                	test   %al,%al
    2e88:	74 0e                	je     2e98 <_ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEET_SC_SC_SC_T0_+0x3a>
	    ++__first;
    2e8a:	48 8d 45 f8          	lea    -0x8(%rbp),%rax
    2e8e:	48 89 c7             	mov    %rax,%rdi
    2e91:	e8 b6 00 00 00       	callq  2f4c <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEppEv>
	  while (__comp(__first, __pivot))
    2e96:	eb da                	jmp    2e72 <_ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEET_SC_SC_SC_T0_+0x14>
	  --__last;
    2e98:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
    2e9c:	48 89 c7             	mov    %rax,%rdi
    2e9f:	e8 66 04 00 00       	callq  330a <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmmEv>
	  while (__comp(__pivot, __last))
    2ea4:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
    2ea8:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2eac:	48 89 c6             	mov    %rax,%rsi
    2eaf:	48 8d 7d 10          	lea    0x10(%rbp),%rdi
    2eb3:	e8 b4 00 00 00       	callq  2f6c <_ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESB_EEbT_T0_>
    2eb8:	84 c0                	test   %al,%al
    2eba:	74 0e                	je     2eca <_ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEET_SC_SC_SC_T0_+0x6c>
	    --__last;
    2ebc:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
    2ec0:	48 89 c7             	mov    %rax,%rdi
    2ec3:	e8 42 04 00 00       	callq  330a <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmmEv>
	  while (__comp(__pivot, __last))
    2ec8:	eb da                	jmp    2ea4 <_ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEET_SC_SC_SC_T0_+0x46>
	  if (!(__first < __last))
    2eca:	48 8d 55 f0          	lea    -0x10(%rbp),%rdx
    2ece:	48 8d 45 f8          	lea    -0x8(%rbp),%rax
    2ed2:	48 89 d6             	mov    %rdx,%rsi
    2ed5:	48 89 c7             	mov    %rax,%rdi
    2ed8:	e8 1e 03 00 00       	callq  31fb <_ZN9__gnu_cxxltIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
    2edd:	83 f0 01             	xor    $0x1,%eax
    2ee0:	84 c0                	test   %al,%al
    2ee2:	74 06                	je     2eea <_ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEET_SC_SC_SC_T0_+0x8c>
	    return __first;
    2ee4:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2ee8:	eb 24                	jmp    2f0e <_ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEET_SC_SC_SC_T0_+0xb0>
	  std::iter_swap(__first, __last);
    2eea:	48 8b 55 f0          	mov    -0x10(%rbp),%rdx
    2eee:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2ef2:	48 89 d6             	mov    %rdx,%rsi
    2ef5:	48 89 c7             	mov    %rax,%rdi
    2ef8:	e8 2d 04 00 00       	callq  332a <_ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_EvT_T0_>
	  ++__first;
    2efd:	48 8d 45 f8          	lea    -0x8(%rbp),%rax
    2f01:	48 89 c7             	mov    %rax,%rdi
    2f04:	e8 43 00 00 00       	callq  2f4c <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEppEv>
      while (true)
    2f09:	e9 64 ff ff ff       	jmpq   2e72 <_ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEET_SC_SC_SC_T0_+0x14>
    }
    2f0e:	c9                   	leaveq 
    2f0f:	c3                   	retq   

0000000000002f10 <_ZN9__gnu_cxxeqIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T0_EESD_>:
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
    2f10:	55                   	push   %rbp
    2f11:	48 89 e5             	mov    %rsp,%rbp
    2f14:	53                   	push   %rbx
    2f15:	48 83 ec 18          	sub    $0x18,%rsp
    2f19:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    2f1d:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    { return __lhs.base() == __rhs.base(); }
    2f21:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2f25:	48 89 c7             	mov    %rax,%rdi
    2f28:	e8 33 f9 ff ff       	callq  2860 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv>
    2f2d:	48 8b 18             	mov    (%rax),%rbx
    2f30:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    2f34:	48 89 c7             	mov    %rax,%rdi
    2f37:	e8 24 f9 ff ff       	callq  2860 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv>
    2f3c:	48 8b 00             	mov    (%rax),%rax
    2f3f:	48 39 c3             	cmp    %rax,%rbx
    2f42:	0f 94 c0             	sete   %al
    2f45:	48 83 c4 18          	add    $0x18,%rsp
    2f49:	5b                   	pop    %rbx
    2f4a:	5d                   	pop    %rbp
    2f4b:	c3                   	retq   

0000000000002f4c <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEppEv>:
      operator++() _GLIBCXX_NOEXCEPT
    2f4c:	55                   	push   %rbp
    2f4d:	48 89 e5             	mov    %rsp,%rbp
    2f50:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
	++_M_current;
    2f54:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2f58:	48 8b 00             	mov    (%rax),%rax
    2f5b:	48 8d 50 01          	lea    0x1(%rax),%rdx
    2f5f:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2f63:	48 89 10             	mov    %rdx,(%rax)
	return *this;
    2f66:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
      }
    2f6a:	5d                   	pop    %rbp
    2f6b:	c3                   	retq   

0000000000002f6c <_ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESB_EEbT_T0_>:
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
    2f6c:	55                   	push   %rbp
    2f6d:	48 89 e5             	mov    %rsp,%rbp
    2f70:	53                   	push   %rbx
    2f71:	48 83 ec 28          	sub    $0x28,%rsp
    2f75:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    2f79:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    2f7d:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
      { return *__it1 < *__it2; }
    2f81:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
    2f85:	48 89 c7             	mov    %rax,%rdi
    2f88:	e8 1f 00 00 00       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    2f8d:	0f b6 18             	movzbl (%rax),%ebx
    2f90:	48 8d 45 d8          	lea    -0x28(%rbp),%rax
    2f94:	48 89 c7             	mov    %rax,%rdi
    2f97:	e8 10 00 00 00       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    2f9c:	0f b6 00             	movzbl (%rax),%eax
    2f9f:	38 c3                	cmp    %al,%bl
    2fa1:	0f 9c c0             	setl   %al
    2fa4:	48 83 c4 28          	add    $0x28,%rsp
    2fa8:	5b                   	pop    %rbx
    2fa9:	5d                   	pop    %rbp
    2faa:	c3                   	retq   
    2fab:	90                   	nop

0000000000002fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>:
      operator*() const _GLIBCXX_NOEXCEPT
    2fac:	55                   	push   %rbp
    2fad:	48 89 e5             	mov    %rsp,%rbp
    2fb0:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
      { return *_M_current; }
    2fb4:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2fb8:	48 8b 00             	mov    (%rax),%rax
    2fbb:	5d                   	pop    %rbp
    2fbc:	c3                   	retq   

0000000000002fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>:
   *  @param  __t  A thing of arbitrary type.
   *  @return The parameter cast to an rvalue-reference to allow moving it.
  */
  template<typename _Tp>
    constexpr typename std::remove_reference<_Tp>::type&&
    move(_Tp&& __t) noexcept
    2fbd:	55                   	push   %rbp
    2fbe:	48 89 e5             	mov    %rsp,%rbp
    2fc1:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    { return static_cast<typename std::remove_reference<_Tp>::type&&>(__t); }
    2fc5:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    2fc9:	5d                   	pop    %rbp
    2fca:	c3                   	retq   

0000000000002fcb <_ZSt13move_backwardIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_ET0_T_SB_SA_>:
    move_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    2fcb:	55                   	push   %rbp
    2fcc:	48 89 e5             	mov    %rsp,%rbp
    2fcf:	53                   	push   %rbx
    2fd0:	48 83 ec 28          	sub    $0x28,%rsp
    2fd4:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    2fd8:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    2fdc:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
      return std::__copy_move_backward_a2<true>(std::__miter_base(__first),
    2fe0:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    2fe4:	48 89 c7             	mov    %rax,%rdi
    2fe7:	e8 7d 03 00 00       	callq  3369 <_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEET_SA_>
    2fec:	48 89 c3             	mov    %rax,%rbx
    2fef:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    2ff3:	48 89 c7             	mov    %rax,%rdi
    2ff6:	e8 6e 03 00 00       	callq  3369 <_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEET_SA_>
    2ffb:	48 89 c1             	mov    %rax,%rcx
						__result);
    2ffe:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    3002:	48 89 c2             	mov    %rax,%rdx
    3005:	48 89 de             	mov    %rbx,%rsi
    3008:	48 89 cf             	mov    %rcx,%rdi
    300b:	e8 67 03 00 00       	callq  3377 <_ZSt23__copy_move_backward_a2ILb1EN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_ET1_T0_SB_SA_>
    }
    3010:	48 83 c4 28          	add    $0x28,%rsp
    3014:	5b                   	pop    %rbx
    3015:	5d                   	pop    %rbp
    3016:	c3                   	retq   

0000000000003017 <_ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops14_Val_less_iterEEvT_T0_>:
    __unguarded_linear_insert(_RandomAccessIterator __last,
    3017:	55                   	push   %rbp
    3018:	48 89 e5             	mov    %rsp,%rbp
    301b:	53                   	push   %rbx
    301c:	48 83 ec 38          	sub    $0x38,%rsp
    3020:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
    3024:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    302b:	00 00 
    302d:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    3031:	31 c0                	xor    %eax,%eax
	__val = _GLIBCXX_MOVE(*__last);
    3033:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    3037:	48 89 c7             	mov    %rax,%rdi
    303a:	e8 6d ff ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    303f:	48 89 c7             	mov    %rax,%rdi
    3042:	e8 76 ff ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    3047:	0f b6 00             	movzbl (%rax),%eax
    304a:	88 45 df             	mov    %al,-0x21(%rbp)
      _RandomAccessIterator __next = __last;
    304d:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    3051:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
      --__next;
    3055:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
    3059:	48 89 c7             	mov    %rax,%rdi
    305c:	e8 a9 02 00 00       	callq  330a <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmmEv>
      while (__comp(__val, __next))
    3061:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    3065:	48 8d 45 df          	lea    -0x21(%rbp),%rax
    3069:	48 89 c6             	mov    %rax,%rsi
    306c:	48 8d 7d 10          	lea    0x10(%rbp),%rdi
    3070:	e8 99 03 00 00       	callq  340e <_ZNK9__gnu_cxx5__ops14_Val_less_iterclIcNS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEEEbRT_T0_>
    3075:	84 c0                	test   %al,%al
    3077:	74 41                	je     30ba <_ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops14_Val_less_iterEEvT_T0_+0xa3>
	  *__last = _GLIBCXX_MOVE(*__next);
    3079:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
    307d:	48 89 c7             	mov    %rax,%rdi
    3080:	e8 27 ff ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    3085:	48 89 c7             	mov    %rax,%rdi
    3088:	e8 30 ff ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    308d:	48 89 c3             	mov    %rax,%rbx
    3090:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    3094:	48 89 c7             	mov    %rax,%rdi
    3097:	e8 10 ff ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    309c:	48 89 c2             	mov    %rax,%rdx
    309f:	0f b6 03             	movzbl (%rbx),%eax
    30a2:	88 02                	mov    %al,(%rdx)
	  __last = __next;
    30a4:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    30a8:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
	  --__next;
    30ac:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
    30b0:	48 89 c7             	mov    %rax,%rdi
    30b3:	e8 52 02 00 00       	callq  330a <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmmEv>
      while (__comp(__val, __next))
    30b8:	eb a7                	jmp    3061 <_ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops14_Val_less_iterEEvT_T0_+0x4a>
      *__last = _GLIBCXX_MOVE(__val);
    30ba:	48 8d 45 df          	lea    -0x21(%rbp),%rax
    30be:	48 89 c7             	mov    %rax,%rdi
    30c1:	e8 f7 fe ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    30c6:	48 89 c3             	mov    %rax,%rbx
    30c9:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    30cd:	48 89 c7             	mov    %rax,%rdi
    30d0:	e8 d7 fe ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    30d5:	48 89 c2             	mov    %rax,%rdx
    30d8:	0f b6 03             	movzbl (%rbx),%eax
    30db:	88 02                	mov    %al,(%rdx)
    }
    30dd:	90                   	nop
    30de:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    30e2:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    30e9:	00 00 
    30eb:	74 05                	je     30f2 <_ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops14_Val_less_iterEEvT_T0_+0xdb>
    30ed:	e8 4e e2 ff ff       	callq  1340 <__stack_chk_fail@plt>
    30f2:	48 83 c4 38          	add    $0x38,%rsp
    30f6:	5b                   	pop    %rbx
    30f7:	5d                   	pop    %rbp
    30f8:	c3                   	retq   

00000000000030f9 <_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_RT0_>:
    __make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
    30f9:	55                   	push   %rbp
    30fa:	48 89 e5             	mov    %rsp,%rbp
    30fd:	53                   	push   %rbx
    30fe:	48 83 ec 58          	sub    $0x58,%rsp
    3102:	48 89 7d b8          	mov    %rdi,-0x48(%rbp)
    3106:	48 89 75 b0          	mov    %rsi,-0x50(%rbp)
    310a:	48 89 55 a8          	mov    %rdx,-0x58(%rbp)
    310e:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    3115:	00 00 
    3117:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    311b:	31 c0                	xor    %eax,%eax
      if (__last - __first < 2)
    311d:	48 8d 55 b8          	lea    -0x48(%rbp),%rdx
    3121:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
    3125:	48 89 d6             	mov    %rdx,%rsi
    3128:	48 89 c7             	mov    %rax,%rdi
    312b:	e8 57 f5 ff ff       	callq  2687 <_ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_>
    3130:	48 83 f8 01          	cmp    $0x1,%rax
    3134:	0f 9e c0             	setle  %al
    3137:	84 c0                	test   %al,%al
    3139:	0f 85 9e 00 00 00    	jne    31dd <_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_RT0_+0xe4>
      const _DistanceType __len = __last - __first;
    313f:	48 8d 55 b8          	lea    -0x48(%rbp),%rdx
    3143:	48 8d 45 b0          	lea    -0x50(%rbp),%rax
    3147:	48 89 d6             	mov    %rdx,%rsi
    314a:	48 89 c7             	mov    %rax,%rdi
    314d:	e8 35 f5 ff ff       	callq  2687 <_ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_>
    3152:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
      _DistanceType __parent = (__len - 2) / 2;
    3156:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    315a:	48 83 e8 02          	sub    $0x2,%rax
    315e:	48 89 c2             	mov    %rax,%rdx
    3161:	48 c1 ea 3f          	shr    $0x3f,%rdx
    3165:	48 01 d0             	add    %rdx,%rax
    3168:	48 d1 f8             	sar    %rax
    316b:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
	  _ValueType __value = _GLIBCXX_MOVE(*(__first + __parent));
    316f:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
    3173:	48 8d 45 b8          	lea    -0x48(%rbp),%rax
    3177:	48 89 d6             	mov    %rdx,%rsi
    317a:	48 89 c7             	mov    %rax,%rdi
    317d:	e8 2a f8 ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    3182:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    3186:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
    318a:	48 89 c7             	mov    %rax,%rdi
    318d:	e8 1a fe ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    3192:	48 89 c7             	mov    %rax,%rdi
    3195:	e8 23 fe ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    319a:	0f b6 00             	movzbl (%rax),%eax
    319d:	88 45 cf             	mov    %al,-0x31(%rbp)
	  std::__adjust_heap(__first, __parent, __len, _GLIBCXX_MOVE(__value),
    31a0:	48 8d 45 cf          	lea    -0x31(%rbp),%rax
    31a4:	48 89 c7             	mov    %rax,%rdi
    31a7:	e8 11 fe ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    31ac:	0f b6 00             	movzbl (%rax),%eax
    31af:	0f be c8             	movsbl %al,%ecx
    31b2:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    31b6:	48 8b 75 d8          	mov    -0x28(%rbp),%rsi
    31ba:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
    31be:	48 83 ec 08          	sub    $0x8,%rsp
    31c2:	53                   	push   %rbx
    31c3:	48 89 c7             	mov    %rax,%rdi
    31c6:	e8 88 02 00 00       	callq  3453 <_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops15_Iter_less_iterEEvT_T0_SD_T1_T2_>
    31cb:	48 83 c4 10          	add    $0x10,%rsp
	  if (__parent == 0)
    31cf:	48 83 7d d8 00       	cmpq   $0x0,-0x28(%rbp)
    31d4:	74 0a                	je     31e0 <_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_RT0_+0xe7>
	  __parent--;
    31d6:	48 83 6d d8 01       	subq   $0x1,-0x28(%rbp)
      while (true)
    31db:	eb 92                	jmp    316f <_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_RT0_+0x76>
	return;
    31dd:	90                   	nop
    31de:	eb 01                	jmp    31e1 <_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_RT0_+0xe8>
	    return;
    31e0:	90                   	nop
    }
    31e1:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    31e5:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    31ec:	00 00 
    31ee:	74 05                	je     31f5 <_ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_RT0_+0xfc>
    31f0:	e8 4b e1 ff ff       	callq  1340 <__stack_chk_fail@plt>
    31f5:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
    31f9:	c9                   	leaveq 
    31fa:	c3                   	retq   

00000000000031fb <_ZN9__gnu_cxxltIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEbRKNS_17__normal_iteratorIT_T0_EESD_>:
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
    31fb:	55                   	push   %rbp
    31fc:	48 89 e5             	mov    %rsp,%rbp
    31ff:	53                   	push   %rbx
    3200:	48 83 ec 18          	sub    $0x18,%rsp
    3204:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    3208:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    { return __lhs.base() < __rhs.base(); }
    320c:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    3210:	48 89 c7             	mov    %rax,%rdi
    3213:	e8 48 f6 ff ff       	callq  2860 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv>
    3218:	48 8b 18             	mov    (%rax),%rbx
    321b:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    321f:	48 89 c7             	mov    %rax,%rdi
    3222:	e8 39 f6 ff ff       	callq  2860 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv>
    3227:	48 8b 00             	mov    (%rax),%rax
    322a:	48 39 c3             	cmp    %rax,%rbx
    322d:	0f 92 c0             	setb   %al
    3230:	48 83 c4 18          	add    $0x18,%rsp
    3234:	5b                   	pop    %rbx
    3235:	5d                   	pop    %rbp
    3236:	c3                   	retq   

0000000000003237 <_ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_RT0_>:
    __pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
    3237:	55                   	push   %rbp
    3238:	48 89 e5             	mov    %rsp,%rbp
    323b:	41 54                	push   %r12
    323d:	53                   	push   %rbx
    323e:	48 83 ec 30          	sub    $0x30,%rsp
    3242:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
    3246:	48 89 75 d0          	mov    %rsi,-0x30(%rbp)
    324a:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
    324e:	48 89 4d c0          	mov    %rcx,-0x40(%rbp)
    3252:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    3259:	00 00 
    325b:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    325f:	31 c0                	xor    %eax,%eax
      _ValueType __value = _GLIBCXX_MOVE(*__result);
    3261:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    3265:	48 89 c7             	mov    %rax,%rdi
    3268:	e8 3f fd ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    326d:	48 89 c7             	mov    %rax,%rdi
    3270:	e8 48 fd ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    3275:	0f b6 00             	movzbl (%rax),%eax
    3278:	88 45 e7             	mov    %al,-0x19(%rbp)
      *__result = _GLIBCXX_MOVE(*__first);
    327b:	48 8d 45 d8          	lea    -0x28(%rbp),%rax
    327f:	48 89 c7             	mov    %rax,%rdi
    3282:	e8 25 fd ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    3287:	48 89 c7             	mov    %rax,%rdi
    328a:	e8 2e fd ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    328f:	48 89 c3             	mov    %rax,%rbx
    3292:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    3296:	48 89 c7             	mov    %rax,%rdi
    3299:	e8 0e fd ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    329e:	48 89 c2             	mov    %rax,%rdx
    32a1:	0f b6 03             	movzbl (%rbx),%eax
    32a4:	88 02                	mov    %al,(%rdx)
			 _GLIBCXX_MOVE(__value), __comp);
    32a6:	48 8d 45 e7          	lea    -0x19(%rbp),%rax
    32aa:	48 89 c7             	mov    %rax,%rdi
    32ad:	e8 0b fd ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
      std::__adjust_heap(__first, _DistanceType(0),
    32b2:	0f b6 00             	movzbl (%rax),%eax
    32b5:	0f be d8             	movsbl %al,%ebx
			 _DistanceType(__last - __first),
    32b8:	48 8d 55 d8          	lea    -0x28(%rbp),%rdx
    32bc:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
    32c0:	48 89 d6             	mov    %rdx,%rsi
    32c3:	48 89 c7             	mov    %rax,%rdi
    32c6:	e8 bc f3 ff ff       	callq  2687 <_ZN9__gnu_cxxmiIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKSB_SE_>
    32cb:	48 89 c2             	mov    %rax,%rdx
      std::__adjust_heap(__first, _DistanceType(0),
    32ce:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    32d2:	48 83 ec 08          	sub    $0x8,%rsp
    32d6:	41 54                	push   %r12
    32d8:	89 d9                	mov    %ebx,%ecx
    32da:	be 00 00 00 00       	mov    $0x0,%esi
    32df:	48 89 c7             	mov    %rax,%rdi
    32e2:	e8 6c 01 00 00       	callq  3453 <_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops15_Iter_less_iterEEvT_T0_SD_T1_T2_>
    32e7:	48 83 c4 10          	add    $0x10,%rsp
    }
    32eb:	90                   	nop
    32ec:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    32f0:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    32f7:	00 00 
    32f9:	74 05                	je     3300 <_ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEENS0_5__ops15_Iter_less_iterEEvT_SC_SC_RT0_+0xc9>
    32fb:	e8 40 e0 ff ff       	callq  1340 <__stack_chk_fail@plt>
    3300:	48 8d 65 f0          	lea    -0x10(%rbp),%rsp
    3304:	5b                   	pop    %rbx
    3305:	41 5c                	pop    %r12
    3307:	5d                   	pop    %rbp
    3308:	c3                   	retq   
    3309:	90                   	nop

000000000000330a <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEmmEv>:
      operator--() _GLIBCXX_NOEXCEPT
    330a:	55                   	push   %rbp
    330b:	48 89 e5             	mov    %rsp,%rbp
    330e:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
	--_M_current;
    3312:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    3316:	48 8b 00             	mov    (%rax),%rax
    3319:	48 8d 50 ff          	lea    -0x1(%rax),%rdx
    331d:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    3321:	48 89 10             	mov    %rdx,(%rax)
	return *this;
    3324:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
      }
    3328:	5d                   	pop    %rbp
    3329:	c3                   	retq   

000000000000332a <_ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_EvT_T0_>:
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    332a:	55                   	push   %rbp
    332b:	48 89 e5             	mov    %rsp,%rbp
    332e:	53                   	push   %rbx
    332f:	48 83 ec 18          	sub    $0x18,%rsp
    3333:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    3337:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
      swap(*__a, *__b);
    333b:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
    333f:	48 89 c7             	mov    %rax,%rdi
    3342:	e8 65 fc ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    3347:	48 89 c3             	mov    %rax,%rbx
    334a:	48 8d 45 e8          	lea    -0x18(%rbp),%rax
    334e:	48 89 c7             	mov    %rax,%rdi
    3351:	e8 56 fc ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    3356:	48 89 de             	mov    %rbx,%rsi
    3359:	48 89 c7             	mov    %rax,%rdi
    335c:	e8 13 03 00 00       	callq  3674 <_ZSt4swapIcENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_>
    }
    3361:	90                   	nop
    3362:	48 83 c4 18          	add    $0x18,%rsp
    3366:	5b                   	pop    %rbx
    3367:	5d                   	pop    %rbp
    3368:	c3                   	retq   

0000000000003369 <_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEET_SA_>:

  // Fallback implementation of the function in bits/stl_iterator.h used to
  // remove the move_iterator wrapper.
  template<typename _Iterator>
    inline _Iterator
    __miter_base(_Iterator __it)
    3369:	55                   	push   %rbp
    336a:	48 89 e5             	mov    %rsp,%rbp
    336d:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    { return __it; }
    3371:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    3375:	5d                   	pop    %rbp
    3376:	c3                   	retq   

0000000000003377 <_ZSt23__copy_move_backward_a2ILb1EN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_ET1_T0_SB_SA_>:
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    3377:	55                   	push   %rbp
    3378:	48 89 e5             	mov    %rsp,%rbp
    337b:	41 54                	push   %r12
    337d:	53                   	push   %rbx
    337e:	48 83 ec 40          	sub    $0x40,%rsp
    3382:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
    3386:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
    338a:	48 89 55 b8          	mov    %rdx,-0x48(%rbp)
    338e:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    3395:	00 00 
    3397:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    339b:	31 c0                	xor    %eax,%eax
		  (std::__niter_base(__first), std::__niter_base(__last),
    339d:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
    33a1:	48 89 c7             	mov    %rax,%rdi
    33a4:	e8 3d 03 00 00       	callq  36e6 <_ZSt12__niter_baseIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_N9__gnu_cxx17__normal_iteratorIS7_T0_EE>
    33a9:	49 89 c4             	mov    %rax,%r12
    33ac:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
    33b0:	48 89 c7             	mov    %rax,%rdi
    33b3:	e8 2e 03 00 00       	callq  36e6 <_ZSt12__niter_baseIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_N9__gnu_cxx17__normal_iteratorIS7_T0_EE>
    33b8:	48 89 c3             	mov    %rax,%rbx
    33bb:	48 8b 45 c8          	mov    -0x38(%rbp),%rax
    33bf:	48 89 c7             	mov    %rax,%rdi
    33c2:	e8 1f 03 00 00       	callq  36e6 <_ZSt12__niter_baseIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_N9__gnu_cxx17__normal_iteratorIS7_T0_EE>
    33c7:	4c 89 e2             	mov    %r12,%rdx
    33ca:	48 89 de             	mov    %rbx,%rsi
    33cd:	48 89 c7             	mov    %rax,%rdi
    33d0:	e8 2e 03 00 00       	callq  3703 <_ZSt22__copy_move_backward_aILb1EPcS0_ET1_T0_S2_S1_>
    33d5:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
		   std::__niter_base(__result)));
    33d9:	48 8d 55 d8          	lea    -0x28(%rbp),%rdx
    33dd:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
    33e1:	48 89 d6             	mov    %rdx,%rsi
    33e4:	48 89 c7             	mov    %rax,%rdi
    33e7:	e8 b6 f1 ff ff       	callq  25a2 <_ZN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC1ERKS1_>
    33ec:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    }
    33f0:	48 8b 4d e8          	mov    -0x18(%rbp),%rcx
    33f4:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
    33fb:	00 00 
    33fd:	74 05                	je     3404 <_ZSt23__copy_move_backward_a2ILb1EN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEES9_ET1_T0_SB_SA_+0x8d>
    33ff:	e8 3c df ff ff       	callq  1340 <__stack_chk_fail@plt>
    3404:	48 83 c4 40          	add    $0x40,%rsp
    3408:	5b                   	pop    %rbx
    3409:	41 5c                	pop    %r12
    340b:	5d                   	pop    %rbp
    340c:	c3                   	retq   
    340d:	90                   	nop

000000000000340e <_ZNK9__gnu_cxx5__ops14_Val_less_iterclIcNS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEEEbRT_T0_>:
      operator()(_Value& __val, _Iterator __it) const
    340e:	55                   	push   %rbp
    340f:	48 89 e5             	mov    %rsp,%rbp
    3412:	53                   	push   %rbx
    3413:	48 83 ec 28          	sub    $0x28,%rsp
    3417:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    341b:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    341f:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
      { return __val < *__it; }
    3423:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    3427:	0f b6 18             	movzbl (%rax),%ebx
    342a:	48 8d 45 d8          	lea    -0x28(%rbp),%rax
    342e:	48 89 c7             	mov    %rax,%rdi
    3431:	e8 76 fb ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    3436:	0f b6 00             	movzbl (%rax),%eax
    3439:	38 c3                	cmp    %al,%bl
    343b:	0f 9c c0             	setl   %al
    343e:	48 83 c4 28          	add    $0x28,%rsp
    3442:	5b                   	pop    %rbx
    3443:	5d                   	pop    %rbp
    3444:	c3                   	retq   

0000000000003445 <_ZSt4moveIRN9__gnu_cxx5__ops15_Iter_less_iterEEONSt16remove_referenceIT_E4typeEOS5_>:
    move(_Tp&& __t) noexcept
    3445:	55                   	push   %rbp
    3446:	48 89 e5             	mov    %rsp,%rbp
    3449:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    { return static_cast<typename std::remove_reference<_Tp>::type&&>(__t); }
    344d:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    3451:	5d                   	pop    %rbp
    3452:	c3                   	retq   

0000000000003453 <_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops15_Iter_less_iterEEvT_T0_SD_T1_T2_>:
    __adjust_heap(_RandomAccessIterator __first, _Distance __holeIndex,
    3453:	55                   	push   %rbp
    3454:	48 89 e5             	mov    %rsp,%rbp
    3457:	41 54                	push   %r12
    3459:	53                   	push   %rbx
    345a:	48 83 ec 50          	sub    $0x50,%rsp
    345e:	48 89 7d b8          	mov    %rdi,-0x48(%rbp)
    3462:	48 89 75 b0          	mov    %rsi,-0x50(%rbp)
    3466:	48 89 55 a8          	mov    %rdx,-0x58(%rbp)
    346a:	89 c8                	mov    %ecx,%eax
    346c:	88 45 a4             	mov    %al,-0x5c(%rbp)
    346f:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    3476:	00 00 
    3478:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    347c:	31 c0                	xor    %eax,%eax
      const _Distance __topIndex = __holeIndex;
    347e:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
    3482:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
      _Distance __secondChild = __holeIndex;
    3486:	48 8b 45 b0          	mov    -0x50(%rbp),%rax
    348a:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
      while (__secondChild < (__len - 1) / 2)
    348e:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
    3492:	48 83 e8 01          	sub    $0x1,%rax
    3496:	48 89 c2             	mov    %rax,%rdx
    3499:	48 c1 ea 3f          	shr    $0x3f,%rdx
    349d:	48 01 d0             	add    %rdx,%rax
    34a0:	48 d1 f8             	sar    %rax
    34a3:	48 39 45 d8          	cmp    %rax,-0x28(%rbp)
    34a7:	0f 8d ba 00 00 00    	jge    3567 <_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops15_Iter_less_iterEEvT_T0_SD_T1_T2_+0x114>
	  __secondChild = 2 * (__secondChild + 1);
    34ad:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    34b1:	48 83 c0 01          	add    $0x1,%rax
    34b5:	48 01 c0             	add    %rax,%rax
    34b8:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
	  if (__comp(__first + __secondChild,
    34bc:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    34c0:	48 8d 50 ff          	lea    -0x1(%rax),%rdx
    34c4:	48 8d 45 b8          	lea    -0x48(%rbp),%rax
    34c8:	48 89 d6             	mov    %rdx,%rsi
    34cb:	48 89 c7             	mov    %rax,%rdi
    34ce:	e8 d9 f4 ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    34d3:	48 89 c3             	mov    %rax,%rbx
    34d6:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
    34da:	48 8d 45 b8          	lea    -0x48(%rbp),%rax
    34de:	48 89 d6             	mov    %rdx,%rsi
    34e1:	48 89 c7             	mov    %rax,%rdi
    34e4:	e8 c3 f4 ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    34e9:	48 89 da             	mov    %rbx,%rdx
    34ec:	48 89 c6             	mov    %rax,%rsi
    34ef:	48 8d 7d 10          	lea    0x10(%rbp),%rdi
    34f3:	e8 74 fa ff ff       	callq  2f6c <_ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEESB_EEbT_T0_>
    34f8:	84 c0                	test   %al,%al
    34fa:	74 05                	je     3501 <_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops15_Iter_less_iterEEvT_T0_SD_T1_T2_+0xae>
	    __secondChild--;
    34fc:	48 83 6d d8 01       	subq   $0x1,-0x28(%rbp)
	  *(__first + __holeIndex) = _GLIBCXX_MOVE(*(__first + __secondChild));
    3501:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
    3505:	48 8d 45 b8          	lea    -0x48(%rbp),%rax
    3509:	48 89 d6             	mov    %rdx,%rsi
    350c:	48 89 c7             	mov    %rax,%rdi
    350f:	e8 98 f4 ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    3514:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    3518:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
    351c:	48 89 c7             	mov    %rax,%rdi
    351f:	e8 88 fa ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    3524:	48 89 c7             	mov    %rax,%rdi
    3527:	e8 91 fa ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    352c:	48 89 c3             	mov    %rax,%rbx
    352f:	48 8b 55 b0          	mov    -0x50(%rbp),%rdx
    3533:	48 8d 45 b8          	lea    -0x48(%rbp),%rax
    3537:	48 89 d6             	mov    %rdx,%rsi
    353a:	48 89 c7             	mov    %rax,%rdi
    353d:	e8 6a f4 ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    3542:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
    3546:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    354a:	48 89 c7             	mov    %rax,%rdi
    354d:	e8 5a fa ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    3552:	48 89 c2             	mov    %rax,%rdx
    3555:	0f b6 03             	movzbl (%rbx),%eax
    3558:	88 02                	mov    %al,(%rdx)
	  __holeIndex = __secondChild;
    355a:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    355e:	48 89 45 b0          	mov    %rax,-0x50(%rbp)
      while (__secondChild < (__len - 1) / 2)
    3562:	e9 27 ff ff ff       	jmpq   348e <_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops15_Iter_less_iterEEvT_T0_SD_T1_T2_+0x3b>
      if ((__len & 1) == 0 && __secondChild == (__len - 2) / 2)
    3567:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
    356b:	83 e0 01             	and    $0x1,%eax
    356e:	48 85 c0             	test   %rax,%rax
    3571:	0f 85 93 00 00 00    	jne    360a <_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops15_Iter_less_iterEEvT_T0_SD_T1_T2_+0x1b7>
    3577:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
    357b:	48 83 e8 02          	sub    $0x2,%rax
    357f:	48 89 c2             	mov    %rax,%rdx
    3582:	48 c1 ea 3f          	shr    $0x3f,%rdx
    3586:	48 01 d0             	add    %rdx,%rax
    3589:	48 d1 f8             	sar    %rax
    358c:	48 39 45 d8          	cmp    %rax,-0x28(%rbp)
    3590:	75 78                	jne    360a <_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops15_Iter_less_iterEEvT_T0_SD_T1_T2_+0x1b7>
	  __secondChild = 2 * (__secondChild + 1);
    3592:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    3596:	48 83 c0 01          	add    $0x1,%rax
    359a:	48 01 c0             	add    %rax,%rax
    359d:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
	  *(__first + __holeIndex) = _GLIBCXX_MOVE(*(__first
    35a1:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    35a5:	48 8d 50 ff          	lea    -0x1(%rax),%rdx
    35a9:	48 8d 45 b8          	lea    -0x48(%rbp),%rax
    35ad:	48 89 d6             	mov    %rdx,%rsi
    35b0:	48 89 c7             	mov    %rax,%rdi
    35b3:	e8 f4 f3 ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    35b8:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    35bc:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
    35c0:	48 89 c7             	mov    %rax,%rdi
    35c3:	e8 e4 f9 ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    35c8:	48 89 c7             	mov    %rax,%rdi
    35cb:	e8 ed f9 ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    35d0:	48 89 c3             	mov    %rax,%rbx
    35d3:	48 8b 55 b0          	mov    -0x50(%rbp),%rdx
    35d7:	48 8d 45 b8          	lea    -0x48(%rbp),%rax
    35db:	48 89 d6             	mov    %rdx,%rsi
    35de:	48 89 c7             	mov    %rax,%rdi
    35e1:	e8 c6 f3 ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    35e6:	48 89 45 c8          	mov    %rax,-0x38(%rbp)
    35ea:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    35ee:	48 89 c7             	mov    %rax,%rdi
    35f1:	e8 b6 f9 ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    35f6:	48 89 c2             	mov    %rax,%rdx
    35f9:	0f b6 03             	movzbl (%rbx),%eax
    35fc:	88 02                	mov    %al,(%rdx)
	  __holeIndex = __secondChild - 1;
    35fe:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    3602:	48 83 e8 01          	sub    $0x1,%rax
    3606:	48 89 45 b0          	mov    %rax,-0x50(%rbp)
	__cmp(_GLIBCXX_MOVE(__comp));
    360a:	48 8d 7d 10          	lea    0x10(%rbp),%rdi
    360e:	e8 32 fe ff ff       	callq  3445 <_ZSt4moveIRN9__gnu_cxx5__ops15_Iter_less_iterEEONSt16remove_referenceIT_E4typeEOS5_>
    3613:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
    3617:	48 83 ec 08          	sub    $0x8,%rsp
    361b:	41 54                	push   %r12
    361d:	48 89 c7             	mov    %rax,%rdi
    3620:	e8 2d ee ff ff       	callq  2452 <_ZN9__gnu_cxx5__ops14_Iter_less_valC1ENS0_15_Iter_less_iterE>
    3625:	48 83 c4 10          	add    $0x10,%rsp
		       _GLIBCXX_MOVE(__value), __cmp);
    3629:	48 8d 45 a4          	lea    -0x5c(%rbp),%rax
    362d:	48 89 c7             	mov    %rax,%rdi
    3630:	e8 88 f9 ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
      std::__push_heap(__first, __holeIndex, __topIndex,
    3635:	0f b6 00             	movzbl (%rax),%eax
    3638:	0f be c8             	movsbl %al,%ecx
    363b:	48 8d 7d d0          	lea    -0x30(%rbp),%rdi
    363f:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    3643:	48 8b 75 b0          	mov    -0x50(%rbp),%rsi
    3647:	48 8b 45 b8          	mov    -0x48(%rbp),%rax
    364b:	49 89 f8             	mov    %rdi,%r8
    364e:	48 89 c7             	mov    %rax,%rdi
    3651:	e8 de 00 00 00       	callq  3734 <_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops14_Iter_less_valEEvT_T0_SD_T1_RT2_>
    }
    3656:	90                   	nop
    3657:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    365b:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    3662:	00 00 
    3664:	74 05                	je     366b <_ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops15_Iter_less_iterEEvT_T0_SD_T1_T2_+0x218>
    3666:	e8 d5 dc ff ff       	callq  1340 <__stack_chk_fail@plt>
    366b:	48 8d 65 f0          	lea    -0x10(%rbp),%rsp
    366f:	5b                   	pop    %rbx
    3670:	41 5c                	pop    %r12
    3672:	5d                   	pop    %rbp
    3673:	c3                   	retq   

0000000000003674 <_ZSt4swapIcENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_>:
    inline
#if __cplusplus >= 201103L
    typename enable_if<__and_<__not_<__is_tuple_like<_Tp>>,
			      is_move_constructible<_Tp>,
			      is_move_assignable<_Tp>>::value>::type
    swap(_Tp& __a, _Tp& __b)
    3674:	55                   	push   %rbp
    3675:	48 89 e5             	mov    %rsp,%rbp
    3678:	48 83 ec 20          	sub    $0x20,%rsp
    367c:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    3680:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    3684:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    368b:	00 00 
    368d:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    3691:	31 c0                	xor    %eax,%eax
#endif
    {
      // concept requirements
      __glibcxx_function_requires(_SGIAssignableConcept<_Tp>)

      _Tp __tmp = _GLIBCXX_MOVE(__a);
    3693:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    3697:	48 89 c7             	mov    %rax,%rdi
    369a:	e8 1e f9 ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    369f:	0f b6 00             	movzbl (%rax),%eax
    36a2:	88 45 f7             	mov    %al,-0x9(%rbp)
      __a = _GLIBCXX_MOVE(__b);
    36a5:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    36a9:	48 89 c7             	mov    %rax,%rdi
    36ac:	e8 0c f9 ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    36b1:	0f b6 10             	movzbl (%rax),%edx
    36b4:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    36b8:	88 10                	mov    %dl,(%rax)
      __b = _GLIBCXX_MOVE(__tmp);
    36ba:	48 8d 45 f7          	lea    -0x9(%rbp),%rax
    36be:	48 89 c7             	mov    %rax,%rdi
    36c1:	e8 f7 f8 ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    36c6:	0f b6 10             	movzbl (%rax),%edx
    36c9:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    36cd:	88 10                	mov    %dl,(%rax)
    }
    36cf:	90                   	nop
    36d0:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    36d4:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    36db:	00 00 
    36dd:	74 05                	je     36e4 <_ZSt4swapIcENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_+0x70>
    36df:	e8 5c dc ff ff       	callq  1340 <__stack_chk_fail@plt>
    36e4:	c9                   	leaveq 
    36e5:	c3                   	retq   

00000000000036e6 <_ZSt12__niter_baseIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_N9__gnu_cxx17__normal_iteratorIS7_T0_EE>:
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  template<typename _Iterator, typename _Container>
    _Iterator
    __niter_base(__gnu_cxx::__normal_iterator<_Iterator, _Container> __it)
    36e6:	55                   	push   %rbp
    36e7:	48 89 e5             	mov    %rsp,%rbp
    36ea:	48 83 ec 10          	sub    $0x10,%rsp
    36ee:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    { return __it.base(); }
    36f2:	48 8d 45 f8          	lea    -0x8(%rbp),%rax
    36f6:	48 89 c7             	mov    %rax,%rdi
    36f9:	e8 62 f1 ff ff       	callq  2860 <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE4baseEv>
    36fe:	48 8b 00             	mov    (%rax),%rax
    3701:	c9                   	leaveq 
    3702:	c3                   	retq   

0000000000003703 <_ZSt22__copy_move_backward_aILb1EPcS0_ET1_T0_S2_S1_>:
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    3703:	55                   	push   %rbp
    3704:	48 89 e5             	mov    %rsp,%rbp
    3707:	48 83 ec 30          	sub    $0x30,%rsp
    370b:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    370f:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    3713:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
      const bool __simple = (__is_trivial(_ValueType1)
    3717:	c6 45 ff 01          	movb   $0x1,-0x1(%rbp)
								 __result);
    371b:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
    371f:	48 8b 4d e0          	mov    -0x20(%rbp),%rcx
    3723:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    3727:	48 89 ce             	mov    %rcx,%rsi
    372a:	48 89 c7             	mov    %rax,%rdi
    372d:	e8 64 01 00 00       	callq  3896 <_ZNSt20__copy_move_backwardILb1ELb1ESt26random_access_iterator_tagE13__copy_move_bIcEEPT_PKS3_S6_S4_>
    }
    3732:	c9                   	leaveq 
    3733:	c3                   	retq   

0000000000003734 <_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops14_Iter_less_valEEvT_T0_SD_T1_RT2_>:
    __push_heap(_RandomAccessIterator __first,
    3734:	55                   	push   %rbp
    3735:	48 89 e5             	mov    %rsp,%rbp
    3738:	53                   	push   %rbx
    3739:	48 83 ec 58          	sub    $0x58,%rsp
    373d:	48 89 7d c8          	mov    %rdi,-0x38(%rbp)
    3741:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
    3745:	48 89 55 b8          	mov    %rdx,-0x48(%rbp)
    3749:	89 c8                	mov    %ecx,%eax
    374b:	4c 89 45 a8          	mov    %r8,-0x58(%rbp)
    374f:	88 45 b4             	mov    %al,-0x4c(%rbp)
    3752:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    3759:	00 00 
    375b:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    375f:	31 c0                	xor    %eax,%eax
      _Distance __parent = (__holeIndex - 1) / 2;
    3761:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
    3765:	48 83 e8 01          	sub    $0x1,%rax
    3769:	48 89 c2             	mov    %rax,%rdx
    376c:	48 c1 ea 3f          	shr    $0x3f,%rdx
    3770:	48 01 d0             	add    %rdx,%rax
    3773:	48 d1 f8             	sar    %rax
    3776:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
      while (__holeIndex > __topIndex && __comp(__first + __parent, __value))
    377a:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
    377e:	48 3b 45 b8          	cmp    -0x48(%rbp),%rax
    3782:	7e 34                	jle    37b8 <_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops14_Iter_less_valEEvT_T0_SD_T1_RT2_+0x84>
    3784:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    3788:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    378c:	48 89 d6             	mov    %rdx,%rsi
    378f:	48 89 c7             	mov    %rax,%rdi
    3792:	e8 15 f2 ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    3797:	48 89 c1             	mov    %rax,%rcx
    379a:	48 8d 55 b4          	lea    -0x4c(%rbp),%rdx
    379e:	48 8b 45 a8          	mov    -0x58(%rbp),%rax
    37a2:	48 89 ce             	mov    %rcx,%rsi
    37a5:	48 89 c7             	mov    %rax,%rdi
    37a8:	e8 4d 01 00 00       	callq  38fa <_ZNK9__gnu_cxx5__ops14_Iter_less_valclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEcEEbT_RT0_>
    37ad:	84 c0                	test   %al,%al
    37af:	74 07                	je     37b8 <_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops14_Iter_less_valEEvT_T0_SD_T1_RT2_+0x84>
    37b1:	b8 01 00 00 00       	mov    $0x1,%eax
    37b6:	eb 05                	jmp    37bd <_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops14_Iter_less_valEEvT_T0_SD_T1_RT2_+0x89>
    37b8:	b8 00 00 00 00       	mov    $0x0,%eax
    37bd:	84 c0                	test   %al,%al
    37bf:	74 7f                	je     3840 <_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops14_Iter_less_valEEvT_T0_SD_T1_RT2_+0x10c>
	  *(__first + __holeIndex) = _GLIBCXX_MOVE(*(__first + __parent));
    37c1:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    37c5:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    37c9:	48 89 d6             	mov    %rdx,%rsi
    37cc:	48 89 c7             	mov    %rax,%rdi
    37cf:	e8 d8 f1 ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    37d4:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    37d8:	48 8d 45 d8          	lea    -0x28(%rbp),%rax
    37dc:	48 89 c7             	mov    %rax,%rdi
    37df:	e8 c8 f7 ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    37e4:	48 89 c7             	mov    %rax,%rdi
    37e7:	e8 d1 f7 ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    37ec:	48 89 c3             	mov    %rax,%rbx
    37ef:	48 8b 55 c0          	mov    -0x40(%rbp),%rdx
    37f3:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    37f7:	48 89 d6             	mov    %rdx,%rsi
    37fa:	48 89 c7             	mov    %rax,%rdi
    37fd:	e8 aa f1 ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    3802:	48 89 45 d0          	mov    %rax,-0x30(%rbp)
    3806:	48 8d 45 d0          	lea    -0x30(%rbp),%rax
    380a:	48 89 c7             	mov    %rax,%rdi
    380d:	e8 9a f7 ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    3812:	48 89 c2             	mov    %rax,%rdx
    3815:	0f b6 03             	movzbl (%rbx),%eax
    3818:	88 02                	mov    %al,(%rdx)
	  __holeIndex = __parent;
    381a:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    381e:	48 89 45 c0          	mov    %rax,-0x40(%rbp)
	  __parent = (__holeIndex - 1) / 2;
    3822:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
    3826:	48 83 e8 01          	sub    $0x1,%rax
    382a:	48 89 c2             	mov    %rax,%rdx
    382d:	48 c1 ea 3f          	shr    $0x3f,%rdx
    3831:	48 01 d0             	add    %rdx,%rax
    3834:	48 d1 f8             	sar    %rax
    3837:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
      while (__holeIndex > __topIndex && __comp(__first + __parent, __value))
    383b:	e9 3a ff ff ff       	jmpq   377a <_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops14_Iter_less_valEEvT_T0_SD_T1_RT2_+0x46>
      *(__first + __holeIndex) = _GLIBCXX_MOVE(__value);
    3840:	48 8d 45 b4          	lea    -0x4c(%rbp),%rax
    3844:	48 89 c7             	mov    %rax,%rdi
    3847:	e8 71 f7 ff ff       	callq  2fbd <_ZSt4moveIRcEONSt16remove_referenceIT_E4typeEOS2_>
    384c:	48 89 c3             	mov    %rax,%rbx
    384f:	48 8b 55 c0          	mov    -0x40(%rbp),%rdx
    3853:	48 8d 45 c8          	lea    -0x38(%rbp),%rax
    3857:	48 89 d6             	mov    %rdx,%rsi
    385a:	48 89 c7             	mov    %rax,%rdi
    385d:	e8 4a f1 ff ff       	callq  29ac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEplEl>
    3862:	48 89 45 d8          	mov    %rax,-0x28(%rbp)
    3866:	48 8d 45 d8          	lea    -0x28(%rbp),%rax
    386a:	48 89 c7             	mov    %rax,%rdi
    386d:	e8 3a f7 ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    3872:	48 89 c2             	mov    %rax,%rdx
    3875:	0f b6 03             	movzbl (%rbx),%eax
    3878:	88 02                	mov    %al,(%rdx)
    }
    387a:	90                   	nop
    387b:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    387f:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    3886:	00 00 
    3888:	74 05                	je     388f <_ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEElcNS0_5__ops14_Iter_less_valEEvT_T0_SD_T1_RT2_+0x15b>
    388a:	e8 b1 da ff ff       	callq  1340 <__stack_chk_fail@plt>
    388f:	48 83 c4 58          	add    $0x58,%rsp
    3893:	5b                   	pop    %rbx
    3894:	5d                   	pop    %rbp
    3895:	c3                   	retq   

0000000000003896 <_ZNSt20__copy_move_backwardILb1ELb1ESt26random_access_iterator_tagE13__copy_move_bIcEEPT_PKS3_S6_S4_>:
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
    3896:	55                   	push   %rbp
    3897:	48 89 e5             	mov    %rsp,%rbp
    389a:	48 83 ec 30          	sub    $0x30,%rsp
    389e:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    38a2:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    38a6:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
	  const ptrdiff_t _Num = __last - __first;
    38aa:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
    38ae:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    38b2:	48 29 c2             	sub    %rax,%rdx
    38b5:	48 89 d0             	mov    %rdx,%rax
    38b8:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
	  if (_Num)
    38bc:	48 83 7d f8 00       	cmpq   $0x0,-0x8(%rbp)
    38c1:	74 24                	je     38e7 <_ZNSt20__copy_move_backwardILb1ELb1ESt26random_access_iterator_tagE13__copy_move_bIcEEPT_PKS3_S6_S4_+0x51>
	    __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
    38c3:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
    38c7:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    38cb:	48 f7 d8             	neg    %rax
    38ce:	48 89 c1             	mov    %rax,%rcx
    38d1:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    38d5:	48 01 c1             	add    %rax,%rcx
    38d8:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    38dc:	48 89 c6             	mov    %rax,%rsi
    38df:	48 89 cf             	mov    %rcx,%rdi
    38e2:	e8 e9 da ff ff       	callq  13d0 <memmove@plt>
	  return __result - _Num;
    38e7:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    38eb:	48 f7 d8             	neg    %rax
    38ee:	48 89 c2             	mov    %rax,%rdx
    38f1:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
    38f5:	48 01 d0             	add    %rdx,%rax
	}
    38f8:	c9                   	leaveq 
    38f9:	c3                   	retq   

00000000000038fa <_ZNK9__gnu_cxx5__ops14_Iter_less_valclINS_17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEcEEbT_RT0_>:
      operator()(_Iterator __it, _Value& __val) const
    38fa:	55                   	push   %rbp
    38fb:	48 89 e5             	mov    %rsp,%rbp
    38fe:	48 83 ec 20          	sub    $0x20,%rsp
    3902:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    3906:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
    390a:	48 89 55 e8          	mov    %rdx,-0x18(%rbp)
      { return *__it < __val; }
    390e:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
    3912:	48 89 c7             	mov    %rax,%rdi
    3915:	e8 92 f6 ff ff       	callq  2fac <_ZNK9__gnu_cxx17__normal_iteratorIPcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEdeEv>
    391a:	0f b6 10             	movzbl (%rax),%edx
    391d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    3921:	0f b6 00             	movzbl (%rax),%eax
    3924:	38 c2                	cmp    %al,%dl
    3926:	0f 9c c0             	setl   %al
    3929:	c9                   	leaveq 
    392a:	c3                   	retq   
    392b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000003930 <__libc_csu_init>:
    3930:	41 57                	push   %r15
    3932:	41 56                	push   %r14
    3934:	49 89 d7             	mov    %rdx,%r15
    3937:	41 55                	push   %r13
    3939:	41 54                	push   %r12
    393b:	4c 8d 25 4e 13 20 00 	lea    0x20134e(%rip),%r12        # 204c90 <__frame_dummy_init_array_entry>
    3942:	55                   	push   %rbp
    3943:	48 8d 2d 56 13 20 00 	lea    0x201356(%rip),%rbp        # 204ca0 <__init_array_end>
    394a:	53                   	push   %rbx
    394b:	41 89 fd             	mov    %edi,%r13d
    394e:	49 89 f6             	mov    %rsi,%r14
    3951:	4c 29 e5             	sub    %r12,%rbp
    3954:	48 83 ec 08          	sub    $0x8,%rsp
    3958:	48 c1 fd 03          	sar    $0x3,%rbp
    395c:	e8 af d8 ff ff       	callq  1210 <_init>
    3961:	48 85 ed             	test   %rbp,%rbp
    3964:	74 20                	je     3986 <__libc_csu_init+0x56>
    3966:	31 db                	xor    %ebx,%ebx
    3968:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    396f:	00 
    3970:	4c 89 fa             	mov    %r15,%rdx
    3973:	4c 89 f6             	mov    %r14,%rsi
    3976:	44 89 ef             	mov    %r13d,%edi
    3979:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
    397d:	48 83 c3 01          	add    $0x1,%rbx
    3981:	48 39 dd             	cmp    %rbx,%rbp
    3984:	75 ea                	jne    3970 <__libc_csu_init+0x40>
    3986:	48 83 c4 08          	add    $0x8,%rsp
    398a:	5b                   	pop    %rbx
    398b:	5d                   	pop    %rbp
    398c:	41 5c                	pop    %r12
    398e:	41 5d                	pop    %r13
    3990:	41 5e                	pop    %r14
    3992:	41 5f                	pop    %r15
    3994:	c3                   	retq   
    3995:	90                   	nop
    3996:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    399d:	00 00 00 

00000000000039a0 <__libc_csu_fini>:
    39a0:	f3 c3                	repz retq 

Disassembly of section .fini:

00000000000039a4 <_fini>:
    39a4:	48 83 ec 08          	sub    $0x8,%rsp
    39a8:	48 83 c4 08          	add    $0x8,%rsp
    39ac:	c3                   	retq   
