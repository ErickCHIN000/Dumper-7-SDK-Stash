#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x7C - 0x68)
// BlueprintGeneratedClass IEft_PlaySound.IEft_PlaySound_C
class UIEft_PlaySound_C : public UBPItemEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                            SoundToPlay;                                       // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Pitch;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UIEft_PlaySound_C* GetDefaultObj();

	void OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked);
	void ExecuteUbergraph_IEft_PlaySound(int32 EntryPoint, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked);
};

}


