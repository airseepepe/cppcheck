// auto generated tests from cfg/qt.cfg
//
// Generated by command:
// ./generate_cfg_tests cfg/qt.cfg > generated-cfg-tests-qt.cpp
//
// Recommended cppcheck command line:
// $ cppcheck --enable=warning,information --inline-suppr --platform=unix64 generated-cfg-tests-qt.cpp
// => 'unmatched suppression' warnings are false negatives.
//

void test__connect__noreturn() {
  int x = 1;
  if (cond) { x=100; connect(arg1, arg2, arg3, arg4); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__connect__arg1__notnull() {
  const char *p = NULL;
  // cppcheck-suppress nullPointer
  connect(p, arg2, arg3, arg4);
}

void test__connect__arg1__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  connect(x, arg2, arg3, arg4);
}

void test__connect__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  connect(arg1, x, arg3, arg4);
}

void test__connect__arg3__notnull() {
  const char *p = NULL;
  // cppcheck-suppress nullPointer
  connect(arg1, arg2, p, arg4);
}

void test__connect__arg3__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  connect(arg1, arg2, x, arg4);
}

void test__connect__arg4__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  connect(arg1, arg2, arg3, x);
}

void test__disconnect__noreturn() {
  int x = 1;
  if (cond) { x=100; disconnect(arg1, arg2, arg3, arg4); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__disconnect__arg1__notnull() {
  const char *p = NULL;
  // cppcheck-suppress nullPointer
  disconnect(p, arg2, arg3, arg4);
}

void test__disconnect__arg1__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  disconnect(x, arg2, arg3, arg4);
}

void test__disconnect__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  disconnect(arg1, x, arg3, arg4);
}

void test__disconnect__arg3__notnull() {
  const char *p = NULL;
  // cppcheck-suppress nullPointer
  disconnect(arg1, arg2, p, arg4);
}

void test__disconnect__arg3__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  disconnect(arg1, arg2, x, arg4);
}

void test__disconnect__arg4__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  disconnect(arg1, arg2, arg3, x);
}

void test__tr__noreturn() {
  int x = 1;
  if (cond) { x=100; result = tr(arg1, arg2, arg3); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__tr__useretval() {
  // cppcheck-suppress ignoredReturnValue
  tr(arg1, arg2, arg3);
}

void test__tr__leakignore() {
  char *p = malloc(10); *p=0;
  result = tr(p, arg2, arg3);
  // cppcheck-suppress memleak
}

void test__tr__arg1__notnull() {
  const char *p = NULL;
  // cppcheck-suppress nullPointer
  result = tr(p, arg2, arg3);
}

void test__tr__arg1__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  result = tr(x, arg2, arg3);
}

void test__tr__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = tr(arg1, x, arg3);
}

void test__tr__arg3__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = tr(arg1, arg2, x);
}

void test__QObject__tr__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QObject::tr(arg1, arg2, arg3); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QObject__tr__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QObject::tr(arg1, arg2, arg3);
}

void test__QObject__tr__arg1__notnull() {
  const char *p = NULL;
  // cppcheck-suppress nullPointer
  result = QObject::tr(p, arg2, arg3);
}

void test__QObject__tr__arg1__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  result = QObject::tr(x, arg2, arg3);
}

void test__QObject__tr__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QObject::tr(arg1, x, arg3);
}

void test__QObject__tr__arg3__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QObject::tr(arg1, arg2, x);
}

void test__QSettings__setValue__noreturn() {
  int x = 1;
  if (cond) { x=100; QSettings::setValue(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QSettings__setValue__arg1__notnull() {
  const char *p = NULL;
  // cppcheck-suppress nullPointer
  QSettings::setValue(p, arg2);
}

void test__QSettings__setValue__arg1__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  QSettings::setValue(x, arg2);
}

void test__QSettings__setValue__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  QSettings::setValue(arg1, x);
}

void test__QSettings__value__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QSettings::value(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QSettings__value__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QSettings::value(arg1, arg2);
}

void test__QSettings__value__arg1__notnull() {
  const char *p = NULL;
  // cppcheck-suppress nullPointer
  result = QSettings::value(p, arg2);
}

void test__QSettings__value__arg1__notuninit() {
  int x[10];
  // cppcheck-suppress uninitvar
  result = QSettings::value(x, arg2);
}

void test__QSettings__value__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QSettings::value(arg1, x);
}

