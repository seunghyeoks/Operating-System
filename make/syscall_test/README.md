## 첫번째 실습: Make 연습



## 두번째 실습: 시스템 콜 추가 및 설치

#### 1. 커널 다운로드

실습환경 : ARM64 Ubuntu 20.04, v5.15.~

1. su

2. cd /usr/src 

3. wget으로 최신 커널 다운로드

   - kernel.org의 tarball 링크, 작성 시점 기준 v5.15.158

4. tar xvf 로 압축해제

5. 해당폴더로 cd

   

#### 2. 시스템콜 추가

1. 아키텍쳐에 맞는 시스템콜 테이블 위치 확인

   > ARM64 - include/uapi/asm-generic/unistd.h
   > ARM32 - arch/arm/tools/syscall.tbl
   > x86 - arch/x86/syscalls/syscall_64.tbl

2. vi include/uapi/asm-generic/unistd.h 

   - 문법에 맞게 sys_hello 추가, 필요할 경우, 전체 개수 수정

3. vi include/linux/syscalls.h 

   - sys_hello 추가

4. vi kernel/hello.c 에서 시스템콜 동작 정의

5. vi kernel/Makefile에 hello.o 목적파일 추가

   

#### 3. Linux 컴파일 및 설치

1. 필요한 확장 설치
2. make localmodconfig
3. time make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu -j$(nproc)
4. time make modules 
5. make modules_install
6. make install
7. reboot
