#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass wid_SkillDescription.wid_SkillDescription_C
class UWid_SkillDescription_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USizeBox*                              SizeBox_0;                                         // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x278(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UWid_SkillDescription_C* GetDefaultObj();

	enum class ESlateVisibility GetVisibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_wid_SkillDescription(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


