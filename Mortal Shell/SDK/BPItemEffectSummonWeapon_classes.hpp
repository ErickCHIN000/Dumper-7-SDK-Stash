#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x71 - 0x68)
// BlueprintGeneratedClass BPItemEffectSummonWeapon.BPItemEffectSummonWeapon_C
class UBPItemEffectSummonWeapon_C : public UBPItemEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EComboTypes                       Weapon;                                            // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPItemEffectSummonWeapon_C* GetDefaultObj();

	void OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked);
	void ExecuteUbergraph_BPItemEffectSummonWeapon(int32 EntryPoint, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked);
};

}


