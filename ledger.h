#ifndef PHP_LEDGER_H
#define PHP_LEDGER_H

#define PHP_LEDGER_EXTNAME "ledger"
#define PHP_LEDGER_VERSION "0.1.0"

#include <php.h>

extern zend_module_entry ledger_module_entry;
#define phpext_ledger_ptr &ledger_module_entry

/**
 * PHP Extension Info
 */
PHP_MINFO_FUNCTION(ledger);

/**
 * PHP Extension Functions
 */

#endif
