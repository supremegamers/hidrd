LOCAL_PATH := $(call my-dir)

##Make hidrd_headers
include $(CLEAR_VARS)
LOCAL_MODULE := hidrd_headers
LOCAL_LICENSE_KINDS := SPDX-license-identifier-GPL-2.0
LOCAL_EXPORT_C_INCLUDE_DIRS := $(LOCAL_PATH)/include \
								external/libxml2/include	
include $(BUILD_HEADER_LIBRARY)

##Build libhidrd_fmt
include $(CLEAR_VARS)
LOCAL_CFLAGS := 
LOCAL_MODULE_TAGS := optional
LOCAL_HEADER_LIBRARIES := hidrd_headers
LOCAL_SHARED_LIBRARIES := libhidrd_item libhidrd_strm libhidrd_util
LOCAL_MODULE := libhidrd_fmt
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_SRC_FILES := $(call all-c-files-under, lib/fmt)
#LOCAL_SRC_FILES += $(call all-c-files-under, lib/fmt/*)
#LOCAL_SRC_FILES += $(call all-c-files-under, lib/fmt/*/*)
#LOCAL_SRC_FILES := $(call all-c-files-under, lib/fmt/code)
#LOCAL_SRC_FILES := $(call all-c-files-under, lib/fmt/hex)
#LOCAL_SRC_FILES := $(call all-c-files-under, lib/fmt/natv)
#LOCAL_SRC_FILES := $(call all-c-files-under, lib/fmt/spec)
#LOCAL_SRC_FILES := $(call all-c-files-under, lib/fmt/spec/snk)
#LOCAL_SRC_FILES := $(call all-c-files-under, lib/fmt/xml)
#LOCAL_SRC_FILES := $(call all-c-files-under, lib/fmt/xml/src)
#LOCAL_SRC_FILES := $(call all-c-files-under, lib/fmt/xml/snk)
include $(BUILD_STATIC_LIBRARY) 

##Build libhidrd_item
include $(CLEAR_VARS)
LOCAL_CFLAGS := 
LOCAL_MODULE_TAGS := optional
LOCAL_HEADER_LIBRARIES := hidrd_headers
LOCAL_SHARED_LIBRARIES := libhidrd_usage libhidrd_util
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_MODULE := libhidrd_item
LOCAL_SRC_FILES := $(call all-c-files-under, lib/item)
include $(BUILD_STATIC_LIBRARY) 

##Build libhidrd_opt
include $(CLEAR_VARS)
LOCAL_CFLAGS := 
LOCAL_MODULE_TAGS := optional
LOCAL_HEADER_LIBRARIES := hidrd_headers
LOCAL_SHARED_LIBRARIES := libhidrd_util
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_MODULE := libhidrd_opt
LOCAL_SRC_FILES := $(call all-c-files-under, lib/opt)
include $(BUILD_STATIC_LIBRARY)

##Build libhidrd_strm
include $(CLEAR_VARS)
LOCAL_CFLAGS := 
LOCAL_MODULE_TAGS := optional
LOCAL_HEADER_LIBRARIES := hidrd_headers
LOCAL_SHARED_LIBRARIES := libhidrd_item libhidrd_opt
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_MODULE := libhidrd_strm
LOCAL_SRC_FILES := $(call all-c-files-under, lib/strm)
include $(BUILD_STATIC_LIBRARY) 

##Build libhidrd_usage
include $(CLEAR_VARS)
LOCAL_CFLAGS := 
LOCAL_MODULE_TAGS := optional
LOCAL_HEADER_LIBRARIES := hidrd_headers
LOCAL_SHARED_LIBRARIES := libhidrd_util
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_MODULE := libhidrd_usage
LOCAL_SRC_FILES := $(call all-c-files-under, lib/usage)
include $(BUILD_STATIC_LIBRARY)

##Build libhidrd_util
include $(CLEAR_VARS)
LOCAL_CFLAGS := 
LOCAL_MODULE_TAGS := optional
LOCAL_HEADER_LIBRARIES := hidrd_headers
LOCAL_SHARED_LIBRARIES :=
LOCAL_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_MODULE := libhidrd_util
LOCAL_SRC_FILES := $(call all-c-files-under, lib/item)
include $(BUILD_STATIC_LIBRARY)
