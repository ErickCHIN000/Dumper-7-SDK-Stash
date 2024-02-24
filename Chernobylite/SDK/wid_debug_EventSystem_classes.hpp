#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x280 - 0x270)
// WidgetBlueprintGeneratedClass wid_debug_EventSystem.wid_debug_EventSystem_C
class UWid_debug_EventSystem_C : public UWid_debug_IMenuEntry_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_SelectableList_C*                 SelectableList;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_debug_EventSystem_C* GetDefaultObj();

	void GetCategoryName(class FText* Name);
	void Construct();
	void Accept();
	void Up();
	void Down();
	void ExecuteUbergraph_wid_debug_EventSystem(int32 EntryPoint, int32 CallFunc_GetCurrentIndex_CurrentIndex, bool K2Node_SwitchInteger_CmpSuccess);
};

}


