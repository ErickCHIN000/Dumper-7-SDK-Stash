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
// Function Ability_All_Melee_SnakeStick.Ability_All_Melee_SnakeStick_C.DoHiltMod_Hit
struct UAbility_All_Melee_SnakeStick_C_DoHiltMod_Hit_Params
{
public:
	class UGbxDamageType*                        DamageType;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamagedActor;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  Details;                                           // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x374 (0x374 - 0x0)
// Function Ability_All_Melee_SnakeStick.Ability_All_Melee_SnakeStick_C.ExecuteUbergraph_Ability_All_Melee_SnakeStick
struct UAbility_All_Melee_SnakeStick_C_ExecuteUbergraph_Ability_All_Melee_SnakeStick_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4451[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 K2Node_MakeStruct_DataTableValueHandle;            // 0x8(0x18)(NoDestructor)
	struct FDataTableValueHandle                 K2Node_MakeStruct_DataTableValueHandle1;           // 0x20(0x18)(NoDestructor)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue1; // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 K2Node_MakeStruct_DataTableValueHandle2;           // 0x40(0x18)(NoDestructor)
	class UGbxDamageType*                        K2Node_Event_DamageType;                           // 0x58(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamagedActor;                         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  K2Node_Event_Details;                              // 0x68(0x60)(ContainsInstancedReference)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue2; // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_446C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_RunEnvQueryForBestLocation_ResultLocation; // 0xD8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RunEnvQueryForBestLocation_ReturnValue;   // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4488[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueOfAttribute_ReturnValue;          // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueOfAttribute_ReturnValue1;         // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueOfAttribute_ReturnValue2;         // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4499[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x110(0x30)(IsPlainOldData, NoDestructor)
	struct FGbxSpawnActorAsyncRequest            K2Node_MakeStruct_GbxSpawnActorAsyncRequest;       // 0x140(0x230)(ContainsInstancedReference)
	int32                                        CallFunc_SpawnActorAsync_ReturnValue;              // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


