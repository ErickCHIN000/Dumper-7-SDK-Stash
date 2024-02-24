#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x94 (0x314 - 0x280)
// WidgetBlueprintGeneratedClass UMG_ConfirmationPopup.UMG_ConfirmationPopup_C
class UUMG_ConfirmationPopup_C : public UConfirmationPopupBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       ContentSlot;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_96;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 OptionAButton;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 OptionBButton;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichText;                                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Main;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFMODEvent*                            ClickSoundDefault_A;                               // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ClickSoundDefault_B;                               // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CachedOptionAImage;                                // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CachedOptionBImage;                                // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CachedOptionATint;                                 // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CachedOptionBTint;                                 // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DesiredWidth;                                      // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ConfirmationPopup_C* GetDefaultObj();

	void GetDefaultClickSound(class UUMG_IconTextButton_C* Button, class UFMODEvent** ClickSound, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
	void SetOption(class UUMG_IconTextButton_C* Button, class FText Text, class UFMODEvent* FMODEvent, class UTexture2D* Image, const struct FLinearColor& Tint, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UTexture2D* K2Node_Select_Default_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, class UTexture2D* K2Node_Select_Default_2, class UFMODEvent* Temp_wildcard_Variable, class UFMODEvent* CallFunc_GetDefaultClickSound_ClickSound, bool CallFunc_IsValid_ReturnValue_1);
	void CallCancel();
	void BndEvt__OptionAButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void BndEvt__OptionBButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void SetPromptDetails(struct FConfirmationPopupDetails& ConfirmationPopupDetails);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_ConfirmationPopup(int32 EntryPoint, class UUserWidget* Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue, const struct FConfirmationPopupDetails& K2Node_Event_ConfirmationPopupDetails, class UUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool K2Node_Event_IsDesignTime);
};

}


