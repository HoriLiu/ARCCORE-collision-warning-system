/**
 * Application Types Header File
 *
 * @req SWS_Rte_07122
 */

/** === HEADER ====================================================================================
 */

#ifndef RTE_MODEMANAGERSWC_TYPE_H_
#define RTE_MODEMANAGERSWC_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_07127
 */
#include <Rte_Type.h>

/** === BODY ====================================================================================
 */

/** --- ENUMERATION DATA TYPES ------------------------------------------------------------------ */

/** Enum literals for ComMModeEnum */
#ifndef COMM_NO_COMMUNICATION
#define COMM_NO_COMMUNICATION 0U
#endif /* COMM_NO_COMMUNICATION */

#ifndef COMM_SILENT_COMMUNICATION
#define COMM_SILENT_COMMUNICATION 1U
#endif /* COMM_SILENT_COMMUNICATION */

#ifndef COMM_FULL_COMMUNICATION
#define COMM_FULL_COMMUNICATION 2U
#endif /* COMM_FULL_COMMUNICATION */

/** --- MODE TYPES ------------------------------------------------------------------------------ */

#ifndef RTE_MODETYPE_EcuM_Mode
#define RTE_MODETYPE_EcuM_Mode
typedef uint8 Rte_ModeType_EcuM_Mode;
#endif

#ifndef RTE_TRANSITION_EcuM_Mode
#define RTE_TRANSITION_EcuM_Mode 6U
#endif

#ifndef RTE_MODE_EcuM_Mode_POST_RUN
#define RTE_MODE_EcuM_Mode_POST_RUN 0U
#endif

#ifndef RTE_MODE_EcuM_Mode_RUN
#define RTE_MODE_EcuM_Mode_RUN 1U
#endif

#ifndef RTE_MODE_EcuM_Mode_SHUTDOWN
#define RTE_MODE_EcuM_Mode_SHUTDOWN 2U
#endif

#ifndef RTE_MODE_EcuM_Mode_SLEEP
#define RTE_MODE_EcuM_Mode_SLEEP 3U
#endif

#ifndef RTE_MODE_EcuM_Mode_STARTUP
#define RTE_MODE_EcuM_Mode_STARTUP 4U
#endif

#ifndef RTE_MODE_EcuM_Mode_WAKE_SLEEP
#define RTE_MODE_EcuM_Mode_WAKE_SLEEP 5U
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_07126 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_MODEMANAGERSWC_TYPE_H_ */
