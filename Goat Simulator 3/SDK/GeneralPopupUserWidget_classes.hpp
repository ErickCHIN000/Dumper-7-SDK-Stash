#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x478 - 0x3F0)
// WidgetBlueprintGeneratedClass GeneralPopupUserWidget.GeneralPopupUserWidget_C
class UGeneralPopupUserWidget_C : public UGGPopupUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      InitialScaleUpAnim;                                // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ButtonContainer;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Content;                                           // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderBg;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGRichTextBlock*                      LoadingError;                                      // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              LoadingSizeBox;                                    // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LoadingSwitcher;                                   // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGButton*                             OutOfFocusArea;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGRichTextBlock*                      PopupBodyLabel;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PopupImage;                                        // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PopupImageSizeBox;                                 // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PopupTitleLabel;                                   // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Content;                                  // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     SearchingAnimation;                                // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsModal;                                          // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1062[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScaleBoxContentScaleMultiplier;                    // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGeneralPopupUserWidget_C* GetDefaultObj();

	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_RequiresUserInputToCancel_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, int32 Temp_int_Array_Index_Variable, const struct FEventReply& CallFunc_Handled_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UPopupButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Button_User_Widget, bool K2Node_DynamicCast_bSuccess, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue_1, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	class UWidget* GetInitialWidgetFocus(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UPopupButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Button_User_Widget, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_Array_Get_Item_1, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue, class UPopupButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Button_User_Widget_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_2);
	void OnFail_A3E57448463014044E667FAE57A172D3(class UTexture2DDynamic* Texture);
	void OnSuccess_A3E57448463014044E667FAE57A172D3(class UTexture2DDynamic* Texture);
	void OnSetLabels(class FText& Title, class FText& Body);
	void OnCreatedButton(struct FPopupButton& Button);
	void OnPopupButtonInteracted(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent);
	void Construct();
	void BndEvt__OutOfFocusArea_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnSetImage(struct FSlateBrush& Brush);
	void OnSetImageURL(const class FString& ImageURL);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_GeneralPopupUserWidget(int32 EntryPoint, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic* Temp_object_Variable, class FText K2Node_Event_Title, class FText K2Node_Event_Body, const struct FPopupButton& K2Node_Event_Button, class UGGUserWidget* K2Node_CustomEvent_Widget, const struct FPointerEvent& K2Node_CustomEvent_PointerEvent, const struct FKeyEvent& K2Node_CustomEvent_KeyEvent, class UPopupButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Button_User_Widget, bool K2Node_DynamicCast_bSuccess, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_RequiresUserInputToDismiss_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FFocusEvent& K2Node_Event_InFocusEvent, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, const struct FSlateBrush& K2Node_Event_Brush, bool CallFunc_IsTopMostPopup_ReturnValue, const class FString& K2Node_Event_ImageURL, bool CallFunc_BooleanAND_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue, class UTexture* CallFunc_GetImage_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPopupButtonUserWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetImageFromIconSet_ReturnValue, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue);
};

}


