#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass wid_Loot_Buttons.wid_Loot_Buttons_C
class UWid_Loot_Buttons_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_Inventory_Buttons_Entry_C*        Back;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Buttons_Entry_C*        MoveAll;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Loot_Buttons_C* GetDefaultObj();

	void Update(const struct FStruct_Inventory_ButtonModifyInfo& Modify);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_wid_Loot_Buttons(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


