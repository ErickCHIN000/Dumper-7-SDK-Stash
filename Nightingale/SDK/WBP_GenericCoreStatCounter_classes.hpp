#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x478 - 0x398)
// WidgetBlueprintGeneratedClass WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C
class UWBP_GenericCoreStatCounter_C : public UNWXCoreStatCounterWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TXT_StatName;                                      // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_StatValue;                                     // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Tooltip;                                        // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGameplayAttributeUIData              AttributeUIData;                                   // 0x3B8(0xC0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_GenericCoreStatCounter_C* GetDefaultObj();

	void InitializeDesignerPreview();
	class UWidget* GetToolTipWidget_VBTooltip(bool CallFunc_TextIsEmpty_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void BP_HandleAttributeChanged(float NewValue, float Delta);
	void UpdateValue(float CallFunc_GetValue_ReturnValue, int32 CallFunc_FCeil_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_FCeil_A_ImplicitCast);
	void Initialize(bool CallFunc_TryGetUIDataForAttribute_bSuccess, const struct FGameplayAttributeUIData& CallFunc_TryGetUIDataForAttribute_OutData);
	void Construct();
	void ExecuteUbergraph_WBP_GenericCoreStatCounter(int32 EntryPoint);
};

}


