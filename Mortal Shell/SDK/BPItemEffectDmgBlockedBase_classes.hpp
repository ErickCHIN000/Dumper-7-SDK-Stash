#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x81 - 0x68)
// BlueprintGeneratedClass BPItemEffectDmgBlockedBase.BPItemEffectDmgBlockedBase_C
class UBPItemEffectDmgBlockedBase_C : public UBPItemEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                            Icon;                                              // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABarbarous_C*                          Barbarous;                                         // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFamiliar;                                         // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPItemEffectDmgBlockedBase_C* GetDefaultObj();

	void OnDamageBlocked(class AActor* SourceActor, float Amount);
	void OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked);
	void DmgBlock(class AActor* SourceActor, float Amount);
	void ExecuteUbergraph_BPItemEffectDmgBlockedBase(int32 EntryPoint, class AActor* K2Node_CustomEvent_SourceActor_1, float K2Node_CustomEvent_Amount_1, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, int32 CallFunc_AddStatusIcon_IconID, class AActor* K2Node_CustomEvent_SourceActor, float K2Node_CustomEvent_Amount, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


