/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_SpeedTime_H_
#define	_SpeedTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Speed.h"
#include "Time.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SpeedTime */
typedef struct SpeedTime {
	Speed_t	 speed;
	Time_t	 time;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpeedTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpeedTime;

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedTime_H_ */
#include <asn_internal.h>
