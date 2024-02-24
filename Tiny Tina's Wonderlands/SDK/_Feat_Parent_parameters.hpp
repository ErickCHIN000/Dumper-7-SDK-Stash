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

// 0x29 (0x29 - 0x0)
// Function _Feat_Parent._Feat_Parent_C.FindAllCompanions
struct U_Feat_Parent_C_FindAllCompanions_Params
{
public:
	TArray<class AActor*>                        Res;                                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor)
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_RunEnvQueryForAllActors_ResultActors;     // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_RunEnvQueryForAllActors_ReturnValue;      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function _Feat_Parent._Feat_Parent_C.FindAllPlayerCharacters
struct U_Feat_Parent_C_FindAllPlayerCharacters_Params
{
public:
	TArray<class AActor*>                        Res;                                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<class AActor*>                        LocalList;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_RunEnvQueryForAllActors_ResultActors;     // 0x28(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_RunEnvQueryForAllActors_ReturnValue;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function _Feat_Parent._Feat_Parent_C.ExecuteUbergraph__Feat_Parent
struct U_Feat_Parent_C_ExecuteUbergraph__Feat_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


