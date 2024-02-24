#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB8 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Ambient_CritterFollow.AIA_Creature_Ambient_CritterFollow_C
class UAIA_Creature_Ambient_CritterFollow_C : public UAIA_Creature_Ambient_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Ambient_CritterFollow_C* GetDefaultObj();

	bool CheckStaticTargetRequirements(class AActor* Target, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	float GetNormalizedScore(class AActor* Target);
	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_CheckOwnerRequirements_ReturnValue);
};

}


