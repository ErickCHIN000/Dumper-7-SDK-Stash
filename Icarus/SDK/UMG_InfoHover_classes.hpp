#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass UMG_InfoHover.UMG_InfoHover_C
class UUMG_InfoHover_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               HoverButton;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_InfoHoverText_C*                  TextWidget;                                        // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_InfoHover_C* GetDefaultObj();

	void Construct();
	void SetInnerTooltipText(class FText InText);
	void ExecuteUbergraph_UMG_InfoHover(int32 EntryPoint, class UUMG_InfoHoverText_C* CallFunc_Create_ReturnValue, class FText K2Node_CustomEvent_InText);
};

}


