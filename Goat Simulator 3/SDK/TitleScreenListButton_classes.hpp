#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x6D0 - 0x628)
// WidgetBlueprintGeneratedClass TitleScreenListButton.TitleScreenListButton_C
class UTitleScreenListButton_C : public UGGButtonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HoverAnim;                                         // 0x630(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            ButtonText;                                        // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_ListButton;                               // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x648(0x18)(Edit, BlueprintVisible)
	struct FLinearColor                          DefaultColor;                                      // 0x660(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HoverColor;                                        // 0x670(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ButtonDefaultColorBP;                              // 0x680(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ButtonHoverColorBP;                                // 0x690(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMenuNavigationContext                MenuTag;                                           // 0x6A0(0x28)(Edit, BlueprintVisible)
	bool                                         bTrapEnterInput;                                   // 0x6C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B81[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScaleBoxListButtonMultiplier;                      // 0x6CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTitleScreenListButton_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void SetInitialFocus();
	void OnSetActive(bool bActive);
	void OnFocusMarkerEnabled(bool bEnabled, bool bPrevious);
	void SetParentMenu(class UGGMenuUserWidget* Parent);
	void OnMenuTabChanged(const struct FGameplayTag& TabID);
	void SetMenuObject(class UObject* Object);
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TitleScreenListButton(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bActive, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, bool K2Node_Event_bEnabled, bool K2Node_Event_bPrevious, class UGGMenuUserWidget* K2Node_CustomEvent_Parent, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_TabID, class UObject* K2Node_Event_Object, class UGGMenuDataAsset* K2Node_DynamicCast_AsGGMenu_Data_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MatchesTag_ReturnValue, const struct FLinearColor& K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue_1);
};

}


