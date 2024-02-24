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

// 0x369 (0x369 - 0x0)
// Function BP_Hitable_AnimalCharacter.BP_Hitable_AnimalCharacter_C.ConsumeHit
struct UBP_Hitable_AnimalCharacter_C_ConsumeHit_Params
{
public:
	class UActorState*                           ActorStateIn;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIcarusDamagePacket                   DamagePacket;                                      // 0x8(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GOAP_Corpse_C*                     CorpseRef;                                         // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AIcarusPlayerController*               ControllerRef;                                     // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AIcarusItem*                           K2Node_DynamicCast_AsIcarus_Item;                  // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               K2Node_DynamicCast_AsIcarus_Player_Controller;     // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetSerialisedItemData_ReturnValue;        // 0x118(0x1F0)(ContainsInstancedReference)
	float                                        CallFunc_RandomFloat_ReturnValue;                  // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerFeedbackSubsystem*              CallFunc_GetWorldSubsystem_ReturnValue;            // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x319(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32FB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTagQueriesRowHandle                  CallFunc_MakeLiteralTagQueries_ReturnValue;        // 0x328(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ItemMatchesQuery_ReturnValue;             // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3308[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x344(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3315[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GOAP_Corpse_C*                     K2Node_DynamicCast_AsBP_GOAP_Corpse;               // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3321[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE1 (0xE1 - 0x0)
// Function BP_Hitable_AnimalCharacter.BP_Hitable_AnimalCharacter_C.CanConsumeHit
struct UBP_Hitable_AnimalCharacter_C_CanConsumeHit_Params
{
public:
	class UActorState*                           ActorStateIn;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIcarusDamagePacket                   DamagePacket;                                      // 0x8(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}
}


