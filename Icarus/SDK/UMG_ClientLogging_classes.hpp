#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0x3B4 - 0x399)
// WidgetBlueprintGeneratedClass UMG_ClientLogging.UMG_ClientLogging_C
class UUMG_ClientLogging_C : public UUMG_UserInterface_Base_C
{
public:
	uint8                                        Pad_2B51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UListView*                             LogList;                                           // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        MaxListItems;                                      // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ClientLogging_C* GetDefaultObj();

	void Construct();
	void OnLogEntryAdded(struct FIcarusLogEntry& LogEntry);
	void InitLogList();
	void ExecuteUbergraph_UMG_ClientLogging(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UIcarusLogSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UBP_ClientLogItem_C* CallFunc_SpawnObject_ReturnValue, const struct FIcarusLogEntry& K2Node_CustomEvent_LogEntry, class UIcarusLogSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, const struct FIcarusLogEntry& CallFunc_Array_Get_Item_1, bool CallFunc_IsLogValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


