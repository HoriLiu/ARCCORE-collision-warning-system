#ifndef RTE_INTERNAL_H_
#define RTE_INTERNAL_H_

#include <Rte_Fifo.h>
#include <Rte_DataHandleType.h>
#include <Os.h>

#include <Queue.h>
extern boolean RteInitialized;

/** --- PORT STATUS TYPES ------------------------------------------------------------------- */

/** --- SERVER REQUEST TYPES ---------------------------------------------------------------- */

/** --- SERVER RESPONSE TYPES --------------------------------------------------------------- */

typedef enum {
    RTE_NO_REQUEST_PENDING = 0, RTE_REQUEST_PENDING = 1, RTE_RESPONSE_RECEIVED = 2
} Rte_ResponseStatusType;

/** --- SERVER RETURN SIGNAL IDS ------------------------------------------------------------ */

/** --- SERVER ACTIVATIONS ------------------------------------------------------------------ */

/** --- MODE MACHINE TYPES ------------------------------------------------------------------ */
typedef struct {
    struct {
        struct {

            uint8 nextMode;
            uint8 currentMode;
            uint8 previousMode;
            boolean transitionCompleted;
        } UM_ComMUser_currentMode;
    } comM;
} ComM_ModeMachinesType;

typedef struct {
    struct {
        struct {

            uint8 nextMode;
            uint8 currentMode;
            uint8 previousMode;
            boolean transitionCompleted;
        } currentMode_currentMode;
    } ecuM;
} EcuM_ModeMachinesType;

/** --- MODE MACHINE TRANSITION DEFINES ----------------------------------------------------- */
#define RTE_TRANSITION_ComM_comM_UM_ComMUser_currentMode 3
#define RTE_TRANSITION_EcuM_ecuM_currentMode_currentMode 6

/** --- MODE MACHINE VALUE DEFINES ---------------------------------------------------------- */
#define RTE_MODE_ComM_comM_UM_ComMUser_currentMode_COMM_FULL_COMMUNICATION 0
#define RTE_MODE_ComM_comM_UM_ComMUser_currentMode_COMM_NO_COMMUNICATION 1
#define RTE_MODE_ComM_comM_UM_ComMUser_currentMode_COMM_SILENT_COMMUNICATION 2
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_POST_RUN 0
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_RUN 1
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_SHUTDOWN 2
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_SLEEP 3
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_STARTUP 4
#define RTE_MODE_EcuM_ecuM_currentMode_currentMode_WAKE_SLEEP 5

/** --- EXCLUSIVE AREA TYPES ---------------------------------------------------------------- */
typedef struct {
    boolean entered;
} ExclusiveAreaType;

/** --- EXPORTED FUNCTIONS ------------------------------------------------------------------ */
/** === BswM ======================================================================= */
/** --- bswM -------------------------------------------------------------------- */

/** ------ modeRequestPort_SwcStartCommunication */
Std_ReturnType Rte_Read_BswM_bswM_modeRequestPort_SwcStartCommunication_requestedMode(/*OUT*/ComMModeEnum * data);

/** === CanTranslateSWC ======================================================================= */
/** --- cantranslateSWC -------------------------------------------------------------------- */

/** ------ CanRxPort */
Std_ReturnType Rte_Read_CanTranslateSWC_cantranslateSWC_CanRxPort_message(/*OUT*/IntImpl * data);

/** ------ CanTxPort */
Std_ReturnType Rte_Write_CanTranslateSWC_cantranslateSWC_CanTxPort_message(/*IN*/IntImpl data);

/** ------ SonarRecv */
Std_ReturnType Rte_Read_CanTranslateSWC_cantranslateSWC_SonarRecv_distance(/*OUT*/IntImpl * data);

/** === CollisionDetectionSWC ======================================================================= */
/** --- collisiondetectionSWC -------------------------------------------------------------------- */

/** ------ FrontStatus */
Std_ReturnType Rte_Write_CollisionDetectionSWC_collisiondetectionSWC_FrontStatus_Status(/*IN*/LedStatusImpl data);

/** ------ RearStatus */
Std_ReturnType Rte_Write_CollisionDetectionSWC_collisiondetectionSWC_RearStatus_Status(/*IN*/LedStatusImpl data);

/** ------ SonarRecv */
Std_ReturnType Rte_Read_CollisionDetectionSWC_collisiondetectionSWC_SonarRecv_distance(/*OUT*/IntImpl * data);

/** === ComM ======================================================================= */
/** --- comM -------------------------------------------------------------------- */

/** ------ UM_ComMUser */
Std_ReturnType Rte_Switch_ComM_comM_UM_ComMUser_currentMode(uint8 mode);

/** ------ UR_ComMUser */
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_GetCurrentComMode(/*OUT*/ComM_ModeType * ComMode);
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_GetMaxComMode(/*OUT*/ComM_ModeType * ComMode);
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_GetRequestedComMode(/*OUT*/ComM_ModeType * ComMode);
Std_ReturnType Rte_Call_ComM_comM_UR_ComMUser_RequestComMode(/*IN*/ComM_ModeType ComMode);

