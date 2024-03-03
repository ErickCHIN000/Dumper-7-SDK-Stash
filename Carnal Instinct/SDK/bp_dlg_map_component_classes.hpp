#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x110 - 0xB0)
// BlueprintGeneratedClass bp_dlg_map_component.bp_dlg_map_component_C
class Ubp_dlg_map_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class FName                                  Icon_data;                                         // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Icon_name;                                         // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_icon_data                      Icon_info;                                         // 0xC8(0x2F)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_298C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Show_icon;                                         // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Any_map;                                           // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2991[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Maps_list;                                         // 0x100(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class Ubp_dlg_map_component_C* GetDefaultObj();

	void Update_register(bool Remove_icon, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, class Abp_dlg_map_area_C* K2Node_DynamicCast_AsBp_Dlg_Map_Area, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors_1, class AActor* CallFunc_Array_Get_Item_2, class Abp_dlg_map_area_C* K2Node_DynamicCast_AsBp_Dlg_Map_Area_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void Set_icon_name(class FName Icon_name);
	void Init_data_icon(class FName Icon_data_id, const struct FS_dlg_icon_base& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void Get_layout_widget(bool* Is_valid, class UW_01_map_layout_C** Map_widget, TArray<class UW_01_map_layout_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_01_map_layout_C* CallFunc_Array_Get_Item);
	void Activate_map(class FName Map_id, class FName Local_map, bool CallFunc_get_layout_widget_is_valid, class UW_01_map_layout_C* CallFunc_get_layout_widget_map_widget, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_Array_Get_Item, class Abp_dlg_map_area_C* K2Node_DynamicCast_AsBp_Dlg_Map_Area, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_bp_dlg_map_component(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_Not_PreBool_ReturnValue);
};

}


