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

// 0x78 (0x78 - 0x0)
// Function BPWeaFireProjComp_SR_Tiabolt.BPWeaFireProjComp_SR_Tiabolt_C.UpdateDamageType
struct UBPWeaFireProjComp_SR_Tiabolt_C_UpdateDamageType_Params
{
public:
	class UClass*                                New_Damage_Type;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CallFunc_Map_Find_Value;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponRegisterAttachmentEffectData   K2Node_MakeStruct_WeaponRegisterAttachmentEffectData; // 0x18(0x60)(NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BPWeaFireProjComp_SR_Tiabolt.BPWeaFireProjComp_SR_Tiabolt_C.ExecuteUbergraph_BPWeaFireProjComp_SR_Tiabolt
struct UBPWeaFireProjComp_SR_Tiabolt_C_ExecuteUbergraph_BPWeaFireProjComp_SR_Tiabolt_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FB1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABPWeap_SR_DAL_Tiabolt_C*              K2Node_DynamicCast_AsBPWeap_SR_DAL_Tiabolt;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