void test__QString__sprintf__noreturn() {
  int x = 1;
  if (cond) { x=100; QString::sprintf(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__sprintf__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  QString::sprintf(x);
}

void test__QString__asprintf__noreturn() {
  int x = 1;
  if (cond) { x=100; QString::asprintf(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__asprintf__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  QString::asprintf(x);
}

void test__QList__at__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::at(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__at__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::at(arg1);
}

void test__QList__at__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QList::at(x);
}

void test__QString__at__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::at(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__at__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::at(arg1);
}

void test__QString__at__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::at(x);
}

void test__QStringList__at__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::at(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__at__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::at(arg1);
}

void test__QStringList__at__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QStringList::at(x);
}

void test__QString__capacity__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::capacity(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__capacity__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::capacity();
}

void test__QList__begin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::begin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__begin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::begin();
}

void test__QList__end__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::end(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__end__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::end();
}

void test__QList__cbegin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::cbegin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__cbegin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::cbegin();
}

void test__QList__cend__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::cend(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__cend__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::cend();
}

void test__QList__constBegin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::constBegin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__constBegin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::constBegin();
}

void test__QList__constEnd__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::constEnd(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__constEnd__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::constEnd();
}

void test__QList__rbegin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::rbegin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__rbegin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::rbegin();
}

void test__QList__rend__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::rend(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__rend__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::rend();
}

void test__QList__crbegin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::crbegin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__crbegin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::crbegin();
}

void test__QList__crend__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::crend(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__crend__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::crend();
}

void test__QString__begin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::begin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__begin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::begin();
}

void test__QString__end__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::end(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__end__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::end();
}

void test__QString__cbegin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::cbegin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__cbegin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::cbegin();
}

void test__QString__cend__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::cend(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__cend__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::cend();
}

void test__QString__constBegin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::constBegin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__constBegin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::constBegin();
}

void test__QString__constEnd__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::constEnd(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__constEnd__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::constEnd();
}

void test__QString__rbegin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::rbegin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__rbegin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::rbegin();
}

void test__QString__rend__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::rend(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__rend__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::rend();
}

void test__QString__crbegin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::crbegin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__crbegin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::crbegin();
}

void test__QString__crend__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::crend(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__crend__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::crend();
}

void test__QStringList__begin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::begin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__begin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::begin();
}

void test__QStringList__end__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::end(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__end__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::end();
}

void test__QStringList__cbegin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::cbegin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__cbegin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::cbegin();
}

void test__QStringList__cend__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::cend(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__cend__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::cend();
}

void test__QStringList__constBegin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::constBegin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__constBegin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::constBegin();
}

void test__QStringList__constEnd__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::constEnd(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__constEnd__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::constEnd();
}

void test__QStringList__rbegin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::rbegin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__rbegin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::rbegin();
}

void test__QStringList__rend__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::rend(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__rend__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::rend();
}

void test__QStringList__crbegin__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::crbegin(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__crbegin__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::crbegin();
}

void test__QStringList__crend__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::crend(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__crend__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::crend();
}

void test__QString__chop__noreturn() {
  int x = 1;
  if (cond) { x=100; QString::chop(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__chop__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  QString::chop(x);
}

void test__QList__clear__noreturn() {
  int x = 1;
  if (cond) { x=100; QList::clear(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__clear__noreturn() {
  int x = 1;
  if (cond) { x=100; QString::clear(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__compare__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::compare(arg1, arg2, arg3); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__compare__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::compare(arg1, arg2, arg3);
}

void test__QString__compare__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::compare(x, arg2, arg3);
}

void test__QString__compare__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::compare(arg1, x, arg3);
}

void test__QString__compare__arg3__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::compare(arg1, arg2, x);
}

void test__QList__contains__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::contains(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__contains__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::contains(arg1);
}

void test__QList__contains__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QList::contains(x);
}

void test__QList__startsWith__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::startsWith(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__startsWith__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::startsWith(arg1);
}

void test__QList__startsWith__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QList::startsWith(x);
}

void test__QList__endsWith__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::endsWith(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__endsWith__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::endsWith(arg1);
}

void test__QList__endsWith__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QList::endsWith(x);
}

void test__QString__contains__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::contains(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__contains__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::contains(arg1, arg2);
}

void test__QString__contains__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::contains(x, arg2);
}

