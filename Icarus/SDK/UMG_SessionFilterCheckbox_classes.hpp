#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass UMG_SessionFilterCheckbox.UMG_SessionFilterCheckbox_C
class UUMG_SessionFilterCheckbox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button1;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CheckboxImage;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ESessionFilterState               Checked;                                           // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Updated;                                           // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_SessionFilterCheckbox_C* GetDefaultObj();

	void ManuallyCheck(enum class ESessionFilterState Checked);
	void BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void UpdateCheckbox();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_SessionFilterCheckbox(int32 EntryPoint, enum class ESessionFilterState Temp_byte_Variable, enum class ESessionFilterState Temp_byte_Variable_1, enum class ESessionFilterState Temp_byte_Variable_2, enum class ESessionFilterState Temp_byte_Variable_3, enum class ESessionFilterState Temp_byte_Variable_4, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, enum class ESessionFilterState K2Node_Select_Default, enum class ESessionFilterState K2Node_CustomEvent_Checked, class UTexture2D* K2Node_Select_Default_1, bool K2Node_Event_IsDesignTime);
	void Updated__DelegateSignature(enum class ESessionFilterState Checked, bool WasForced);
};

}


