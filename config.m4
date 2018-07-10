PHP_ARG_ENABLE(ledger, Whether to enable Ledger Wallet support,
[ --enable-ledger   Enable Ledger Wallet support])

if test "$PHP_LEDGER" = "yes"; then
    AC_DEFINE(HAVE_LEDGER, 1, [Whether you have the Ledger extension])
    PHP_NEW_EXTENSION(ledger, ledger.c, $ext_shared)
fi
