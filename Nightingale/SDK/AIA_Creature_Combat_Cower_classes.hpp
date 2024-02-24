#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x178 - 0x16C)
// BlueprintGeneratedClass AIA_Creature_Combat_Cower.AIA_Creature_Combat_Cower_C
class UAIA_Creature_Combat_Cower_C : public UAIA_Creature_Combat_C
{
public:
	uint8                                        Pad_2984[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ProximityThreshold;                                // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_Cower_C* GetDefaultObj();

	bool CheckTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_CheckTargetRequirements_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_3);
	float GetNormalizedScore(class AActor* Target);
	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_HasLeader_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetPlayerInRange_PlayerInRange, class AActor* CallFunc_GetPlayerInRange_PlayerActor, double CallFunc_GetPlayerInRange_Distance, bool CallFunc_GetEnemyInRange_EnemyInRange, class AActor* CallFunc_GetEnemyInRange_EnemyActor, double CallFunc_GetEnemyInRange_Distance, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3);
};

}


