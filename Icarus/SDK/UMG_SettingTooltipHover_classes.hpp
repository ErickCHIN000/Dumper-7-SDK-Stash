#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass UMG_SettingTooltipHover.UMG_SettingTooltipHover_C
class UUMG_SettingTooltipHover_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               HoverButton;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SettingTooltipText_C*             TextWidget;                                        // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                 States;                                            // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                          Descriptions;                                      // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUMG_SettingTooltipHover_C* GetDefaultObj();

	void Construct();
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Set_Requirements(TArray<class FText>& Descriptions, TArray<bool>& States);
	void ExecuteUbergraph_UMG_SettingTooltipHover(int32 EntryPoint, TArray<class FText>& K2Node_CustomEvent_Descriptions, TArray<bool>& K2Node_CustomEvent_States, class UUMG_SettingTooltipText_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


