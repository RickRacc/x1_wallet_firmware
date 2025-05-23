/**
 * @file    icrc_canisters.c
 * @author  Cypherock X1 Team
 * @brief   ICRC whitelisted token list
 * @copyright Copyright (c) 2023 HODL TECH PTE LTD
 * <br/> You may obtain a copy of license at <a href="https://mitcc.org/"
 *target=_blank>https://mitcc.org/</a>
 *
 ******************************************************************************
 * @attention
 *
 * (c) Copyright 2023 by HODL TECH PTE LTD
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject
 * to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *
 * "Commons Clause" License Condition v1.0
 *
 * The Software is provided to you by the Licensor under the License,
 * as defined below, subject to the following condition.
 *
 * Without limiting other conditions in the License, the grant of
 * rights under the License will not include, and the License does not
 * grant to you, the right to Sell the Software.
 *
 * For purposes of the foregoing, "Sell" means practicing any or all
 * of the rights granted to you under the License to provide to third
 * parties, for a fee or other consideration (including without
 * limitation fees for hosting or consulting/ support services related
 * to the Software), a product or service whose value derives, entirely
 * or substantially, from the functionality of the Software. Any license
 * notice or attribution required by the License must also include
 * this Commons Clause License Condition notice.
 *
 * Software: All X1Wallet associated files.
 * License: MIT
 * Licensor: HODL TECH PTE LTD
 *
 ******************************************************************************
 */

/*****************************************************************************
 * INCLUDES
 *****************************************************************************/

#include "icrc_canisters.h"

/*****************************************************************************
 * EXTERN VARIABLES
 *****************************************************************************/

/*****************************************************************************
 * PRIVATE MACROS AND DEFINES
 *****************************************************************************/

/*****************************************************************************
 * PRIVATE TYPEDEFS
 *****************************************************************************/

/*****************************************************************************
 * STATIC FUNCTION PROTOTYPES
 *****************************************************************************/

/*****************************************************************************
 * STATIC VARIABLES
 *****************************************************************************/

/*****************************************************************************
 * GLOBAL VARIABLES
 *****************************************************************************/

const icrc_token_t icrc_tokens[ICRC_WHITELISTED_TOKEN_COUNT] = {
    {{0, 0, 0, 0, 0, 0, 0, 2, 1, 1}, "ICP", 8},
    {{0, 0, 0, 0, 2, 48, 0, 6, 1, 1}, "CKBTC", 8},
    {{0, 0, 0, 0, 2, 0, 0, 207, 1, 1}, "OGY", 8},
    {{0, 0, 0, 0, 2, 64, 0, 89, 1, 1}, "BOB", 8},
    {{0, 0, 0, 0, 2, 0, 0, 126, 1, 1}, "GOLDAO", 8},
    {{0, 0, 0, 0, 2, 0, 0, 215, 1, 1}, "WTN", 8},
    {{0, 0, 0, 0, 2, 0, 0, 75, 1, 1}, "DCD", 8},
    {{0, 0, 0, 0, 2, 0, 0, 12, 1, 1}, "DKP", 8},
    {{0, 0, 0, 0, 2, 48, 0, 157, 1, 1}, "CKETH", 18},
    {{0, 0, 0, 0, 2, 0, 0, 167, 1, 1}, "PANDA", 8},
    {{0, 0, 0, 0, 2, 48, 1, 91, 1, 1}, "CKUSDC", 6},
    {{0, 0, 0, 0, 2, 48, 1, 170, 1, 1}, "NICP", 8},
    {{0, 0, 0, 0, 2, 0, 0, 97, 1, 1}, "SEER", 8},
    {{0, 0, 0, 0, 2, 0, 1, 14, 1, 1}, "ALICE", 8},
    {{0, 0, 0, 0, 2, 0, 0, 150, 1, 1}, "ICL", 8},
    {{0, 0, 0, 0, 2, 0, 0, 172, 1, 1}, "ICS", 8},
    {{0, 0, 0, 0, 2, 0, 0, 25, 1, 1}, "CHAT", 8}};

/*****************************************************************************
 * STATIC FUNCTIONS
 *****************************************************************************/

/*****************************************************************************
 * GLOBAL FUNCTIONS
 *****************************************************************************/
