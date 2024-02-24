#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x94 - 0x68)
// BlueprintGeneratedClass IEft_PoisonAntidote.IEft_PoisonAntidote_C
class UIEft_PoisonAntidote_C : public UBPItemEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Duration;                                          // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_104A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABarbarous_C*                          Barbarous;                                         // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_Duration;                                    // 0x88(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        IconID;                                            // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UIEft_PoisonAntidote_C* GetDefaultObj();

	void EndBrownMushroom();
	void OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked);
	void ExecuteUbergraph_IEft_PoisonAntidote(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_AddStatusIcon_IconID, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue);
};

}


