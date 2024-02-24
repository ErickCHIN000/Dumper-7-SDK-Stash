#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x5A0 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_GiantTreeClubInteraction.GA_CreatureAbility_GiantTreeClubInteraction_C
class UGA_CreatureAbility_GiantTreeClubInteraction_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_18A1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    WeaponReference;                                   // 0x520(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_GiantTreeClubInteraction_C* GetDefaultObj();

	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_CreateAndEquipItemFromItemID_Success);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_GiantTreeClubInteraction(int32 EntryPoint, bool K2Node_Event_bWasCancelled);
};

}


