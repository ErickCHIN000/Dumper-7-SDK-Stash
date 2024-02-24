#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass wid_BuildSystem_GlobalStatisticsSmall.wid_BuildSystem_GlobalStatisticsSmall_C
class UWid_BuildSystem_GlobalStatisticsSmall_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Image_0;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Statistics;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        BottomOffset;                                      // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOnlyCustom;                                      // 0x284(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2770[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          UseCustomOnBuildings;                              // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_BuildSystem_GlobalStatisticsSmall_C* GetDefaultObj();

	void GetCurrentBuildID(class FName* BuildID);
	void UpdateSize();
	void GetGlobalValueFromCurrentBuildID(class FName GlobalStatID, class FName BuildID, int32* Value, int32 Temp_int_Array_Index_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 Temp_int_Loop_Counter_Variable, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FBuildGlobalStatValueInternal& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void Construct();
	void AddStat(class FName StatID);
	void Update(bool Subtractive, class FName BuildID);
	void ClearAndReconstruct();
	void AddCustomStat(class FName StatID);
	void ExecuteUbergraph_wid_BuildSystem_GlobalStatisticsSmall(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, class FName K2Node_CustomEvent_StatID_1, const struct FMargin& K2Node_MakeStruct_Margin_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_BuildSystem_GlobalStatistics_EntrySmall_C* CallFunc_Create_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Map_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_CustomEvent_Subtractive, class FName K2Node_CustomEvent_BuildID, int32 Temp_int_Loop_Counter_Variable_2, const struct FBuildEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FBuildGlobalStatValue& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_GetCustomGlobalStatValue_Value, bool CallFunc_GetCustomGlobalStatValue_Unknown, int32 CallFunc_SelectInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_GetCustomGlobalStatValue_Value_1, bool CallFunc_GetCustomGlobalStatValue_Unknown_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, class FName CallFunc_Array_Get_Item_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName K2Node_CustomEvent_StatID, class FName CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWid_BuildSystem_CustomStatistics_EntrySmall_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_BuildSystem_GlobalStatistics_EntrySmall_C* K2Node_DynamicCast_AsWid_Build_System_Global_Statistics_Entry_Small, bool K2Node_DynamicCast_bSuccess, class UWid_BuildSystem_CustomStatistics_EntrySmall_C* K2Node_DynamicCast_AsWid_Build_System_Custom_Statistics_Entry_Small, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, int32 CallFunc_SelectInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_GetGlobalValueFromCurrentBuildID_Value, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


