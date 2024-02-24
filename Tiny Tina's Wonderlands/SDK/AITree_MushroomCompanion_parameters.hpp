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
// Function AITree_MushroomCompanion.AITree_MushroomCompanion_C.BndEvt__LeapDirect_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_MushroomCompanion
struct UAITree_MushroomCompanion_C_BndEvt__LeapDirect_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_MushroomCompanion_Params
{
public:
	class AGbxAIController*                      AIController;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             Context;                                           // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function AITree_MushroomCompanion.AITree_MushroomCompanion_C.BndEvt__PlayGbxAction_1_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands
struct UAITree_MushroomCompanion_C_BndEvt__PlayGbxAction_1_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands_Params
{
public:
	class AGbxAIController*                      AIController;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             Context;                                           // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	enum class EAIActionResult                   Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function AITree_MushroomCompanion.AITree_MushroomCompanion_C.BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_MushroomCompanion
struct UAITree_MushroomCompanion_C_BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_MushroomCompanion_Params
{
public:
	class AGbxAIController*                      AIController;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             Context;                                           // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	enum class EAIActionResult                   Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function AITree_MushroomCompanion.AITree_MushroomCompanion_C.ExecuteUbergraph_AITree_MushroomCompanion
struct UAITree_MushroomCompanion_C_ExecuteUbergraph_AITree_MushroomCompanion_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1130[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxBlackboardKeySelector             K2Node_MakeStruct_GbxBlackboardKeySelector;        // 0x8(0x10)(NoDestructor)
	class AGbxAIController*                      K2Node_GbxBoundEvent_AIController2;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         K2Node_GbxBoundEvent_Character2;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             K2Node_GbxBoundEvent_Context2;                     // 0x28(0x18)(ConstParm, NoDestructor)
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxAIController*                      K2Node_GbxBoundEvent_AIController1;                // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         K2Node_GbxBoundEvent_Character1;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             K2Node_GbxBoundEvent_Context1;                     // 0x58(0x18)(ConstParm, NoDestructor)
	enum class EAIActionResult                   K2Node_GbxBoundEvent_Result1;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_114B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue1;               // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxBlackboardKeySelector             K2Node_MakeStruct_GbxBlackboardKeySelector1;       // 0x80(0x10)(NoDestructor)
	struct FGbxBlackboardKeySelector             K2Node_MakeStruct_GbxBlackboardKeySelector2;       // 0x90(0x10)(NoDestructor)
	class AGbxAIController*                      K2Node_GbxBoundEvent_AIController;                 // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         K2Node_GbxBoundEvent_Character;                    // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIActionBlueprintContext             K2Node_GbxBoundEvent_Context;                      // 0xB0(0x18)(ConstParm, NoDestructor)
	enum class EAIActionResult                   K2Node_GbxBoundEvent_Result;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_115A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue2;               // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


