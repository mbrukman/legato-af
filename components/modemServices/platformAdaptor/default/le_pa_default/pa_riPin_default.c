/**
 * @file pa_riPin_default.c
 *
 * Default implementation of @ref c_pa_riPin.
 *
 * Copyright (C) Sierra Wireless Inc. Use of this work is subject to license.
 */

#include "legato.h"
#include "interfaces.h"
#include "pa_riPin.h"

//--------------------------------------------------------------------------------------------------
/**
 * This function must be called to initialize the PA Ring Indicator signal module.
 *
 * @return
 *   - LE_FAULT         The function failed.
 *   - LE_OK            The function succeeded.
 *
 * @note This function should not be called from outside the platform adapter.
 *
 * @todo Move this prototype to another (internal) header.
 */
//--------------------------------------------------------------------------------------------------
le_result_t pa_riPin_Init
(
    void
)
{
    return LE_OK;
}

//--------------------------------------------------------------------------------------------------
/**
 * Check whether the application core is the current owner of the Ring Indicator signal.
 *
 * @return
 *      - LE_OK     The function succeeded.
 *      - LE_FAULT  The function failed.
 */
//--------------------------------------------------------------------------------------------------
le_result_t pa_riPin_AmIOwnerOfRingSignal
(
    bool* amIOwnerPtr ///< true when application core is the owner of the Ring Indicator signal,
                      ///  false when modem core is the owner of the Ring Indicator signal.
)
{
    LE_ERROR("Unsupported function called");
    return LE_FAULT;
}

//--------------------------------------------------------------------------------------------------
/**
 * Take control of the Ring Indicator signal.
 *
 * @return
 *      - LE_OK     The function succeeded.
 *      - LE_FAULT  The function failed.
 */
//--------------------------------------------------------------------------------------------------
le_result_t pa_riPin_TakeRingSignal
(
    void
)
{
    LE_ERROR("Unsupported function called");
    return LE_FAULT;
}

//--------------------------------------------------------------------------------------------------
/**
 * Release control of the Ring Indicator signal.
 *
 * @return
 *      - LE_OK     The function succeeded.
 *      - LE_FAULT  The function failed.
 */
//--------------------------------------------------------------------------------------------------
le_result_t pa_riPin_ReleaseRingSignal
(
    void
)
{
    LE_ERROR("Unsupported function called");
    return LE_FAULT;
}

//--------------------------------------------------------------------------------------------------
/**
 * Sets the Ring Indicator signal high for configurable duration of time before lowering it.
 *
 */
//--------------------------------------------------------------------------------------------------
void pa_riPin_PulseRingSignal
(
    uint32_t duration ///< [IN] duration in ms
)
{
    LE_ERROR("Unsupported function called");
}