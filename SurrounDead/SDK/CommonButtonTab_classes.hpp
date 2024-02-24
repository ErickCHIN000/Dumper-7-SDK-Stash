#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x330 - 0x2C0)
// WidgetBlueprintGeneratedClass CommonButtonTab.CommonButtonTab_C
class UCommonButtonTab_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button;                                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        TabToOpen;                                         // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_193E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhotoModeWidget_C*                    PhotoModeWidgetRef;                                // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               TabIcon;                                           // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ButtonSize;                                        // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ButtonSizeWhenSelected;                            // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           SelectedTabColor;                                  // 0x308(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           UnselectedTabColor;                                // 0x31C(0x14)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UCommonButtonTab_C* GetDefaultObj();

	void Initialize(class UPhotoModeWidget_C* PhotoModeWidgetRef);
	void SetSelectedTabStyle();
	void SetUnselectedTabStyle();
	void BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_CommonButtonTab(int32 EntryPoint, class UPhotoModeWidget_C* K2Node_CustomEvent_PhotoModeWidgetRef, TScriptInterface<class IPhotoModeDataInterface_C> K2Node_DynamicCast_AsPhoto_Mode_Data_Interface, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_2, bool K2Node_Event_IsDesignTime, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast_1, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast_2);
};

}


