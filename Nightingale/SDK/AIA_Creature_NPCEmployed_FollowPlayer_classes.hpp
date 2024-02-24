#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xC0 - 0xC0)
// BlueprintGeneratedClass AIA_Creature_NPCEmployed_FollowPlayer.AIA_Creature_NPCEmployed_FollowPlayer_C
class UAIA_Creature_NPCEmployed_FollowPlayer_C : public UAIA_Creature_NPCEmployed_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_NPCEmployed_FollowPlayer_C* GetDefaultObj();

	bool CheckTargetRequirements(class AActor* Target, bool CallFunc_CheckTargetRequirements_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTargetReachableOnNavMesh_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	float GetNormalizedScore(class AActor* Target);
	bool CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
};

}


