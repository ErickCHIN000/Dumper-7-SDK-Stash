#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x148 - 0xB0)
// BlueprintGeneratedClass StormModeNotifier_Component.StormModeNotifier_Component_C
class UStormModeNotifier_Component_C : public UActorComponent
{
public:
	bool                                         IsInSelectWindow;                                  // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnValueChanged_SelectWindow;                       // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsInVoiceOverDialogue;                             // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnValueChanged_VoiceOverDialogue;                  // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUI_Dialogue_VoiceOver_C*              UI_Dialogue_VoiceOver;                             // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnMilestoneProgress;                               // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFinalBoss_FirstBossDefeated;                     // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFinalBoss_SecondBossDefeated;                    // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFinalBoss_ThirdBossDefeated;                     // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFinalBoss_FourthBossDefeated;                    // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSisterDialogue;                                  // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UStormModeNotifier_Component_C* GetDefaultObj();

	void Get_VODialogueWidget(class UUI_Dialogue_VoiceOver_C** Widget);
	void Set_VODialogueWidget(class UUI_Dialogue_VoiceOver_C* Widget);
	void GetCurrentValue_IsVoiceOverDialogue(bool* Value);
	void SetValue_IsVoiceOverDialogue(bool Value);
	void GetCurrentValue_SelectWindow(bool* Value);
	void SetValue_SelectWindow(bool Value);
	void OnSisterDialogue__DelegateSignature(bool Start_);
	void OnFinalBoss_FourthBossDefeated__DelegateSignature();
	void OnFinalBoss_ThirdBossDefeated__DelegateSignature();
	void OnFinalBoss_SecondBossDefeated__DelegateSignature();
	void OnFinalBoss_FirstBossDefeated__DelegateSignature();
	void OnMilestoneProgress__DelegateSignature(class FName ID, int32 LastUnlockedTier, float Progress);
	void OnValueChanged_VoiceOverDialogue__DelegateSignature(bool ReturnValue);
	void OnValueChanged_SelectWindow__DelegateSignature(bool ReturnValue);
};

}


