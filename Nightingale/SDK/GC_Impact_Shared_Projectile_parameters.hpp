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

// 0x24 (0x24 - 0x0)
// Function GC_Impact_Shared_Projectile.GC_Impact_Shared_Projectile_C.GetSourceTagFromActor
struct UGC_Impact_Shared_Projectile_C_GetSourceTagFromActor_Params
{
public:
	class AActor*                                StrikingActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          SourceTag;                                         // 0x8(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileBase_C*                  K2Node_DynamicCast_AsBP_Projectile_Base;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7694[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_Get_Source_Tag_ImpactTag;                 // 0x1C(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function GC_Impact_Shared_Projectile.GC_Impact_Shared_Projectile_C.GetElementTagFromActor
struct UGC_Impact_Shared_Projectile_C_GetElementTagFromActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ElementalTag;                                      // 0x8(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileBase_C*                  K2Node_DynamicCast_AsBP_Projectile_Base;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7757[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_Get_Element_Tag_ElementTag;               // 0x1C(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function GC_Impact_Shared_Projectile.GC_Impact_Shared_Projectile_C.Get Impact Tag
struct UGC_Impact_Shared_Projectile_C_Get_Impact_Tag_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag;                                               // 0x8(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileBase_C*                  K2Node_DynamicCast_AsBP_Projectile_Base;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7849[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_Get_Impact_Tag_ImpactTag;                 // 0x1C(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


