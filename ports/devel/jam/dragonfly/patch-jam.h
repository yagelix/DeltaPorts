--- jam.h.orig	2004-06-23 17:45:36 UTC
+++ jam.h
@@ -227,7 +227,7 @@
 # define OSMINOR "OS=CYGWIN"
 # define OS_CYGWIN
 # endif
-# ifdef __FreeBSD__
+# if defined __FreeBSD__ || defined __DragonFly__
 # define OSMINOR "OS=FREEBSD"
 # define OS_FREEBSD
 # endif
