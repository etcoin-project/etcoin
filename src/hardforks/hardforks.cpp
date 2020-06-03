// Copyright (c) 2014-2019, The Monero Project
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "hardforks.h"

#undef ETCOIN_DEFAULT_LOG_CATEGORY
#define ETCOIN_DEFAULT_LOG_CATEGORY "blockchain.hardforks"

const hardfork_t mainnet_hard_forks[] = {
  // version 1 from the start of the blockchain
  { 1, 1, 0, 1590418256 },

  // version 2 starts from block 20, which is on or around the 25th of May, 2020. Fork time finalised on 2020-05-25. No fork voting occurs for the v2 fork.
  { 2, 20, 0, 1590419456 },

  // version 3 starts from block 40, which is on or around the 25th of May, 2020. 

  // version 4 starts from block 60, which is on or around the 25th of May, 2020. 
  { 4, 60, 0, 1590424256 },

  // version 5 starts from block 80, which is on or around the 25th of May, 2020. 
  { 5, 80, 0, 1590426656 }, 

  // version 6 starts from block 100, which is on or around the 25th of May, 2020. 
  { 6, 100, 0, 1590429056 },

  // version 7 starts from block 120, which is on or around the 25th of May, 2020. 
  { 7, 120, 0, 1590431456 },

  // version 8 starts from block 140, which is on or around the 25th of May, 2020. 
  { 8, 140, 0, 1590433856 },

  // version 9 starts from block 160, which is on or around the 25th of May, 2020. 
  { 9, 160, 0, 1590436256 },

  // version 10 starts from block 180, which is on or around the 25th of May, 2020. 
  { 10, 180, 0, 1590438656 },

  // version 11 starts from block 200, which is on or around the 25th of May, 2020. 
  { 11, 200, 0, 1590441056 },

  // version 12 starts from block 220, which is on or around the 26th of May, 2020. 
  { 12, 220, 0, 1590443456 },
};
const size_t num_mainnet_hard_forks = sizeof(mainnet_hard_forks) / sizeof(mainnet_hard_forks[0]);
const uint64_t mainnet_hard_fork_version_1_till = 1009826;

const hardfork_t testnet_hard_forks[] = {
  // version 1 from the start of the blockchain
  { 1, 1, 0, 1341378000 },

  // version 2 starts from block 624634, which is on or around the 23rd of November, 2015. Fork time finalised on 2015-11-20. No fork voting occurs for the v2 fork.
  { 2, 624634, 0, 1445355000 },

  // versions 3-5 were passed in rapid succession from September 18th, 2016
  { 3, 800500, 0, 1472415034 },
  { 4, 801219, 0, 1472415035 },
  { 5, 802660, 0, 1472415036 + 86400*180 }, // add 5 months on testnet to shut the update warning up since there's a large gap to v6

  { 6, 971400, 0, 1501709789 },
  { 7, 1057027, 0, 1512211236 },
  { 8, 1057058, 0, 1533211200 },
  { 9, 1057778, 0, 1533297600 },
  { 10, 1154318, 0, 1550153694 },
  { 11, 1155038, 0, 1550225678 },
  { 12, 1308737, 0, 1569582000 },
};
const size_t num_testnet_hard_forks = sizeof(testnet_hard_forks) / sizeof(testnet_hard_forks[0]);
const uint64_t testnet_hard_fork_version_1_till = 624633;

const hardfork_t stagenet_hard_forks[] = {
  // version 1 from the start of the blockchain
  { 1, 1, 0, 1341378000 },

  // versions 2-7 in rapid succession from March 13th, 2018
  { 2, 32000, 0, 1521000000 },
  { 3, 33000, 0, 1521120000 },
  { 4, 34000, 0, 1521240000 },
  { 5, 35000, 0, 1521360000 },
  { 6, 36000, 0, 1521480000 },
  { 7, 37000, 0, 1521600000 },
  { 8, 176456, 0, 1537821770 },
  { 9, 177176, 0, 1537821771 },
  { 10, 269000, 0, 1550153694 },
  { 11, 269720, 0, 1550225678 },
  { 12, 454721, 0, 1571419280 },
};
const size_t num_stagenet_hard_forks = sizeof(stagenet_hard_forks) / sizeof(stagenet_hard_forks[0]);
