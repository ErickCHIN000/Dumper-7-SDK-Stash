#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB8 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Fear_Sleep.AIA_Creature_Fear_Sleep_C
class UAIA_Creature_Fear_Sleep_C : public UAIA_Creature_Ambient_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Fear_Sleep_C* GetDefaultObj();

	float GetNormalizedScore(class AActor* Target);
	bool CheckOwnerRequirements(bool LNocturnal, bool LIsNight, class UBP_SimulationMonitorComponent_C* LMonitor, class AGameStateBase* LGameState, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_3, bool CallFunc_ActorHasTag_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	bool CheckStaticTargetRequirements(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


