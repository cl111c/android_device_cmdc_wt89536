#
# Copyright (C) 2017 The LineageOS Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

$(call inherit-product, device/cmcc/wt89536/full_wt89536.mk)

# Inherit some common LineageOS stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

PRODUCT_NAME := lineage_wt89536
BOARD_VENDOR := CMCC

PRODUCT_BUILD_PROP_OVERRIDES += \
    BUILD_FINGERPRINT="cmcc/wt89536/wt89536:6.0.1/MMB29M/20170901:user/release-keys" \
    PRIVATE_BUILD_DESC="wt89536-user 6.0.1 MMB29M 20170901 release-keys"

PRODUCT_GMS_CLIENTID_BASE := android-cmcc
