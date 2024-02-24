#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xED - 0xD9)
// BlueprintGeneratedClass Rune_HardenStaminaBoost.Rune_HardenStaminaBoost_C
class URune_HardenStaminaBoost_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_2354[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        IconID;                                            // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IconAdded;                                         // 0xEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class URune_HardenStaminaBoost_C* GetDefaultObj();

	void RemoveIcon(class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM);
	void Rune_Enable();
	void Rune_Disable();
	void OnStoneFormEnterCooldown();
	void OnStoneFormExitCooldown();
	void ExecuteUbergraph_Rune_HardenStaminaBoost(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetChanceForTier_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_AddStatusIcon_IconID);
};

}


