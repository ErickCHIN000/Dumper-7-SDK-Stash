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
// Function AIAction_Mushroom_LowPriorityActions.AIAction_Mushroom_LowPriorityActions_C.OnEnd_DCBF5C7C4B29BB35D231F69C79845780
struct UAIAction_Mushroom_LowPriorityActions_C_OnEnd_DCBF5C7C4B29BB35D231F69C79845780_Params
{
public:
	enum class EGbxActionEndState                EndState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C66[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function AIAction_Mushroom_LowPriorityActions.AIAction_Mushroom_LowPriorityActions_C.BndEvt__PetInteractions_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetShared
struct UAIAction_Mushroom_LowPriorityActions_C_BndEvt__PetInteractions_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetShared_Params
{
public:
	class AGbxAIController*                      AIController;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             Context;                                           // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function AIAction_Mushroom_LowPriorityActions.AIAction_Mushroom_LowPriorityActions_C.BndEvt__Follow.TeleportAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_LowPriorityActions
struct UAIAction_Mushroom_LowPriorityActions_C_BndEvt__Follow_TeleportAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_LowPriorityActions_Params
{
public:
	class AGbxAIController*                      AIController;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             Context;                                           // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0xC9 (0xC9 - 0x0)
// Function AIAction_Mushroom_LowPriorityActions.AIAction_Mushroom_LowPriorityActions_C.ExecuteUbergraph_AIAction_Mushroom_LowPriorityActions
struct UAIAction_Mushroom_LowPriorityActions_C_ExecuteUbergraph_AIAction_Mushroom_LowPriorityActions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CCF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            Temp_struct_Variable;                              // 0x8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FGbxBlackboardKeySelector             K2Node_MakeStruct_GbxBlackboardKeySelector;        // 0x18(0x10)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	enum class EGbxActionEndState                K2Node_CustomEvent_EndState;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CD2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_Actor;                          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x48(0x10)(ZeroConstructor, NoDestructor)
	class AActor*                                Temp_object_Variable;                              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGbxActionEndState                Temp_byte_Variable;                                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CD6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxAIController*                      K2Node_GbxBoundEvent_AIController1;                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         K2Node_GbxBoundEvent_Character1;                   // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             K2Node_GbxBoundEvent_Context1;                     // 0x78(0x18)(ConstParm, NoDestructor)
	class AGbxAIController*                      K2Node_GbxBoundEvent_AIController;                 // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         K2Node_GbxBoundEvent_Character;                    // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             K2Node_GbxBoundEvent_Context;                      // 0xA0(0x18)(ConstParm, NoDestructor)
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayTask_PlayGbxAction*           CallFunc_PlayGbxAction_ReturnValue;                // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


