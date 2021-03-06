/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_ProcedureType_H_
#define	_ProcedureType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProcedureType {
	ProcedureType_arrival	= 0,
	ProcedureType_approach	= 1,
	ProcedureType_departure	= 2
} e_ProcedureType;

/* ProcedureType */
typedef long	 ProcedureType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProcedureType;
asn_struct_free_f ProcedureType_free;
asn_struct_print_f ProcedureType_print;
asn_constr_check_f ProcedureType_constraint;
ber_type_decoder_f ProcedureType_decode_ber;
der_type_encoder_f ProcedureType_encode_der;
xer_type_decoder_f ProcedureType_decode_xer;
xer_type_encoder_f ProcedureType_encode_xer;
per_type_decoder_f ProcedureType_decode_uper;
per_type_encoder_f ProcedureType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ProcedureType_H_ */
#include <asn_internal.h>
