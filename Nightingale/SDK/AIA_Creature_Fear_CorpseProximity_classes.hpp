#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xC0 - 0xC0)
// BlueprintGeneratedClass AIA_Creature_Fear_CorpseProximity.AIA_Creature_Fear_CorpseProximity_C
class UAIA_Creature_Fear_CorpseProximity_C : public UAIA_Creature_Fear_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Fear_CorpseProximity_C* GetDefaultObj();

	bool CheckTargetRequirements(class AActor* Target, class AActor* LTarget, const struct FGameplayTag& CallFunc_DeathDeadTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetPerceivedPlayers_PlayerList, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	bool CheckStaticTargetRequirements(class AActor* Target, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
};

}


