#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xD0 - 0xC0)
// BlueprintGeneratedClass AIA_Creature_NPCEmployed_FollowPlayer_CantPath.AIA_Creature_NPCEmployed_FollowPlayer_CantPath_C
class UAIA_Creature_NPCEmployed_FollowPlayer_CantPath_C : public UAIA_Creature_NPCEmployed_C
{
public:
	double                                       TeleportRange;                                     // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DontTeleportRange;                                 // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_NPCEmployed_FollowPlayer_CantPath_C* GetDefaultObj();

	bool CheckTargetRequirements(class AActor* Target);
	bool CheckStaticTargetRequirements(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	bool CheckOwnerRequirements(class ANWXCharacter* LLeaderCharacter, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_IsTargetReachableOnNavMesh_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsPossedPawnOnNavMesh_ReturnValue, class ANWXCharacter* CallFunc_GetLeader_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CheckOwnerRequirements_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	float GetNormalizedScore(class AActor* Target);
};

}


