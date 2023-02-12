/*
 * vim:nomodifiable
 *
 * ************* DO NOT EDIT ***************
 * This file is autogenerated from page.h.m4
 * *****************************************
 */
/** @file
 * @brief HID report descriptor - usage pages
 *
 * Copyright (C) 2009-2010 Nikolai Kondrashov
 *
 * This file is part of hidrd.
 *
 * Hidrd is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Hidrd is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with hidrd; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * @author Nikolai Kondrashov <spbnick@gmail.com>
 */

#ifndef __HIDRD_USAGE_PAGE_H__
#define __HIDRD_USAGE_PAGE_H__

#include <assert.h>
#include <stdbool.h>
#include "hidrd/cfg.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum hidrd_usage_page {
    /** Undefined */
    HIDRD_USAGE_PAGE_UNDEFINED = 0x0000U,
    /** Generic desktop controls */
    HIDRD_USAGE_PAGE_DESKTOP = 0x0001U,
    /** Simulation controls */
    HIDRD_USAGE_PAGE_SIMULATION = 0x0002U,
    /** Virtual reality controls */
    HIDRD_USAGE_PAGE_VR = 0x0003U,
    /** Sport controls */
    HIDRD_USAGE_PAGE_SPORT = 0x0004U,
    /** Game controls */
    HIDRD_USAGE_PAGE_GAME = 0x0005U,
    /** Generic device controls */
    HIDRD_USAGE_PAGE_DEVICE = 0x0006U,
    /** Keyboard/keypad */
    HIDRD_USAGE_PAGE_KEYBOARD = 0x0007U,
    /** LEDs */
    HIDRD_USAGE_PAGE_LED = 0x0008U,
    /** Button */
    HIDRD_USAGE_PAGE_BUTTON = 0x0009U,
    /** Ordinal */
    HIDRD_USAGE_PAGE_ORDINAL = 0x000AU,
    /** Telephony */
    HIDRD_USAGE_PAGE_TELEPHONY = 0x000BU,
    /** Consumer */
    HIDRD_USAGE_PAGE_CONSUMER = 0x000CU,
    /** Digitizer */
    HIDRD_USAGE_PAGE_DIGITIZER = 0x000DU,
    /** Physical interface device */
    HIDRD_USAGE_PAGE_PID = 0x000FU,
    /** Unicode */
    HIDRD_USAGE_PAGE_UNICODE = 0x0010U,
    /** Alphanumeric display */
    HIDRD_USAGE_PAGE_ALNUM_DISPLAY = 0x0014U,
    /** Medical */
    HIDRD_USAGE_PAGE_MEDICAL = 0x0040U,
    /** USB monitor */
    HIDRD_USAGE_PAGE_MONITOR = 0x0080U,
    /** Monitor enumerated values */
    HIDRD_USAGE_PAGE_MONITOR_ENUM = 0x0081U,
    /** Monitor VESA virtual control panel */
    HIDRD_USAGE_PAGE_MONITOR_VESA_VCP = 0x0082U,
    /** Power device */
    HIDRD_USAGE_PAGE_POWER_DEVICE = 0x0084U,
    /** Power battery system */
    HIDRD_USAGE_PAGE_POWER_BATSYS = 0x0085U,
    /** POS devices - bar code scanner */
    HIDRD_USAGE_PAGE_POS_BCS = 0x008CU,
    /** POS devices - scale */
    HIDRD_USAGE_PAGE_POS_SCALE = 0x008DU,
    /** POS devices - magnetic stripe reader */
    HIDRD_USAGE_PAGE_POS_MSR = 0x008EU,
    /** Camera control */
    HIDRD_USAGE_PAGE_CAMERA = 0x0090U,
    /** Arcade */
    HIDRD_USAGE_PAGE_ARCADE = 0x0091U,
    /** Vendor-defined page FFFF (last possible) */
    HIDRD_USAGE_PAGE_VENDOR_FFFF = 0xFFFFU
} hidrd_usage_page;

#define HIDRD_USAGE_PAGE_MIN    HIDRD_USAGE_PAGE_UNDEFINED
#define HIDRD_USAGE_PAGE_MAX    HIDRD_USAGE_PAGE_VENDOR_FFFF

/**
 * Check if a page is valid.
 *
 * @param page  Page ID to check.
 *
 * @return True if the page is valid, false otherwise.
 */
extern bool hidrd_usage_page_valid(hidrd_usage_page page);

/**
 * Check if a usage page is known, in effect,
 * if there is a description for it.
 *
 * @param page  Usage page to check.
 *
 * @return True if the usage page is known, false otherwise.
 */
