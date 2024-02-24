#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass WBP_DynamicText.WBP_DynamicText_C
class UWBP_DynamicText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_39;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  In_Text;                                           // 0x270(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           In_Color;                                          // 0x288(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateFontInfo                        In_Font_Info;                                      // 0x2B0(0x58)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DynamicText_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_DynamicText(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


