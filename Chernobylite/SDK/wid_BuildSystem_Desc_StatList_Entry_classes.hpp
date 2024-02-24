#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass wid_BuildSystem_Desc_StatList_Entry.wid_BuildSystem_Desc_StatList_Entry_C
class UWid_BuildSystem_Desc_StatList_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Img;                                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Value;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FBuildStatEntry                       Stat;                                              // 0x278(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_BuildSystem_Desc_StatList_Entry_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_wid_BuildSystem_Desc_StatList_Entry(int32 EntryPoint, const struct FBuildStats& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
};

}


