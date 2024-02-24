#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x90 - 0x90)
// BlueprintGeneratedClass AIAR_TargetIsPlayer.AIAR_TargetIsPlayer_C
class UAIAR_TargetIsPlayer_C : public UAIActionRequirement
{
public:

	static class UClass* StaticClass();
	static class UAIAR_TargetIsPlayer_C* GetDefaultObj();

	bool CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
};

}


