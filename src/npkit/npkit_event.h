// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#ifndef NPKIT_EVENT_H_
#define NPKIT_EVENT_H_

#define NPKIT_EVENT_INVALID 0x0

#define NPKIT_EVENT_TIME_SYNC_GPU 0x1
#define NPKIT_EVENT_TIME_SYNC_CPU 0x2

#define NPKIT_EVENT_SM_REDUCE_ENTRY 0x3
#define NPKIT_EVENT_SM_REDUCE_EXIT 0x4

#define NPKIT_EVENT_IB_SEND_DATA_ENTRY 0x5
#define NPKIT_EVENT_IB_SEND_FLAG_ENTRY 0x6
#define NPKIT_EVENT_IB_SEND_EXIT 0x7

#define NPKIT_EVENT_DMA_SEND_DATA_ENTRY 0x8
#define NPKIT_EVENT_DMA_SEND_FLAG_ENTRY 0x9
#define NPKIT_EVENT_DMA_SEND_EXIT 0xA

#endif