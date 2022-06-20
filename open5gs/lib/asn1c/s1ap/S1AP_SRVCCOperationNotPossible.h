/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.4.0/36413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_SRVCCOperationNotPossible_H_
#define	_S1AP_SRVCCOperationNotPossible_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_SRVCCOperationNotPossible {
	S1AP_SRVCCOperationNotPossible_notPossible	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_SRVCCOperationNotPossible;

/* S1AP_SRVCCOperationNotPossible */
typedef long	 S1AP_SRVCCOperationNotPossible_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SRVCCOperationNotPossible;
asn_struct_free_f S1AP_SRVCCOperationNotPossible_free;
asn_struct_print_f S1AP_SRVCCOperationNotPossible_print;
asn_constr_check_f S1AP_SRVCCOperationNotPossible_constraint;
per_type_decoder_f S1AP_SRVCCOperationNotPossible_decode_aper;
per_type_encoder_f S1AP_SRVCCOperationNotPossible_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SRVCCOperationNotPossible_H_ */
#include <asn_internal.h>
