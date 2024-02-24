#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x4E8 - 0x4C8)
// WidgetBlueprintGeneratedClass WBP_DB_Progression_AssetList.WBP_DB_Progression_AssetList_C
class UWBP_DB_Progression_AssetList_C : public UWBP_NonShippableWindow_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UListView*                             ListView_Resources;                                // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                          AssetNames;                                        // 0x4D8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_DB_Progression_AssetList_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_DB_Progression_AssetList(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_DB_Progression_AssetName_C* CallFunc_SpawnObject_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