/** === EcuM ======================================================================= */
/** --- ecuM -------------------------------------------------------------------- */

/** ------ SR_User */
Std_ReturnType Rte_Call_EcuM_ecuM_SR_User_ReleasePOSTRUN(void);
Std_ReturnType Rte_Call_EcuM_ecuM_SR_User_ReleaseRUN(void);
Std_ReturnType Rte_Call_EcuM_ecuM_SR_User_RequestPOSTRUN(void);
Std_ReturnType Rte_Call_EcuM_ecuM_SR_User_RequestRUN(void);

/** ------ bootTarget */
Std_ReturnType Rte_Call_EcuM_ecuM_bootTarget_GetBootTarget(/*OUT*/EcuM_BootTargetType * target);
Std_ReturnType Rte_Call_EcuM_ecuM_bootTarget_SelectBootTarget(/*IN*/EcuM_BootTargetType target);

/** ------ currentMode */
Std_ReturnType Rte_Switch_EcuM_ecuM_currentMode_currentMode(uint8 mode);

/** ------ shutdownTarget */
Std_ReturnType Rte_Call_EcuM_ecuM_shutdownTarget_GetLastShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode);
Std_ReturnType Rte_Call_EcuM_ecuM_shutdownTarget_GetShutdownTarget(/*OUT*/EcuM_StateType * target, /*OUT*/uint8 * mode);
Std_ReturnType Rte_Call_EcuM_ecuM_shutdownTarget_SelectShutdownTarget(/*IN*/EcuM_StateType target, /*IN*/uint8 mode);

/** === IoHwAb ======================================================================= */
/** --- ioHwAb -------------------------------------------------------------------- */

/** ------ DigitalFrontLED */
Std_ReturnType Rte_Call_IoHwAb_ioHwAb_DigitalFrontLED_Write(/*IN*/DigitalLevel Level);

/** ------ DigitalRearLED */
Std_ReturnType Rte_Call_IoHwAb_ioHwAb_DigitalRearLED_Write(/*IN*/DigitalLevel Level);

/** ------ DigitalSonarEcho */
Std_ReturnType Rte_Call_IoHwAb_ioHwAb_DigitalSonarEcho_Read(/*OUT*/DigitalLevel * Level, /*OUT*/SignalQuality * Quality);

/** ------ DigitalSonarTrig */
Std_ReturnType Rte_Call_IoHwAb_ioHwAb_DigitalSonarTrig_Write(/*IN*/DigitalLevel Level);

/** === LEDActuatorSWC ======================================================================= */
/** --- FrontLedSWC -------------------------------------------------------------------- */

/** ------ DigitalLED */
Std_ReturnType Rte_Call_LEDActuatorSWC_FrontLedSWC_DigitalLED_Write(/*IN*/DigitalLevel Level);

/** ------ Status */
Std_ReturnType Rte_Read_LEDActuatorSWC_FrontLedSWC_Status_Status(/*OUT*/LedStatusImpl * data);

/** --- RearLedSWC -------------------------------------------------------------------- */

/** ------ DigitalLED */
Std_ReturnType Rte_Call_LEDActuatorSWC_RearLedSWC_DigitalLED_Write(/*IN*/DigitalLevel Level);

/** ------ Status */
Std_ReturnType Rte_Read_LEDActuatorSWC_RearLedSWC_Status_Status(/*OUT*/LedStatusImpl * data);

/** === ModeManagerSWC ======================================================================= */
/** --- modeManagerInitSWC -------------------------------------------------------------------- */

/** ------ ComMControl */
Std_ReturnType Rte_Write_ModeManagerSWC_modeManagerInitSWC_ComMControl_requestedMode(/*IN*/ComMModeEnum data);

/** ------ Mode */
// Empty
/** ------ RunControl */
Std_ReturnType Rte_Call_ModeManagerSWC_modeManagerInitSWC_RunControl_RequestRUN(void);

/** === UltraSonicSWC ======================================================================= */
/** --- ultrasonicSWC -------------------------------------------------------------------- */

/** ------ SonarEcho */
Std_ReturnType Rte_Call_UltraSonicSWC_ultrasonicSWC_SonarEcho_Read(/*OUT*/DigitalLevel * Level, /*OUT*/SignalQuality * Quality);

/** ------ SonarSend */
Std_ReturnType Rte_Write_UltraSonicSWC_ultrasonicSWC_SonarSend_distance(/*IN*/IntImpl data);

/** ------ SonarTrig */
Std_ReturnType Rte_Call_UltraSonicSWC_ultrasonicSWC_SonarTrig_Write(/*IN*/DigitalLevel Level);

/** --- SERVER ACTIVATIONS ------------------------------------------------------------------ */
/*lint -e451 AUTOSAR API SWS_MemMap_00003 */

extern int compare_uint16(void *a, void *b, size_t s);

#endif /* RTE_INTERNAL_H_ */