void test__QString__contains__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::contains(arg1, x);
}

void test__QString__startsWith__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::startsWith(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__startsWith__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::startsWith(arg1, arg2);
}

void test__QString__startsWith__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::startsWith(x, arg2);
}

void test__QString__startsWith__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::startsWith(arg1, x);
}

void test__QString__endsWith__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::endsWith(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__endsWith__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::endsWith(arg1, arg2);
}

void test__QString__endsWith__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::endsWith(x, arg2);
}

void test__QString__endsWith__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::endsWith(arg1, x);
}

void test__QStringList__contains__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::contains(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__contains__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::contains(arg1);
}

void test__QStringList__contains__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QStringList::contains(x);
}

void test__QStringList__startsWith__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::startsWith(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__startsWith__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::startsWith(arg1);
}

void test__QStringList__startsWith__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QStringList::startsWith(x);
}

void test__QStringList__endsWith__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::endsWith(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__endsWith__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::endsWith(arg1);
}

void test__QStringList__endsWith__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QStringList::endsWith(x);
}

void test__QList__count__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::count(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__count__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::count();
}

void test__QList__length__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::length(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__length__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::length();
}

void test__QList__size__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::size(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__size__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::size();
}

void test__QString__count__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::count(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__count__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::count();
}

void test__QString__length__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::length(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__length__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::length();
}

void test__QString__size__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::size(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__size__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::size();
}

void test__QStringList__count__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::count(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__count__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::count();
}

void test__QStringList__length__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::length(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__length__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::length();
}

void test__QStringList__size__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::size(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__size__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::size();
}

void test__QList__empty__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::empty(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__empty__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::empty();
}

void test__QList__isEmpty__QString__isEmpty__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::isEmpty::QString::isEmpty(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__isEmpty__QString__isEmpty__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::isEmpty::QString::isEmpty();
}

void test__QString__isNull__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::isNull(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__isNull__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::isNull();
}

void test__QStringList__empty__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::empty(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__empty__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::empty();
}

void test__QStringList__isEmpty____noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::isEmpty::(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__isEmpty____useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::isEmpty::();
}

void test__QString__fromStdString__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::fromStdString(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__fromStdString__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::fromStdString(arg1);
}

void test__QList__indexOf__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::indexOf(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__indexOf__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::indexOf(arg1);
}

void test__QList__indexOf__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QList::indexOf(x);
}

void test__QStringList__indexOf__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::indexOf(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__indexOf__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::indexOf(arg1);
}

void test__QStringList__indexOf__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QStringList::indexOf(x);
}

void test__QString__indexOf__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::indexOf(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__indexOf__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::indexOf();
}

void test__QString__isRightToLeft__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::isRightToLeft(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__isRightToLeft__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::isRightToLeft();
}

void test__QList__lastIndexOf__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::lastIndexOf(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__lastIndexOf__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::lastIndexOf(arg1, arg2);
}

void test__QList__lastIndexOf__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QList::lastIndexOf(x, arg2);
}

void test__QList__lastIndexOf__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QList::lastIndexOf(arg1, x);
}

void test__QStringList__lastIndexOf__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::lastIndexOf(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__lastIndexOf__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::lastIndexOf(arg1, arg2);
}

void test__QStringList__lastIndexOf__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QStringList::lastIndexOf(x, arg2);
}

void test__QStringList__lastIndexOf__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QStringList::lastIndexOf(arg1, x);
}

