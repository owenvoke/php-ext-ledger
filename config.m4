PHP_ARG_ENABLE(ledger, ledger support,
[ --enable-ledger   Enable Ledger Wallet support])

if test "$PHP_LEDGER" = "yes"; then
    AC_DEFINE(HAVE_LEDGER, 1, [ledger support enabled])
    PHP_NEW_EXTENSION(ledger, ledger.c, $ext_shared)
fi
