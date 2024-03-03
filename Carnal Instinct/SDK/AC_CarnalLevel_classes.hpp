#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x140 - 0xB0)
// BlueprintGeneratedClass AC_CarnalLevel.AC_CarnalLevel_C
class UAC_CarnalLevel_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Current_Level;                                     // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Current_Experience;                                // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Level_Max_Experience;                              // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_2719[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Leveling_DataTable;                                // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, float>                           Leveling_Data;                                     // 0xD0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	FMulticastInlineDelegateProperty_            On_Gained_Experience;                              // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Level_Changed;                                  // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAC_CarnalLevel_C* GetDefaultObj();

	void Level_Check(int32 Level, bool* TURR, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Get_Current_Level(int32* Level);
	void Is_Next_Level_Valid_(bool* IsValid, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Exceed_Level_Max_Exp_(bool* Return_value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void Setup_Leveling_Data(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_LevelingSystem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void ReceiveBeginPlay();
	void Event_Add_Level_Exp(float Experience);
	void Event_Set_Level(int32 Level, float Current_Experience);
	void Event_Level_Up();
	void Event_Initialize();
	void ExecuteUbergraph_AC_CarnalLevel(int32 EntryPoint, class UWB_CarnalLevel_C* CallFunc_Create_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_CustomEvent_Experience, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Exceed_Level_Max_Exp__Return_Value, bool CallFunc_Exceed_Level_Max_Exp__Return_Value_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Exceed_Level_Max_Exp__Return_Value_2, bool CallFunc_Is_Next_Level_Valid__isValid, int32 K2Node_CustomEvent_Level, float K2Node_CustomEvent_Current_Experience, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class UW_05_notification_CarnalInstinct_C* CallFunc_Create_ReturnValue_1, float CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 CallFunc_Get_Current_Level_Level, float CallFunc_Divide_FloatFloat_ReturnValue);
	void On_Level_Changed__DelegateSignature();
	void On_Gained_Experience__DelegateSignature();
};

}


