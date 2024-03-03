#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass w_piercings_slider.w_piercings_slider_C
class UW_piercings_slider_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               Button_Reset;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LineOverlay;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               MorphSlider;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MySizeBox;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_piercings_slider_C* GetDefaultObj();

	void BndEvt__w_morph_slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void Construct();
	void BndEvt__w_morph_slider_Button_218_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_w_piercings_slider(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, float CallFunc_GridSnap_Float_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_Get_MPC_Value_Scalar_1, float CallFunc_Get_MPC_Value_ReturnValue, const struct FLinearColor& CallFunc_Get_MPC_Value_ReturnValue1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_2, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1);
};

}


