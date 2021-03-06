/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_ATCDownlinkMessageData_H_
#define	_ATCDownlinkMessageData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ATCDownlinkMsgElementId;
struct RouteClearance;

/* ATCDownlinkMessageData */
typedef struct ATCDownlinkMessageData {
	struct ATCDownlinkMessageData__elementIds {
		A_SEQUENCE_OF(struct ATCDownlinkMsgElementId) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} elementIds;
	struct ATCDownlinkMessageData__constrainedData {
		struct ATCDownlinkMessageData__constrainedData__routeClearanceData {
			A_SEQUENCE_OF(struct RouteClearance) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *routeClearanceData;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *constrainedData;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ATCDownlinkMessageData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ATCDownlinkMessageData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ATCDownlinkMsgElementId.h"
#include "RouteClearance.h"

#endif	/* _ATCDownlinkMessageData_H_ */
#include <asn_internal.h>
