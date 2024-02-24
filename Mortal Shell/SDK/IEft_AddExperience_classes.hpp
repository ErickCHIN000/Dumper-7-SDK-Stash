#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x78 - 0x68)
// BlueprintGeneratedClass IEft_AddExperience.IEft_AddExperience_C
class UIEft_AddExperience_C : public UBPItemEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        ExperienceGain;                                    // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExperienceGainIfFamiliar;                          // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UIEft_AddExperience_C* GetDefaultObj();

	void OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked);
	void ExecuteUbergraph_IEft_AddExperience(int32 EntryPoint, bool Temp_bool_Variable, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, int32 K2Node_Select_Default);
};

}


