/******************************************************************************/
/* File   : EcuabLinIf.cpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "EcuabLinIf.hpp"
#include "infEcuabLinIf_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABLINIF_AR_RELEASE_VERSION_MAJOR                                    4
#define ECUABLINIF_AR_RELEASE_VERSION_MINOR                                    3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ECUABLINIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ECUABLINIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ECUABLINIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ECUABLINIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_EcuabLinIf, ECUABLINIF_VAR) EcuabLinIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ECUABLINIF_CONST,       ECUABLINIF_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABLINIF_CONFIG_DATA, ECUABLINIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabLinIf_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstEcuabLinIf_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == EcuabLinIf_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == EcuabLinIf_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == EcuabLinIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABLINIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::DeInitFunction(
   void
){
#if(STD_ON == EcuabLinIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabLinIf_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == EcuabLinIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABLINIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::MainFunction(
   void
){
#if(STD_ON == EcuabLinIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabLinIf_InitCheck)
   }
   else{
#if(STD_ON == EcuabLinIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABLINIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::Transmit(
   void
){
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::ScheduleRequest(
   void
){
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::GoToSleep(
   void
){
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::Wakeup(
   void
){
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::GetTrcvMode(
   void
){
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::SetTrcvMode(
   void
){
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::GetTrcvWakeupReason(
   void
){
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::SetTrcvWakeupMode(
   void
){
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::McalCancelTransmit(
   void
){
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::CheckWakeup(
   void
){
}

FUNC(void, ECUABLINIF_CODE) module_EcuabLinIf::CbWakeupConfirmation(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

