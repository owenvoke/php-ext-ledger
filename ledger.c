#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <php.h>
#include <ext/standard/info.h>

#if HAVE_LEDGER

#include "ledger.h"

zend_function_entry ledger_functions[] = {
    {NULL, NULL, NULL}
};

zend_module_entry ledger_module_entry = {
    STANDARD_MODULE_HEADER,
    PHP_LEDGER_EXTNAME,
    ledger_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    PHP_LEDGER_VERSION,
    STANDARD_MODULE_PROPERTIES
};

ZEND_GET_MODULE(ledger);

PHP_MINFO_FUNCTION(ledger)
{
    php_info_print_table_start();
    php_info_print_table_header(2, "ledger support", "enabled");
    php_info_print_table_row(2, "Version", PHP_LEDGER_VERSION);
    php_info_print_table_end();
}

#endif
