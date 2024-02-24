#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_AnimatableCreatures.BPFL_AnimatableCreatures_C
class UBPFL_AnimatableCreatures_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_AnimatableCreatures_C* GetDefaultObj();

	void IsTagActive(int32 TagToCheckCount, const struct FGameplayTag& TagToCheck, const struct FGameplayTag& TagOfInterest, bool& BoolToSet, class UObject* __WorldContext, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
};

}


