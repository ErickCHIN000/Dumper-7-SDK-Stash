#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_Crafting.AC_Crafting_C
// (None)

class UClass* UAC_Crafting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_Crafting_C");

	return Clss;
}


// AC_Crafting_C AC_Crafting.Default__AC_Crafting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_Crafting_C* UAC_Crafting_C::GetDefaultObj()
{
	static class UAC_Crafting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_Crafting_C*>(UAC_Crafting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_Crafting.AC_Crafting_C.Reset Capture Rotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UAC_Crafting_C::Reset_Capture_Rotation(float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Reset Capture Rotation");

	Params::UAC_Crafting_C_Reset_Capture_Rotation_Params Parms{};

	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_Crafting.AC_Crafting_C.Check Inventory Capacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Find_Item_Quantity_Quantity_Found                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Inventory_Space_Space_Found                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_Crafting_C::Check_Inventory_Capacity(bool* Condition, int32 CallFunc_Find_Item_Quantity_Quantity_Found, bool CallFunc_Check_Inventory_Space_Space_Found, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Check Inventory Capacity");

	Params::UAC_Crafting_C_Check_Inventory_Capacity_Params Parms{};

	Parms.CallFunc_Find_Item_Quantity_Quantity_Found = CallFunc_Find_Item_Quantity_Quantity_Found;
	Parms.CallFunc_Check_Inventory_Space_Space_Found = CallFunc_Check_Inventory_Space_Space_Found;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Condition != nullptr)
		*Condition = Parms.Condition;

}


// Function AC_Crafting.AC_Crafting_C.Play Sound Crafting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_Crafting_C::Play_Sound_Crafting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Play Sound Crafting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_Crafting.AC_Crafting_C.Filter by Armor Slot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Crafting>         Crafting_Data                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FS_Crafting>         Filtered_List                                                    (Parm, OutParm)
// TArray<struct FS_Crafting>         Filtered_Array                                                   (Edit, BlueprintVisible)
// TArray<struct FS_Crafting>         Boots                                                            (Edit, BlueprintVisible)
// TArray<struct FS_Crafting>         Legs                                                             (Edit, BlueprintVisible)
// TArray<struct FS_Crafting>         Chest                                                            (Edit, BlueprintVisible)
// TArray<struct FS_Crafting>         Neck                                                             (Edit, BlueprintVisible)
// TArray<struct FS_Crafting>         Gloves                                                           (Edit, BlueprintVisible)
// TArray<struct FS_Crafting>         Head                                                             (Edit, BlueprintVisible)
// TArray<struct FS_Crafting>         Temp_struct_Variable                                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Crafting>         Temp_struct_Variable_1                                           (ReferenceParm)
// TArray<struct FS_Crafting>         Temp_struct_Variable_2                                           (ReferenceParm)
// TArray<struct FS_Crafting>         Temp_struct_Variable_3                                           (ReferenceParm)
// TArray<struct FS_Crafting>         Temp_struct_Variable_4                                           (ReferenceParm)
// TArray<struct FS_Crafting>         Temp_struct_Variable_5                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Crafting>         Temp_struct_Variable_6                                           (ReferenceParm)
// struct FS_Crafting                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_ItemData                 CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Crafting>         Temp_struct_Variable_7                                           (ReferenceParm)
// TArray<struct FS_Crafting>         Temp_struct_Variable_8                                           (ReferenceParm)
// TArray<struct FS_Crafting>         Temp_struct_Variable_9                                           (ReferenceParm)
// TArray<struct FS_Crafting>         Temp_struct_Variable_10                                          (ReferenceParm)
// TArray<struct FS_Crafting>         Temp_struct_Variable_11                                          (ReferenceParm)
// TArray<struct FS_Crafting>         Temp_struct_Variable_12                                          (ReferenceParm)
// TArray<struct FS_Crafting>         Temp_struct_Variable_13                                          (ReferenceParm)
// enum class E_ItemSlot              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Crafting>         K2Node_Select_Default                                            (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_Crafting_C::Filter_by_Armor_Slot(TArray<struct FS_Crafting>& Crafting_Data, TArray<struct FS_Crafting>* Filtered_List, const TArray<struct FS_Crafting>& Filtered_Array, const TArray<struct FS_Crafting>& Boots, const TArray<struct FS_Crafting>& Legs, const TArray<struct FS_Crafting>& Chest, const TArray<struct FS_Crafting>& Neck, const TArray<struct FS_Crafting>& Gloves, const TArray<struct FS_Crafting>& Head, TArray<struct FS_Crafting>& Temp_struct_Variable, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FS_Crafting>& Temp_struct_Variable_1, TArray<struct FS_Crafting>& Temp_struct_Variable_2, TArray<struct FS_Crafting>& Temp_struct_Variable_3, TArray<struct FS_Crafting>& Temp_struct_Variable_4, TArray<struct FS_Crafting>& Temp_struct_Variable_5, int32 Temp_int_Array_Index_Variable, TArray<struct FS_Crafting>& Temp_struct_Variable_6, const struct FS_Crafting& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FS_Crafting>& Temp_struct_Variable_7, TArray<struct FS_Crafting>& Temp_struct_Variable_8, TArray<struct FS_Crafting>& Temp_struct_Variable_9, TArray<struct FS_Crafting>& Temp_struct_Variable_10, TArray<struct FS_Crafting>& Temp_struct_Variable_11, TArray<struct FS_Crafting>& Temp_struct_Variable_12, TArray<struct FS_Crafting>& Temp_struct_Variable_13, enum class E_ItemSlot Temp_byte_Variable, TArray<struct FS_Crafting>& K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Filter by Armor Slot");

	Params::UAC_Crafting_C_Filter_by_Armor_Slot_Params Parms{};

	Parms.Crafting_Data = Crafting_Data;
	Parms.Filtered_Array = Filtered_Array;
	Parms.Boots = Boots;
	Parms.Legs = Legs;
	Parms.Chest = Chest;
	Parms.Neck = Neck;
	Parms.Gloves = Gloves;
	Parms.Head = Head;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Filtered_List != nullptr)
		*Filtered_List = std::move(Parms.Filtered_List);

}


