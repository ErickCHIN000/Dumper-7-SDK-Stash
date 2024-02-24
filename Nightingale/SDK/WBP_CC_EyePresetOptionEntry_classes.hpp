#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7C (0x3C4 - 0x348)
// WidgetBlueprintGeneratedClass WBP_CC_EyePresetOptionEntry.WBP_CC_EyePresetOptionEntry_C
class UWBP_CC_EyePresetOptionEntry_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_No_Text_C*          CBU_Button;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_CC_Appearance;                                 // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_CC_SelectedHighlight;                          // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_FocusHighlight;                                // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_0;                                     // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AppearanceSelected;                                // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   EyePresetRow;                                      // 0x388(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Dev_Description;                                   // 0x398(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsSelectedCached;                                  // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4F14[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DMI_Desaturator;                                   // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        GridIndex;                                         // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_EyePresetOptionEntry_C* GetDefaultObj();

	void UpdateSelectedCosmetics(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_real_Variable, float Temp_real_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1);
	void UpdateSelectedState(bool IsSelected, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess);
	void Initialize(enum class ECommonInputType NewLocalVar, enum class ECommonInputType CallFunc_GetOwningPlayerInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void InitializeDesignerPreview(bool CallFunc_IsValidRowHandle_IsValid);
	class UWidget* BP_GetDesiredFocusTarget();
	void Refresh(const struct FPresetEyeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue);
	void Construct();
	void SimulateClick();
	void BndEvt__WBP_CC_EyePresetOptionEntry_CBU_Button_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_CC_EyePresetOptionEntry(int32 EntryPoint, const struct FGameplayTag& CallFunc_SelectedLeftEventTag_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue_1);
	void AppearanceSelected__DelegateSignature(const struct FDataTableRowHandle& Appearance_Row, int32 GridIndex);
};

}


