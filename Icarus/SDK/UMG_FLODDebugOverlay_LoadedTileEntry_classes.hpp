#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x29C - 0x260)
// WidgetBlueprintGeneratedClass UMG_FLODDebugOverlay_LoadedTileEntry.UMG_FLODDebugOverlay_LoadedTileEntry_C
class UUMG_FLODDebugOverlay_LoadedTileEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TB_LoadedTileDestroyedInstanceCount;               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TB_LoadedTileName;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TB_LoadedTileRecordActiveInstanceCount;            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TB_LoadedTileRecordCount;                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TB_LoadedTileRecordInstanceCount;                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        NumInstances;                                      // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumActiveInstances;                                // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumDestroyedInstances;                             // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FLODDebugOverlay_LoadedTileEntry_C* GetDefaultObj();

	void InitForTile(class AFLODTile* Tile);
	void ExecuteUbergraph_UMG_FLODDebugOverlay_LoadedTileEntry(int32 EntryPoint, class FText CallFunc_Conv_IntToText_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFLODTile* K2Node_CustomEvent_Tile, TArray<int32>& CallFunc_Map_Keys_Keys, class FText CallFunc_Conv_NameToText_ReturnValue, int32 CallFunc_Array_Get_Item, class UFLODRecord* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Set_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_GetInstanceCount_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3);
};

}