// Function AC_Crafting.AC_Crafting_C.Create Crafting Lists
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Crafting>         CallFunc_Filter_by_Rarity_Filtered_List                          (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Crafting>         CallFunc_Filter_by_Rarity_Filtered_List_1                        (ReferenceParm)
// TArray<struct FS_Crafting>         CallFunc_Filter_by_Armor_Slot_Filtered_List                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_Crafting                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_GetDataTableRowFromName_OutRow_1                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_Crafting_C::Create_Crafting_Lists(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<struct FS_Crafting>& CallFunc_Filter_by_Rarity_Filtered_List, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FS_Crafting>& CallFunc_Filter_by_Rarity_Filtered_List_1, TArray<struct FS_Crafting>& CallFunc_Filter_by_Armor_Slot_Filtered_List, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Crafting& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Create Crafting Lists");

	Params::UAC_Crafting_C_Create_Crafting_Lists_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Filter_by_Rarity_Filtered_List = CallFunc_Filter_by_Rarity_Filtered_List;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Filter_by_Rarity_Filtered_List_1 = CallFunc_Filter_by_Rarity_Filtered_List_1;
	Parms.CallFunc_Filter_by_Armor_Slot_Filtered_List = CallFunc_Filter_by_Armor_Slot_Filtered_List;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_Crafting.AC_Crafting_C.Remove Quantity from Equipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemData                 Equipment_Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Quantity_required                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemStacks               K2Node_MakeStruct_S_ItemStacks                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut                               (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_Crafting_C::Remove_Quantity_from_Equipment(const struct FS_ItemData& Equipment_Item, int32 Quantity_required, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FS_ItemStacks& K2Node_MakeStruct_S_ItemStacks, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Remove Quantity from Equipment");

	Params::UAC_Crafting_C_Remove_Quantity_from_Equipment_Params Parms{};

	Parms.Equipment_Item = Equipment_Item;
	Parms.Quantity_required = Quantity_required;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_ItemStacks = K2Node_MakeStruct_S_ItemStacks;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_Crafting.AC_Crafting_C.Remove Crafting Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerCapture_C>K2Node_DynamicCast_AsBPI_Player_Capture                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_ItemData                 CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_PlayerCapture_C>K2Node_DynamicCast_AsBPI_Player_Capture_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_Crafting_C::Remove_Crafting_Widget(int32 Temp_int_Array_Index_Variable, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBPI_PlayerCapture_C> K2Node_DynamicCast_AsBPI_Player_Capture, bool K2Node_DynamicCast_bSuccess, const struct FS_ItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBPI_PlayerCapture_C> K2Node_DynamicCast_AsBPI_Player_Capture_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Remove Crafting Widget");

	Params::UAC_Crafting_C_Remove_Crafting_Widget_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Capture = K2Node_DynamicCast_AsBPI_Player_Capture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Capture_1 = K2Node_DynamicCast_AsBPI_Player_Capture_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_Crafting.AC_Crafting_C.Remove Quantity from Inventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_ItemData>         Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FS_ItemData                 Inventory_Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Quantity_required                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 Temp_struct_Variable                                             (ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemStacks               K2Node_MakeStruct_S_ItemStacks                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut                               (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_Crafting_C::Remove_Quantity_from_Inventory(TArray<struct FS_ItemData>& Inventory, const struct FS_ItemData& Inventory_Item, int32 Quantity_required, const struct FS_ItemData& Temp_struct_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FS_ItemStacks& K2Node_MakeStruct_S_ItemStacks, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Remove Quantity from Inventory");

	Params::UAC_Crafting_C_Remove_Quantity_from_Inventory_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Inventory_Item = Inventory_Item;
	Parms.Quantity_required = Quantity_required;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_ItemStacks = K2Node_MakeStruct_S_ItemStacks;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_Crafting.AC_Crafting_C.Filter by Rarity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Crafting>         Crafting_Data                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FS_Crafting>         Filtered_List                                                    (Parm, OutParm)
// TArray<struct FS_Crafting>         Filtered_Array                                                   (Edit, BlueprintVisible)
// TArray<struct FS_Crafting>         Legendary                                                        (Edit, BlueprintVisible)
// TArray<struct FS_Crafting>         Epic                                                             (Edit, BlueprintVisible)
// TArray<struct FS_Crafting>         Superior                                                         (Edit, BlueprintVisible)
// TArray<struct FS_Crafting>         Common                                                           (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Crafting>         Temp_struct_Variable                                             (ReferenceParm)
// struct FS_Crafting                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Crafting>         Temp_struct_Variable_1                                           (ReferenceParm)
// enum class E_ItemRarity            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Crafting>         K2Node_Select_Default                                            (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_Crafting_C::Filter_by_Rarity(TArray<struct FS_Crafting>& Crafting_Data, TArray<struct FS_Crafting>* Filtered_List, const TArray<struct FS_Crafting>& Filtered_Array, const TArray<struct FS_Crafting>& Legendary, const TArray<struct FS_Crafting>& Epic, const TArray<struct FS_Crafting>& Superior, const TArray<struct FS_Crafting>& Common, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FS_Crafting>& Temp_struct_Variable, const struct FS_Crafting& CallFunc_Array_Get_Item, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FS_Crafting>& Temp_struct_Variable_1, enum class E_ItemRarity Temp_byte_Variable, TArray<struct FS_Crafting>& K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Filter by Rarity");

	Params::UAC_Crafting_C_Filter_by_Rarity_Params Parms{};

	Parms.Crafting_Data = Crafting_Data;
	Parms.Filtered_Array = Filtered_Array;
	Parms.Legendary = Legendary;
	Parms.Epic = Epic;
	Parms.Superior = Superior;
	Parms.Common = Common;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Filtered_List != nullptr)
		*Filtered_List = std::move(Parms.Filtered_List);

}


// Function AC_Crafting.AC_Crafting_C.Find Item Quantity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemData                 Item_Data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Quantity_Found                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Get_Inventory_Item_by_Data_Item                         (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Get_Inventory_Item_by_Data_Found                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_Crafting_C::Find_Item_Quantity(const struct FS_ItemData& Item_Data, int32* Quantity_Found, const struct FS_ItemData& CallFunc_Get_Inventory_Item_by_Data_Item, bool CallFunc_Get_Inventory_Item_by_Data_Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Find Item Quantity");

	Params::UAC_Crafting_C_Find_Item_Quantity_Params Parms{};

	Parms.Item_Data = Item_Data;
	Parms.CallFunc_Get_Inventory_Item_by_Data_Item = CallFunc_Get_Inventory_Item_by_Data_Item;
	Parms.CallFunc_Get_Inventory_Item_by_Data_Found = CallFunc_Get_Inventory_Item_by_Data_Found;

	UObject::ProcessEvent(Func, &Parms);

	if (Quantity_Found != nullptr)
		*Quantity_Found = Parms.Quantity_Found;

}


// Function AC_Crafting.AC_Crafting_C.Try to Craft Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Required_Item_Quantity                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventoryNotify_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventoryNotify_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InventoryNotify_C*       CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (ConstParm)
// struct FS_ItemStats                K2Node_MakeStruct_S_ItemStats                                    (HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_MakeStruct_S_ItemData                                     (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Has_Player_Gold_Enough__Has_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Leveling_C*              CallFunc_Get_AC_Leveling_Return_Value                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Level_Check_True                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class UWB_InventoryNotify_C*       CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_SingleDTItem             CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_ItemData                 CallFunc_Get_Inventory_Item_by_Data_Item                         (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Get_Inventory_Item_by_Data_Found                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Add_Item_to_Inventory_Inventory_Full_                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_Item_to_Inventory_Added_Slot_Index                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Consumable_Item_Already_in_EQ__Already_in_EQ         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (ConstParm)

void UAC_Crafting_C::Try_to_Craft_Item(int32 Required_Item_Quantity, class UWB_InventoryNotify_C* CallFunc_Create_ReturnValue, class UWB_InventoryNotify_C* CallFunc_Create_ReturnValue_1, class UWB_InventoryNotify_C* CallFunc_Create_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, class FText Temp_text_Variable, const struct FS_ItemStats& K2Node_MakeStruct_S_ItemStats, const struct FS_ItemData& K2Node_MakeStruct_S_ItemData, bool CallFunc_Has_Player_Gold_Enough__Has_, class UAC_Leveling_C* CallFunc_Get_AC_Leveling_Return_Value, bool CallFunc_Level_Check_True, class FText Temp_text_Variable_1, class UWB_InventoryNotify_C* CallFunc_Create_ReturnValue_3, int32 Temp_int_Array_Index_Variable, const struct FS_SingleDTItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_ItemData& CallFunc_Get_Inventory_Item_by_Data_Item, bool CallFunc_Get_Inventory_Item_by_Data_Found, bool CallFunc_Add_Item_to_Inventory_Inventory_Full_, int32 CallFunc_Add_Item_to_Inventory_Added_Slot_Index, bool CallFunc_Is_Consumable_Item_Already_in_EQ__Already_in_EQ, class FText Temp_text_Variable_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Try to Craft Item");

	Params::UAC_Crafting_C_Try_to_Craft_Item_Params Parms{};

	Parms.Required_Item_Quantity = Required_Item_Quantity;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_MakeStruct_S_ItemStats = K2Node_MakeStruct_S_ItemStats;
	Parms.K2Node_MakeStruct_S_ItemData = K2Node_MakeStruct_S_ItemData;
	Parms.CallFunc_Has_Player_Gold_Enough__Has_ = CallFunc_Has_Player_Gold_Enough__Has_;
	Parms.CallFunc_Get_AC_Leveling_Return_Value = CallFunc_Get_AC_Leveling_Return_Value;
	Parms.CallFunc_Level_Check_True = CallFunc_Level_Check_True;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Get_Inventory_Item_by_Data_Item = CallFunc_Get_Inventory_Item_by_Data_Item;
	Parms.CallFunc_Get_Inventory_Item_by_Data_Found = CallFunc_Get_Inventory_Item_by_Data_Found;
	Parms.CallFunc_Add_Item_to_Inventory_Inventory_Full_ = CallFunc_Add_Item_to_Inventory_Inventory_Full_;
	Parms.CallFunc_Add_Item_to_Inventory_Added_Slot_Index = CallFunc_Add_Item_to_Inventory_Added_Slot_Index;
	Parms.CallFunc_Is_Consumable_Item_Already_in_EQ__Already_in_EQ = CallFunc_Is_Consumable_Item_Already_in_EQ__Already_in_EQ;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_Crafting.AC_Crafting_C.Set Craftable Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_SingleDTItem             Craftable_Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemStacks               K2Node_MakeStruct_S_ItemStacks                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 K2Node_SetFieldsInStruct_StructOut                               (ContainsInstancedReference, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)
// TScriptInterface<class IBPI_PlayerCapture_C>K2Node_DynamicCast_AsBPI_Player_Capture                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_ItemData                 CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerCapture_C>K2Node_DynamicCast_AsBPI_Player_Capture_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_PlayerCapture_C>K2Node_DynamicCast_AsBPI_Player_Capture_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_Crafting_C::Set_Craftable_Item(const struct FS_SingleDTItem& Craftable_Item, int32 Temp_int_Array_Index_Variable, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FS_ItemStacks& K2Node_MakeStruct_S_ItemStacks, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, TScriptInterface<class IBPI_PlayerCapture_C> K2Node_DynamicCast_AsBPI_Player_Capture, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ClassClass_ReturnValue, const struct FS_ItemData& CallFunc_Array_Get_Item, TScriptInterface<class IBPI_PlayerCapture_C> K2Node_DynamicCast_AsBPI_Player_Capture_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBPI_PlayerCapture_C> K2Node_DynamicCast_AsBPI_Player_Capture_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Set Craftable Item");

	Params::UAC_Crafting_C_Set_Craftable_Item_Params Parms{};

	Parms.Craftable_Item = Craftable_Item;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeStruct_S_ItemStacks = K2Node_MakeStruct_S_ItemStacks;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.K2Node_DynamicCast_AsBPI_Player_Capture = K2Node_DynamicCast_AsBPI_Player_Capture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBPI_Player_Capture_1 = K2Node_DynamicCast_AsBPI_Player_Capture_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Capture_2 = K2Node_DynamicCast_AsBPI_Player_Capture_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_Crafting.AC_Crafting_C.Open Crafting Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_CraftingWindow_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_Crafting_C::Open_Crafting_Widget(class UWB_CraftingWindow_C* CallFunc_Create_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Open Crafting Widget");

	Params::UAC_Crafting_C_Open_Crafting_Widget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_Crafting.AC_Crafting_C.Focus Selected Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Crafting                 Crafting_Item_Data                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_Check_Inventory_Capacity_Condition                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_Crafting_C::Focus_Selected_Item(const struct FS_Crafting& Crafting_Item_Data, bool CallFunc_Check_Inventory_Capacity_Condition, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "Focus Selected Item");

	Params::UAC_Crafting_C_Focus_Selected_Item_Params Parms{};

	Parms.Crafting_Item_Data = Crafting_Item_Data;
	Parms.CallFunc_Check_Inventory_Capacity_Condition = CallFunc_Check_Inventory_Capacity_Condition;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_Crafting.AC_Crafting_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UAC_Crafting_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_Crafting.AC_Crafting_C.ExecuteUbergraph_AC_Crafting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_Crafting_C::ExecuteUbergraph_AC_Crafting(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_Crafting_C", "ExecuteUbergraph_AC_Crafting");

	Params::UAC_Crafting_C_ExecuteUbergraph_AC_Crafting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;

	UObject::ProcessEvent(Func, &Parms);

}

}


