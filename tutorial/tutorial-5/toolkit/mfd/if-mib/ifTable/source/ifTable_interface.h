/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.27 $ of : mfd-interface.m2c,v $
 *
 * $Id$
 */
/** @defgroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef IFTABLE_INTERFACE_H
#define IFTABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "ifTable.h"

    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void            _ifTable_initialize_interface(ifTable_registration_ptr
                                                  user_ctx, u_long flags);

    ifTable_rowreq_ctx *ifTable_allocate_rowreq_ctx(void);
    void            ifTable_release_rowreq_ctx(ifTable_rowreq_ctx *
                                               rowreq_ctx);

    int             ifTable_index_to_oid(netsnmp_index * oid_idx,
                                         ifTable_mib_index * mib_idx);
    int             ifTable_index_from_oid(netsnmp_index * oid_idx,
                                           ifTable_mib_index * mib_idx);

    /*
     * access to certain internals. use with caution!
     */
    void            ifTable_valid_columns_set(netsnmp_column_info * vc);


#ifdef __cplusplus
};
#endif

#endif                          /* IFTABLE_INTERFACE_H */
