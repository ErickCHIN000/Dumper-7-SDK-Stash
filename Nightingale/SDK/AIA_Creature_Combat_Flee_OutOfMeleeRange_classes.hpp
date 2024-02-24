#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xC0 - 0xC0)
// BlueprintGeneratedClass AIA_Creature_Combat_Flee_OutOfMeleeRange.AIA_Creature_Combat_Flee_OutOfMeleeRange_C
class UAIA_Creature_Combat_Flee_OutOfMeleeRange_C : public UAIA_Creature_Fear_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_Flee_OutOfMeleeRange_C* GetDefaultObj();

	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, class APawn* CallFunc_GetOwnerPawn_ReturnValue, bool CallFunc_CheckOwnerRequirements_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool CheckTargetRequirements(class AActor* Target, bool CallFunc_CheckTargetRequirements_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetMeleeCombatRangeMax_self_CastInput, float CallFunc_GetMeleeCombatRangeMax_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast);
	float GetNormalizedScore(class AActor* Target);
};

}


