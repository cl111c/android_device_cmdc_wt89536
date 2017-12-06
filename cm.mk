# Release name
PRODUCT_RELEASE_NAME := wt89536

# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Inherit device configuration
$(call inherit-product, device/cmcc/wt89536/device_wt89536.mk)

## Device identifier. This must come after all inclusions
PRODUCT_DEVICE := wt89536
PRODUCT_NAME := cm_wt89536
PRODUCT_BRAND := cmcc
PRODUCT_MODEL := wt89536
PRODUCT_MANUFACTURER := cmcc
