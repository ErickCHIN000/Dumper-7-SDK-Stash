#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x271 - 0x260)
// WidgetBlueprintGeneratedClass wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C
class UWid_LevelSelection_Entry_Desc_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            Title;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class Enum_LevelSelection_Desc_Type     CurrentType;                                       // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_LevelSelection_Entry_Desc_C* GetDefaultObj();

	void ChangeType(enum class Enum_LevelSelection_Desc_Type NewType, bool K2Node_SwitchEnum_CmpSuccess);
	void ShowDesc(bool Show);
	void SetTitle(class FText Map);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_LevelSelection_Entry_Desc(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


