/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t light_info = {

    .brand = "Redmi",
    .device = "light",
    .name = "light",
    .marketname = "Redmi Note 11R",
    .model = "22095RA98C",
    .build_fingerprint = "POCO/light/light:12/SP1A.210812.016/V13.0.6.0.SLSINXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t light_in_p_info = {

    .brand = "POCO",
    .device = "light",
    .name = "light_p_in",
    .marketname = "POCO M4 5G",
    .model = "22041219PI",
    .build_fingerprint = "POCO/light_p_in/light:12/SP1A.210812.016/V13.0.6.0.SLSINXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t light_cn_info = {

    .brand = "Redmi",
    .device = "light",
    .name = "light_cn",
    .marketname = "Redmi Note 11E",
    .model = "22041219C",
    .build_fingerprint = "POCO/light_cn/light:12/SP1A.210812.016/V13.0.6.0.SLSINXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t light_in_info = {

	.brand = "Redmi",
	.device = "light",
	.name = "light_in",
	.marketname = "Redmi 11 Prime 5G",
	.model= "22041219PI",
	.build_fingerprint = "POCO/light_in/light:12/SP1A.210812.016/V13.0.11.0.SLSINXM:user/release-keys",
	
	.nfc = true,
};

static const variant_info_t light_global_info = {

	.brand = "Redmi",
	.device = "light",
	.name = "light_global",
	.marketname = "Redmi 10 5G",
	.model= "22041219G",
	.build_fingerprint = "POCO/light_global/light:12/SP1A.210812.016/V13.0.11.0.SLSINXM:user/release-keys",
	
	.nfc = true,
};

static const variant_info_t thunder_global_info = {

	.brand = "Redmi",
	.device = "thunder",
	.name = "thunder_global",
	.marketname = "Redmi 10 5G",
	.model = "22041219NY",
	.build_fingerprint = "POCO/thunder_global/light:12/SP1A.210812.016/V13.0.11.0.SLSCNXM:user/release-keys",
	
	.nfc = true,
};

static const variant_info_t thunder_p_global_info = {

	.brand = "POCO",
	.device = "thunder",
	.name = "thunder_p_global",
	.marketname = "POCO M4 5G",
	.model = "22041219PG",
	.build_fingerprint = "POCO/thunder_p_global/light:12/SP1A.210812.016/V13.0.11.0.SLSCNXM:user/release-keys",
	
	.nfc = true,
};

static const variant_info_t thunder_eea_info = {

	.brand = "POCO",
	.device = "thunder",
	.name = "thunder_eea",
	.marketname = "POCO M4 5G Global",
	.model = "22041219NY",
	.build_fingerprint = "POCO/thunder_eea/light:12/SP1A.210812.016/V13.0.11.0.SLSCNXM:user/release-keys",
	
	.nfc = true,
};

static const std::vector<variant_info_t> variants = {
    light_info,
    light_in_p_info,
    light_cn_info,
    light_in_info,
    light_global_info,
    thunder_global_info,
    thunder_p_global_info,
    thunder_eea_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
