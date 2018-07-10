#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "ext/standard/info.h"

#if HAVE_LEDGER

#include "php_ledger.h"

PHP_MINFO_FUNCTION(ledger)
{
    php_info_print_table_start();
    php_info_print_table_header(2, "ledger support", "enabled");
    php_info_print_table_row(2, "Version", PHP_LEDGER_VERSION);
    php_info_print_table_end();
}

#endif
