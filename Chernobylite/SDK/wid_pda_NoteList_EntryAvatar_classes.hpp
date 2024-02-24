#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass wid_pda_NoteList_EntryAvatar.wid_pda_NoteList_EntryAvatar_C
class UWid_pda_NoteList_EntryAvatar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_MissionSelection_Avatar_C*        Avatar;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x278(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_pda_NoteList_EntryAvatar_C* GetDefaultObj();

	void Construct();
	void UpdateVisibility();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_pda_NoteList_EntryAvatar(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


