#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x178 - 0x178)
// BlueprintGeneratedClass AIA_Creature_Combat_Wildlife_Melee_NoTicket.AIA_Creature_Combat_Wildlife_Melee_NoTicket_C
class UAIA_Creature_Combat_Wildlife_Melee_NoTicket_C : public UAIA_Creature_Combat_Wildlife_Melee_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_Wildlife_Melee_NoTicket_C* GetDefaultObj();

	void OwnerMeleeRequirements(bool* Success, double MaxAngle, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	float GetNormalizedScore(class AActor* Target, float CallFunc_GetNormalizedScore_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


