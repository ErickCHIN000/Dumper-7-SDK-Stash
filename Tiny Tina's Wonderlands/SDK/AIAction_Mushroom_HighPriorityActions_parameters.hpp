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

// 0x10 (0x10 - 0x0)
// Function AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C.OnEnd_0D2552ED4D321D910C6D4BB6963B5A2E
struct UAIAction_Mushroom_HighPriorityActions_C_OnEnd_0D2552ED4D321D910C6D4BB6963B5A2E_Params
{
public:
	enum class EGbxActionEndState                EndState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FDB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C.BndEvt__ReviveAlly_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon
struct UAIAction_Mushroom_HighPriorityActions_C_BndEvt__ReviveAlly_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Params
{
public:
	class AGbxAIController*                      AIController;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             Context;                                           // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	enum class EAIActionResult                   Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C.BndEvt__ReviveAlly_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon
struct UAIAction_Mushroom_HighPriorityActions_C_BndEvt__ReviveAlly_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon_Params
{
public:
	class AGbxAIController*                      AIController;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             Context;                                           // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C.BndEvt__Teleport_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_HighPriorityActions
struct UAIAction_Mushroom_HighPriorityActions_C_BndEvt__Teleport_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_HighPriorityActions_Params
{
public:
	class AGbxAIController*                      AIController;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             Context;                                           // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x101 (0x101 - 0x0)
// Function AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C.ExecuteUbergraph_AIAction_Mushroom_HighPriorityActions
struct UAIAction_Mushroom_HighPriorityActions_C_ExecuteUbergraph_AIAction_Mushroom_HighPriorityActions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_109F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            Temp_struct_Variable;                              // 0x8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	enum class EGbxActionEndState                K2Node_CustomEvent_EndState;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_Actor;                          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class AActor*                                Temp_object_Variable;                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGbxActionEndState                Temp_byte_Variable;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxAIController*                      K2Node_GbxBoundEvent_AIController2;                // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         K2Node_GbxBoundEvent_Character2;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             K2Node_GbxBoundEvent_Context2;                     // 0x58(0x18)(ConstParm, NoDestructor)
	enum class EAIActionResult                   K2Node_GbxBoundEvent_Result;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxAIController*                      K2Node_GbxBoundEvent_AIController1;                // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         K2Node_GbxBoundEvent_Character1;                   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             K2Node_GbxBoundEvent_Context1;                     // 0x88(0x18)(ConstParm, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxAction*                            CallFunc_K2Play_ReturnValue;                       // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	class AGbxAIController*                      K2Node_GbxBoundEvent_AIController;                 // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         K2Node_GbxBoundEvent_Character;                    // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             K2Node_GbxBoundEvent_Context;                      // 0xD0(0x18)(ConstParm, NoDestructor)
	TArray<struct FGbxActionRegister>            Temp_struct_Variable1;                             // 0xE8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UGameplayTask_PlayGbxAction*           CallFunc_PlayGbxAction_ReturnValue;                // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


