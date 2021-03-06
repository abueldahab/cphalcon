
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2013 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  |          Kenji Minamoto <kenji.minamoto@gmail.com>                     |
  +------------------------------------------------------------------------+
*/

extern zend_class_entry *phalcon_mvc_micro_ce;

PHALCON_INIT_CLASS(Phalcon_Mvc_Micro);

PHP_METHOD(Phalcon_Mvc_Micro, setDI);
PHP_METHOD(Phalcon_Mvc_Micro, map);
PHP_METHOD(Phalcon_Mvc_Micro, get);
PHP_METHOD(Phalcon_Mvc_Micro, post);
PHP_METHOD(Phalcon_Mvc_Micro, put);
PHP_METHOD(Phalcon_Mvc_Micro, patch);
PHP_METHOD(Phalcon_Mvc_Micro, head);
PHP_METHOD(Phalcon_Mvc_Micro, delete);
PHP_METHOD(Phalcon_Mvc_Micro, options);
PHP_METHOD(Phalcon_Mvc_Micro, notFound);
PHP_METHOD(Phalcon_Mvc_Micro, getRouter);
PHP_METHOD(Phalcon_Mvc_Micro, setService);
PHP_METHOD(Phalcon_Mvc_Micro, hasService);
PHP_METHOD(Phalcon_Mvc_Micro, getService);
PHP_METHOD(Phalcon_Mvc_Micro, getSharedService);
PHP_METHOD(Phalcon_Mvc_Micro, handle);
PHP_METHOD(Phalcon_Mvc_Micro, setActiveHandler);
PHP_METHOD(Phalcon_Mvc_Micro, getActiveHandler);
PHP_METHOD(Phalcon_Mvc_Micro, getReturnedValue);
PHP_METHOD(Phalcon_Mvc_Micro, offsetExists);
PHP_METHOD(Phalcon_Mvc_Micro, offsetSet);
PHP_METHOD(Phalcon_Mvc_Micro, offsetGet);
PHP_METHOD(Phalcon_Mvc_Micro, offsetUnset);
PHP_METHOD(Phalcon_Mvc_Micro, before);
PHP_METHOD(Phalcon_Mvc_Micro, after);
PHP_METHOD(Phalcon_Mvc_Micro, finish);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_setdi, 0, 0, 1)
	ZEND_ARG_INFO(0, dependencyInjector)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_map, 0, 0, 2)
	ZEND_ARG_INFO(0, routePattern)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_get, 0, 0, 2)
	ZEND_ARG_INFO(0, routePattern)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_post, 0, 0, 2)
	ZEND_ARG_INFO(0, routePattern)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_put, 0, 0, 2)
	ZEND_ARG_INFO(0, routePattern)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_patch, 0, 0, 2)
	ZEND_ARG_INFO(0, routePattern)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_head, 0, 0, 2)
	ZEND_ARG_INFO(0, routePattern)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_delete, 0, 0, 2)
	ZEND_ARG_INFO(0, routePattern)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_options, 0, 0, 2)
	ZEND_ARG_INFO(0, routePattern)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_notfound, 0, 0, 1)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_setservice, 0, 0, 2)
	ZEND_ARG_INFO(0, serviceName)
	ZEND_ARG_INFO(0, definition)
	ZEND_ARG_INFO(0, shared)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_hasservice, 0, 0, 1)
	ZEND_ARG_INFO(0, serviceName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_getservice, 0, 0, 1)
	ZEND_ARG_INFO(0, serviceName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_getsharedservice, 0, 0, 1)
	ZEND_ARG_INFO(0, serviceName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_handle, 0, 0, 0)
	ZEND_ARG_INFO(0, uri)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_setactivehandler, 0, 0, 1)
	ZEND_ARG_INFO(0, activeHandler)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_offsetexists, 0, 0, 1)
	ZEND_ARG_INFO(0, alias)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_offsetset, 0, 0, 2)
	ZEND_ARG_INFO(0, alias)
	ZEND_ARG_INFO(0, definition)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_offsetget, 0, 0, 1)
	ZEND_ARG_INFO(0, alias)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_offsetunset, 0, 0, 1)
	ZEND_ARG_INFO(0, alias)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_before, 0, 0, 1)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_after, 0, 0, 1)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_micro_finish, 0, 0, 1)
	ZEND_ARG_INFO(0, handler)
ZEND_END_ARG_INFO()

PHALCON_INIT_FUNCS(phalcon_mvc_micro_method_entry){
	PHP_ME(Phalcon_Mvc_Micro, setDI, arginfo_phalcon_mvc_micro_setdi, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, map, arginfo_phalcon_mvc_micro_map, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, get, arginfo_phalcon_mvc_micro_get, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, post, arginfo_phalcon_mvc_micro_post, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, put, arginfo_phalcon_mvc_micro_put, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, patch, arginfo_phalcon_mvc_micro_patch, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, head, arginfo_phalcon_mvc_micro_head, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, delete, arginfo_phalcon_mvc_micro_delete, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, options, arginfo_phalcon_mvc_micro_options, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, notFound, arginfo_phalcon_mvc_micro_notfound, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, getRouter, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, setService, arginfo_phalcon_mvc_micro_setservice, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, hasService, arginfo_phalcon_mvc_micro_hasservice, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, getService, arginfo_phalcon_mvc_micro_getservice, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, getSharedService, arginfo_phalcon_mvc_micro_getsharedservice, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, handle, arginfo_phalcon_mvc_micro_handle, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, setActiveHandler, arginfo_phalcon_mvc_micro_setactivehandler, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, getActiveHandler, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, getReturnedValue, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, offsetExists, arginfo_phalcon_mvc_micro_offsetexists, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, offsetSet, arginfo_phalcon_mvc_micro_offsetset, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, offsetGet, arginfo_phalcon_mvc_micro_offsetget, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, offsetUnset, arginfo_phalcon_mvc_micro_offsetunset, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, before, arginfo_phalcon_mvc_micro_before, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, after, arginfo_phalcon_mvc_micro_after, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Mvc_Micro, finish, arginfo_phalcon_mvc_micro_finish, ZEND_ACC_PUBLIC) 
	PHP_FE_END
};

