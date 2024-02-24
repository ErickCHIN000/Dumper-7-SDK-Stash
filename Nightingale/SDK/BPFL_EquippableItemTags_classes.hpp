#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_EquippableItemTags.BPFL_EquippableItemTags_C
class UBPFL_EquippableItemTags_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_EquippableItemTags_C* GetDefaultObj();

	void MainHandTag(class UObject* __WorldContext, struct FGameplayTag* SledgehammerTag);
	void GearAndClothingSlotTags(class UObject* __WorldContext, struct FGameplayTagContainer* Tags);
	void AxepickTag(class UObject* __WorldContext, struct FGameplayTag* AxepickTag);
	void HuntingKnifeTag(class UObject* __WorldContext, struct FGameplayTag* HuntingKnifeTag);
	void SledgehammerTag(class UObject* __WorldContext, struct FGameplayTag* SledgehammerTag);
};

}


