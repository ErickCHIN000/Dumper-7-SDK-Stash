#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x80 - 0x68)
// BlueprintGeneratedClass BPItemEffectParryBase.BPItemEffectParryBase_C
class UBPItemEffectParryBase_C : public UBPItemEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                            Icon;                                              // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABarbarous_C*                          Barbarous;                                         // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPItemEffectParryBase_C* GetDefaultObj();

	void AddIconGlow(bool Remove, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM);
	void RemoveIcon(class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM);
	void OnParryOver();
	void OnParry(class ABaseCharacter_C* ParriedEnemy);
	void OnSuccessfulParry(class ABaseCharacter_C* ParriedEnemy);
	void OnRipostePossible(const struct FTimerHandle& RiposteWindowExpirationTimer, class ABaseCharacter_C* ParriedEnemy);
	void OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked);
	void ExecuteUbergraph_BPItemEffectParryBase(int32 EntryPoint, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, class ABaseCharacter_C* K2Node_CustomEvent_ParriedEnemy_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_AddStatusIcon_IconID, class ABaseCharacter_C* K2Node_CustomEvent_ParriedEnemy_1, const struct FTimerHandle& K2Node_CustomEvent_RiposteWindowExpirationTimer, class ABaseCharacter_C* K2Node_CustomEvent_ParriedEnemy, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
};

}


