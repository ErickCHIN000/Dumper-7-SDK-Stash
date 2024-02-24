#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass wid_BuildSystem_Desc_StatList.wid_BuildSystem_Desc_StatList_C
class UWid_BuildSystem_Desc_StatList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          MainContainer;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_BuildSystem_Desc_StatList_C* GetDefaultObj();

	void Add(const struct FBuildStatEntry& Stat, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_BuildSystem_Desc_StatList_Entry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void Clear();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_BuildSystem_Desc_StatList(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


