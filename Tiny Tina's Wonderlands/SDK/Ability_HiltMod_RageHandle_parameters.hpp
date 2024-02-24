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

// 0x70 (0x70 - 0x0)
// Function Ability_HiltMod_RageHandle.Ability_HiltMod_RageHandle_C.DoHiltMod_Hit
struct UAbility_HiltMod_RageHandle_C_DoHiltMod_Hit_Params
{
public:
	class UGbxDamageType*                        DamageType;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamagedActor;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  Details;                                           // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x184 (0x184 - 0x0)
// Function Ability_HiltMod_RageHandle.Ability_HiltMod_RageHandle_C.ExecuteUbergraph_Ability_HiltMod_RageHandle
struct UAbility_HiltMod_RageHandle_C_ExecuteUbergraph_Ability_HiltMod_RageHandle_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B67[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x10(0x38)(NoDestructor)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x50(0x18)(NoDestructor, ContainsInstancedReference)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec1;               // 0x68(0x38)(NoDestructor)
	class UGbxDamageType*                        K2Node_Event_DamageType;                           // 0xA0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamagedActor;                         // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  K2Node_Event_Details;                              // 0xB0(0x60)(ContainsInstancedReference)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue1;             // 0x110(0x18)(NoDestructor, ContainsInstancedReference)
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x128(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectQuery                    K2Node_MakeStruct_StatusEffectQuery;               // 0x140(0x18)(NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectQueryResult              CallFunc_QueryStatusEffect_ReturnValue;            // 0x15C(0x10)(NoDestructor)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x178(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


