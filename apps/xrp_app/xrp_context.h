/**
 * @file    xrp_context.h
 * @author  Cypherock X1 Team
 * @brief   Header file defining typedefs and MACROS for the XRP app
 * @copyright Copyright (c) 2024 HODL TECH PTE LTD
 * <br/> You may obtain a copy of license at <a href="https://mitcc.org/"
 * target=_blank>https://mitcc.org/</a>
 */
#ifndef XRP_CONTEXT_H
#define XRP_CONTEXT_H

/*****************************************************************************
 * INCLUDES
 *****************************************************************************/
#include <stdbool.h>
#include <stdint.h>

/*****************************************************************************
 * MACROS AND DEFINES
 *****************************************************************************/
#define XRP_NAME "XRP"
#define XRP_LUNIT "XRP"
#define XRP_PUB_KEY_SIZE 33
#define XRP_PREFIXED_ACCOUNT_ID_LENGTH 21
#define XRP_ACCOUNT_ADDRESS_LENGTH 34
#define XRP_BASE58_DIGITS_ORDERED                                              \
  "rpshnaf39wBUDNEGHJKLM4PQRST7VWXYZ2bcdeCg65jkm8oFqi1tuvAxyz"

/*****************************************************************************
 * TYPEDEFS
 *****************************************************************************/

// TODO: Populate structure for XRP
typedef struct {
} xrp_config_t;

typedef enum {
  INT16 = 1,
  INT32 = 2,
  HASH256 = 5,
  AMOUNT = 6,
  BLOB = 7,
  ACCOUNT = 8,
  VECTOR256 = 19
} TYPECODE;

typedef enum { TransactionType = 2 } INT16FIELDCODE;

typedef enum {
  Flags = 2,
  Sequence = 4,
  DestinationTag = 14,
  OfferSequence = 25,
  LastLedgerSequence = 27,
  CancelAfter = 36,
  FinishAfter = 37
} INT132FIELDCODE;

typedef enum {
  NFTokenId = 10,
} HASH256FIELDCODE;

typedef enum {
  Amount = 1,
  LimitAmount = 3,
  Fee = 8,
} AMOUNTFIELDCODE;

typedef enum {
  SigningPubKey = 3,
  TxnSignature = 4,
  Fulfillment = 16,
  Condition = 17
} BLOBFIELDCODE;

typedef enum { Account = 1, Owner = 2, Destination = 3 } ACCOUNTFIELDCODE;

typedef enum { NFTokenOffers = 4 } VECTOR256FILEDCODE;

// See
// https://github.com/XRPLF/xrpl.js/blob/main/packages/ripple-binary-codec/src/enums/definitions.json
typedef enum {
  no_type = -1,
  payment = 0,
  EscrowCreate = 1,
  EscrowFinish = 2,
  EscrowCancel = 4,
  TrustSet = 20,
  NFTokenBurn = 26,
  NFTokenCreateOffer = 27,
  NFTokenCancelOffer = 28,
  NFTokenAcceptOffer = 29
} TRANSACTIONTYPE;

typedef struct {
  uint16_t TransactionType;
  uint32_t Flags;
  uint32_t Sequence;
  bool hasDestinationTag;
  uint32_t DestinationTag;    // optional
  uint32_t LastLedgerSequence;
  uint64_t Amount;
  uint64_t Fee;
  uint8_t SigningPubKey[33];
  uint8_t Account[20];
  uint8_t Destination[20];
} xrp_unsigned_txn;

/*****************************************************************************
 * EXPORTED VARIABLES
 *****************************************************************************/

/*****************************************************************************
 * GLOBAL FUNCTION PROTOTYPES
 *****************************************************************************/

#endif /* XRP_CONTEXT_H */