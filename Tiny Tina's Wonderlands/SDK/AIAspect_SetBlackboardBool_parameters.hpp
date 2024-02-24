#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Function AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C.BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool
struct UAIAspect_SetBlackboardBool_C_BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool_Params
{
public:
	class AGbxAIController*                      AIController;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             Context;                                           // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C.BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool
struct UAIAspect_SetBlackboardBool_C_BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool_Params
{
public:
	class AGbxAIController*                      AIController;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             Context;                                           // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	enum class EAIActionResult                   Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C.ExecuteUbergraph_AIAspect_SetBlackboardBool
struct UAIAspect_SetBlackboardBool_C_ExecuteUbergraph_AIAspect_SetBlackboardBool_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_120B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxAIController*                      K2Node_GbxBoundEvent_AIController1;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         K2Node_GbxBoundEvent_Character1;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             K2Node_GbxBoundEvent_Context1;                     // 0x18(0x18)(ConstParm, NoDestructor)
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxAIController*                      K2Node_GbxBoundEvent_AIController;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         K2Node_GbxBoundEvent_Character;                    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             K2Node_GbxBoundEvent_Context;                      // 0x48(0x18)(ConstParm, NoDestructor)
	enum class EAIActionResult                   K2Node_GbxBoundEvent_Result;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1223[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue1;               // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


