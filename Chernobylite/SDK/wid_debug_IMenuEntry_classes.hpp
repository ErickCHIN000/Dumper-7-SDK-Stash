#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass wid_debug_IMenuEntry.wid_debug_IMenuEntry_C
class UWid_debug_IMenuEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_DebugMenu_C*                      Owner;                                             // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_debug_IMenuEntry_C* GetDefaultObj();

	void GetCategoryName(class FText* Name);
	void Up();
	void Down();
	void Left();
	void Right();
	void Accept();
	void Back();
	void ExecuteUbergraph_wid_debug_IMenuEntry(int32 EntryPoint);
};

}