void test__QString__lastIndexOf__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::lastIndexOf(arg1, arg2, arg3); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__lastIndexOf__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::lastIndexOf(arg1, arg2, arg3);
}

void test__QString__lastIndexOf__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::lastIndexOf(x, arg2, arg3);
}

void test__QString__lastIndexOf__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::lastIndexOf(arg1, x, arg3);
}

void test__QString__lastIndexOf__arg3__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::lastIndexOf(arg1, arg2, x);
}

void test__QString__left__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::left(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__left__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::left(arg1);
}

void test__QString__left__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::left(x);
}

void test__QList__mid__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QList::mid(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QList__mid__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QList::mid(arg1, arg2);
}

void test__QList__mid__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QList::mid(x, arg2);
}

void test__QList__mid__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QList::mid(arg1, x);
}

void test__QString__mid__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::mid(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__mid__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::mid(arg1, arg2);
}

void test__QString__mid__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::mid(x, arg2);
}

void test__QString__mid__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::mid(arg1, x);
}

void test__QStringList__mid__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QStringList::mid(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QStringList__mid__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QStringList::mid(arg1, arg2);
}

void test__QStringList__mid__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QStringList::mid(x, arg2);
}

void test__QStringList__mid__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QStringList::mid(arg1, x);
}

void test__QString__number__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::number(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__number__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::number();
}

void test__QString__right__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::right(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__right__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::right(arg1);
}

void test__QString__right__arg1__notbool() {
  // cppcheck-suppress invalidFunctionArgBool
  result = QString::right(!x);
}

void test__QString__right__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::right(x);
}

void test__QString__split__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::split(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__split__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::split(arg1);
}

void test__QString__split__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::split(x);
}

void test__QString__toInt__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::toInt(arg1, arg2); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__toInt__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::toInt(arg1, arg2);
}

void test__QString__toInt__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::toInt(x, arg2);
}

void test__QString__toInt__arg2__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QString::toInt(arg1, x);
}

void test__QString__toLower__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::toLower(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__toLower__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::toLower();
}

void test__QString__toStdString__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::toStdString(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__toStdString__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::toStdString();
}

void test__QString__toUpper__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::toUpper(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__toUpper__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::toUpper();
}

void test__QString__toUtf8__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::toUtf8(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__toUtf8__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::toUtf8();
}

void test__QString__trimmed__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QString::trimmed(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QString__trimmed__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QString::trimmed();
}

void test__QMetaObject__connectSlotsByName__noreturn() {
  int x = 1;
  if (cond) { x=100; QMetaObject::connectSlotsByName(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QMetaObject__connectSlotsByName__arg1__notnull() {
  const char *p = NULL;
  // cppcheck-suppress nullPointer
  QMetaObject::connectSlotsByName(p);
}

void test__QDir__fromNativeSeparators__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QDir::fromNativeSeparators(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QDir__fromNativeSeparators__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QDir::fromNativeSeparators(arg1);
}

void test__QDir__fromNativeSeparators__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QDir::fromNativeSeparators(x);
}

void test__QDir__toNativeSeparators__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QDir::toNativeSeparators(arg1); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QDir__toNativeSeparators__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QDir::toNativeSeparators(arg1);
}

void test__QDir__toNativeSeparators__arg1__notuninit() {
  int x;
  // cppcheck-suppress uninitvar
  result = QDir::toNativeSeparators(x);
}

void test__QFile__open__noreturn() {
  int x = 1;
  if (cond) { x=100; QFile::open(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QFile__remove__noreturn() {
  int x = 1;
  if (cond) { x=100; QFile::remove(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QFile__rename__noreturn() {
  int x = 1;
  if (cond) { x=100; QFile::rename(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QFile__size__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QFile::size(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QFile__size__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QFile::size();
}

void test__QIODevice__size__noreturn() {
  int x = 1;
  if (cond) { x=100; result = QIODevice::size(); }
  // cppcheck-suppress shiftTooManyBits
  x = 1 << x;
}

void test__QIODevice__size__useretval() {
  // cppcheck-suppress ignoredReturnValue
  QIODevice::size();
}

