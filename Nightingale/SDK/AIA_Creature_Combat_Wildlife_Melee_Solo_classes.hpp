#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x178 - 0x178)
// BlueprintGeneratedClass AIA_Creature_Combat_Wildlife_Melee_Solo.AIA_Creature_Combat_Wildlife_Melee_Solo_C
class UAIA_Creature_Combat_Wildlife_Melee_Solo_C : public UAIA_Creature_Combat_Wildlife_Melee_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_Wildlife_Melee_Solo_C* GetDefaultObj();

	void OwnerMeleeRequirements(bool* Success, double MaxAngle, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1);
};

}


