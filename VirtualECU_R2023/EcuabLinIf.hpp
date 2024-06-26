#pragma once
/******************************************************************************/
/* File   : EcuabLinIf.hpp                                                         */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstEcuabLinIf.hpp"
#include "CfgEcuabLinIf.hpp"
#include "EcuabLinIf_core.hpp"
#include "infEcuabLinIf_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabLinIf:
      INTERFACES_EXPORTED_ECUABLINIF
      public abstract_module
   ,  public class_EcuabLinIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabLinIf_Type* lptrConst = (ConstEcuabLinIf_Type*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabLinIf;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABLINIF_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABLINIF_CONST,       ECUABLINIF_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABLINIF_CONFIG_DATA, ECUABLINIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABLINIF_CODE) DeInitFunction (void);
      FUNC(void, ECUABLINIF_CODE) MainFunction   (void);
      ECUABLINIF_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_EcuabLinIf, ECUABLINIF_VAR) EcuabLinIf;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

