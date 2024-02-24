#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass UMG_DarkTitlebar.UMG_DarkTitlebar_C
class UUMG_DarkTitlebar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TitleText;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x270(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_DarkTitlebar_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void UpdateText(class FText Text);
	void ExecuteUbergraph_UMG_DarkTitlebar(int32 EntryPoint, class FText K2Node_CustomEvent_Text, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue);
};

}


