#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x280 - 0x270)
// WidgetBlueprintGeneratedClass wid_debug_SaveMenu.wid_debug_SaveMenu_C
class UWid_debug_SaveMenu_C : public UWid_debug_IMenuEntry_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_SelectableList_C*                 SelectableList;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_debug_SaveMenu_C* GetDefaultObj();

	void GetCategoryName(class FText* Name);
	void Construct();
	void Accept();
	void Up();
	void Down();
	void ExecuteUbergraph_wid_debug_SaveMenu(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_LoadGame_ReturnValue, bool CallFunc_LoadGameFromFile_ReturnValue, bool CallFunc_SaveGameToFile_ReturnValue, bool CallFunc_SaveGame_ReturnValue, int32 CallFunc_GetCurrentIndex_CurrentIndex, bool K2Node_SwitchInteger_CmpSuccess, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue);
};

}


