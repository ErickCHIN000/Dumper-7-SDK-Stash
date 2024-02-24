#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x2D8 - 0x230)
// WidgetBlueprintGeneratedClass UMG_Storyteller_Black_Background.UMG_Storyteller_Black_Background_C
class UUMG_Storyteller_Black_Background_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_ShowUnlock;                                   // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeIn_Dismiss;                               // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeToBlack;                                  // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Dismiss;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_UnlockMessage;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Credits;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Unlock;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ConfirmButtonPressAndHold_C*       UI_Button_Confirm;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Credits_C*                         UI_Credits;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Storyteller;                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_Storyteller_Credits_C*             BP_Storyteller_Credits;                            // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         PlayFadeInAnim;                                    // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_Credits_Music                MusicToPlay;                                       // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12AF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Audio_Music;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_FadeOut;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_BeginDelay;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnUnlockMessageShown;                              // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_Storyteller_Black_Background_C* GetDefaultObj();

	void PlayFadeToBlack(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ShouldFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetImmediateVisibility();
	void PlayFadeOut(FDelegateProperty_ Delegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PlayFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnOpen(bool PlayFadeIn, enum class Enum_Credits_Music MusicToPlay);
	void BndEvt__UI_Button_Confirm_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
	void PlayMusic();
	void StopMusic();
	void ActivateButton_();
	void Activate_Dismiss();
	void ShowUnlockMessage();
	void UnlockShown();
	void OnFadeToBlack_End();
	void ExecuteUbergraph_UMG_Storyteller_Black_Background(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_PlayFadeIn, enum class Enum_Credits_Music K2Node_CustomEvent_MusicToPlay, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void OnUnlockMessageShown__DelegateSignature();
};

}


