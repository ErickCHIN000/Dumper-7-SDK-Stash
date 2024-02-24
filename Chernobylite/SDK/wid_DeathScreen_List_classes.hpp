#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x268 - 0x260)
// WidgetBlueprintGeneratedClass wid_DeathScreen_List.wid_DeathScreen_List_C
class UWid_DeathScreen_List_C : public UUserWidget
{
public:
	class UVerticalBox*                          List;                                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_DeathScreen_List_C* GetDefaultObj();

	void AddEntry(class FName ItemName, float Count, class UWid_DeathScreen_ListEntry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}


