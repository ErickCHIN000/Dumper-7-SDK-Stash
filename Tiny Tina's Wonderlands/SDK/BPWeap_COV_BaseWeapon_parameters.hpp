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

// 0x18 (0x18 - 0x0)
// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.GetRepairStyle
struct ABPWeap_COV_BaseWeapon_C_GetRepairStyle_Params
{
public:
	int32                                        Param;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponCOVRepairComponent*             CallFunc_GetUseModeComponentByClass_ReturnValue;   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.Notify_ReloadEnded
struct ABPWeap_COV_BaseWeapon_C_Notify_ReloadEnded_Params
{
public:
	bool                                         bCompleted;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAmmoGiven;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE2 (0xE2 - 0x0)
// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ExecuteUbergraph_BPWeap_COV_BaseWeapon
struct ABPWeap_COV_BaseWeapon_C_ExecuteUbergraph_BPWeap_COV_BaseWeapon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1818[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FWeaponMaterialEffectData             K2Node_MakeStruct_WeaponMaterialEffectData;        // 0x18(0x60)(NoDestructor)
	struct FWeaponMaterialEffectData             K2Node_MakeStruct_WeaponMaterialEffectData1;       // 0x78(0x60)(NoDestructor)
	int32                                        CallFunc_PlayDynamicMaterialEffect_ReturnValue;    // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PlayDynamicMaterialEffect_ReturnValue1;   // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCompleted;                           // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bAmmoGiven;                           // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