extern bool hidrd_usage_page_known(hidrd_usage_page page);

/**
 * Validate a usage page ID.
 *
 * @param page  Page ID to validate.
 *
 * @return Validated page ID.
 */
static inline hidrd_usage_page
hidrd_usage_page_validate(hidrd_usage_page page)
{
    assert(hidrd_usage_page_valid(page));
    return page;
}


/**
 * Check if a page is defined (not undefined).
 *
 * @param page  Page ID to check.
 *
 * @return True if the page is defined, false otherwise.
 */
static inline bool
hidrd_usage_page_defined(hidrd_usage_page page)
{
    assert(hidrd_usage_page_valid(page));
    return page != HIDRD_USAGE_PAGE_UNDEFINED;
}


/**
 * Check if a page is reserved.
 *
 * @param page  Page ID to check.
 *
 * @return True if the page is reserved, false otherwise.
 */
extern bool hidrd_usage_page_reserved(hidrd_usage_page page);

/**
 * Check if a page is monitor page.
 *
 * @param page  Page ID to check.
 *
 * @return True if the page is monitor page, false otherwise.
 */
static inline bool
hidrd_usage_page_monitor(hidrd_usage_page page)
{
    assert(hidrd_usage_page_valid(page));
    if ((int)page >= 0x0080 && (int)page <= 0x0083)
        return true;
    return false;
}


/**
 * Check if a page is power page.
 *
 * @param page  Page ID to check.
 *
 * @return True if the page is power page, false otherwise.
 */
static inline bool
hidrd_usage_page_power(hidrd_usage_page page)
{
    assert(hidrd_usage_page_valid(page));
    if ((int)page >= 0x0084 && (int)page <= 0x0087)
        return true;
    return false;
}


/**
 * Check if a page is POS page.
 *
 * @param page  Page ID to check.
 *
 * @return True if the page is POS page, false otherwise.
 */
static inline bool
hidrd_usage_page_pos(hidrd_usage_page page)
{
    assert(hidrd_usage_page_valid(page));
    if ((int)page >= 0x008C && (int)page <= 0x008F)
        return true;
    return false;
}


/**
 * Check if a page is vendor-defined.
 *
 * @param page  Page ID to check.
 *
 * @return True if the page is vendor-defined, false otherwise.
 */
static inline bool
hidrd_usage_page_vendor(hidrd_usage_page page)
{
    assert(hidrd_usage_page_valid(page));
    if ((int)page >= 0xFF00 && (int)page <= 0xFFFF)
        return true;
    return false;
}




/* Declare usage page to numeric string conversion functions */
HIDRD_NUM_CONV_DECLS(usage_page);

#ifdef HIDRD_WITH_TOKENS
/**
 * Convert a usage page code to a string token.
 *
 * @param page  Usage page code.
 *
 * @return Dynamically allocated token string, or NULL if the page has no
 *         token or failed to allocate memory; check errno for the latter.
 */
extern char *hidrd_usage_page_to_token(hidrd_usage_page page);

/**
 * Convert a usage page string token to a code.
 *
 * @param ppage Location for resulting page code.
 * @param token Usage page string token (case insensitive).
 *
 * @return True if token is found, false otherwise.
 */
extern bool hidrd_usage_page_from_token(hidrd_usage_page   *ppage,
                                        const char         *token);

#endif /* HIDRD_WITH_TOKENS */

#ifdef HIDRD_WITH_NAMES
/**
 * Retrieve usage page name string (close to specification).
 *
 * @param page  Usage page code.
 *
 * @return Usage page name string, or NULL if not found.
 */
extern const char *hidrd_usage_page_name(hidrd_usage_page page);

/**
 * Format usage page set membership description text.
 *
 * @param page  Usage page code to generate description for.
 *
 * @return Dynamically allocated page set membership description, or NULL if
 *         failed to allocate memory; could be an empty string, if there is
 *         nothing to tell about the page.
 */
extern char *hidrd_usage_page_set_membership_desc_str(
                                            hidrd_usage_page page);

/**
 * Format page description text from page name and set membership.
 *
 * @param page  Usage page code to generate description for.
 *
 * @return Dynamically allocated page description, or NULL if failed to
 *         allocate memory; could be an empty string, if there is nothing to
 *         tell about the page.
 */
extern char *hidrd_usage_page_desc_str(hidrd_usage_page page);
#endif /* HIDRD_WITH_NAMES */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __HIDRD_USAGE_PAGE_H__ */
