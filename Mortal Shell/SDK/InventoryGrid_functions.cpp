#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InventoryGrid.InventoryGrid_C
// (None)

class UClass* UInventoryGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryGrid_C");

	return Clss;
}


// InventoryGrid_C InventoryGrid.Default__InventoryGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInventoryGrid_C* UInventoryGrid_C::GetDefaultObj()
{
	static class UInventoryGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryGrid_C*>(UInventoryGrid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InventoryGrid.InventoryGrid_C.CheckEquipmentTutorial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Add                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryGrid_C::CheckEquipmentTutorial(struct FInventoryItem& InventoryItem, bool* Add, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "CheckEquipmentTutorial");

	Params::UInventoryGrid_C_CheckEquipmentTutorial_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Add != nullptr)
		*Add = Parms.Add;

}


// Function InventoryGrid.InventoryGrid_C.CheckForSword
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryGrid_C::CheckForSword(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "CheckForSword");

	Params::UInventoryGrid_C_CheckForSword_Params Parms{};

	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryGrid.InventoryGrid_C.AddUnlockedKeyItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryItem>      Items                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryGrid_C::AddUnlockedKeyItems(TArray<struct FInventoryItem>& Items, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsUpgradeUnlocked_bUnlocked, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "AddUnlockedKeyItems");

	Params::UInventoryGrid_C_AddUnlockedKeyItems_Params Parms{};

	Parms.Items = Items;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryGrid.InventoryGrid_C.SetPreviewGrid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class UInventoryGridItem_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryGrid_C::SetPreviewGrid(int32 Local_Index, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class UInventoryGridItem_C* CallFunc_Create_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "SetPreviewGrid");

	Params::UInventoryGrid_C_SetPreviewGrid_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryGrid.InventoryGrid_C.IsOnGrid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FNavDirectionInt2D          NavDirectionInt2D                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOnGrid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumRows_NumRows                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryGrid_C::IsOnGrid(struct FNavDirectionInt2D& NavDirectionInt2D, bool* bOnGrid, int32 CallFunc_GetNumRows_NumRows, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "IsOnGrid");

	Params::UInventoryGrid_C_IsOnGrid_Params Parms{};

	Parms.NavDirectionInt2D = NavDirectionInt2D;
	Parms.CallFunc_GetNumRows_NumRows = CallFunc_GetNumRows_NumRows;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (bOnGrid != nullptr)
		*bOnGrid = Parms.bOnGrid;

}


// Function InventoryGrid.InventoryGrid_C.GetNumRows
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NumRows                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNavDirectionInt2D          CallFunc_IndexToRowColum_RowColumn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryGrid_C::GetNumRows(int32* NumRows, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FNavDirectionInt2D& CallFunc_IndexToRowColum_RowColumn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "GetNumRows");

	Params::UInventoryGrid_C_GetNumRows_Params Parms{};

	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_IndexToRowColum_RowColumn = CallFunc_IndexToRowColum_RowColumn;

	UObject::ProcessEvent(Func, &Parms);

	if (NumRows != nullptr)
		*NumRows = Parms.NumRows;

}


// Function InventoryGrid.InventoryGrid_C.RowColumToIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FNavDirectionInt2D          RowColumn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryGrid_C::RowColumToIndex(const struct FNavDirectionInt2D& RowColumn, int32* Index, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "RowColumToIndex");

	Params::UInventoryGrid_C_RowColumToIndex_Params Parms{};

	Parms.RowColumn = RowColumn;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function InventoryGrid.InventoryGrid_C.IndexToRowColum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNavDirectionInt2D          RowColumn                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNavDirectionInt2D          K2Node_MakeStruct_NavDirectionInt2D                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryGrid_C::IndexToRowColum(int32 Index, struct FNavDirectionInt2D* RowColumn, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, const struct FNavDirectionInt2D& K2Node_MakeStruct_NavDirectionInt2D)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "IndexToRowColum");

	Params::UInventoryGrid_C_IndexToRowColum_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_NavDirectionInt2D = K2Node_MakeStruct_NavDirectionInt2D;

	UObject::ProcessEvent(Func, &Parms);

	if (RowColumn != nullptr)
		*RowColumn = std::move(Parms.RowColumn);

}


// Function InventoryGrid.InventoryGrid_C.GetNextNavGridItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENavDirection           Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NextIndex                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsValidNextItem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHitLimit                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FNavDirectionInt2D          CalculatedColRow                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNavDirectionInt2D          CurrentColumnRow                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNavDirectionInt2D          NavDirection                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNavDirectionInt2D          K2Node_MakeStruct_NavDirectionInt2D                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FNavDirectionInt2D          CallFunc_IndexToRowColum_RowColumn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNavDirectionInt2D          K2Node_MakeStruct_NavDirectionInt2D_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNavDirectionInt2D          K2Node_MakeStruct_NavDirectionInt2D_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNavDirectionInt2D          K2Node_MakeStruct_NavDirectionInt2D_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RowColumToIndex_Index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnGrid_bOnGrid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNavDirectionInt2D          K2Node_MakeStruct_NavDirectionInt2D_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryGrid_C::GetNextNavGridItem(int32 CurrentIndex, enum class ENavDirection Direction, int32* NextIndex, bool* bIsValidNextItem, bool* bHitLimit, const struct FNavDirectionInt2D& CalculatedColRow, const struct FNavDirectionInt2D& CurrentColumnRow, const struct FNavDirectionInt2D& NavDirection, const struct FNavDirectionInt2D& K2Node_MakeStruct_NavDirectionInt2D, bool K2Node_SwitchEnum_CmpSuccess, const struct FNavDirectionInt2D& CallFunc_IndexToRowColum_RowColumn, const struct FNavDirectionInt2D& K2Node_MakeStruct_NavDirectionInt2D_1, const struct FNavDirectionInt2D& K2Node_MakeStruct_NavDirectionInt2D_2, const struct FNavDirectionInt2D& K2Node_MakeStruct_NavDirectionInt2D_3, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_RowColumToIndex_Index, bool CallFunc_IsOnGrid_bOnGrid, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FNavDirectionInt2D& K2Node_MakeStruct_NavDirectionInt2D_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "GetNextNavGridItem");

	Params::UInventoryGrid_C_GetNextNavGridItem_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.Direction = Direction;
	Parms.CalculatedColRow = CalculatedColRow;
	Parms.CurrentColumnRow = CurrentColumnRow;
	Parms.NavDirection = NavDirection;
	Parms.K2Node_MakeStruct_NavDirectionInt2D = K2Node_MakeStruct_NavDirectionInt2D;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IndexToRowColum_RowColumn = CallFunc_IndexToRowColum_RowColumn;
	Parms.K2Node_MakeStruct_NavDirectionInt2D_1 = K2Node_MakeStruct_NavDirectionInt2D_1;
	Parms.K2Node_MakeStruct_NavDirectionInt2D_2 = K2Node_MakeStruct_NavDirectionInt2D_2;
	Parms.K2Node_MakeStruct_NavDirectionInt2D_3 = K2Node_MakeStruct_NavDirectionInt2D_3;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RowColumToIndex_Index = CallFunc_RowColumToIndex_Index;
	Parms.CallFunc_IsOnGrid_bOnGrid = CallFunc_IsOnGrid_bOnGrid;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_NavDirectionInt2D_4 = K2Node_MakeStruct_NavDirectionInt2D_4;

	UObject::ProcessEvent(Func, &Parms);

	if (NextIndex != nullptr)
		*NextIndex = Parms.NextIndex;

	if (bIsValidNextItem != nullptr)
		*bIsValidNextItem = Parms.bIsValidNextItem;

	if (bHitLimit != nullptr)
		*bHitLimit = Parms.bHitLimit;

}


// Function InventoryGrid.InventoryGrid_C.SetFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FilterID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EItemType>       K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EItemType>       K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<enum class EItemType>       K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<enum class EItemType>       K2Node_MakeArray_Array_3                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<enum class EItemType>       K2Node_MakeArray_Array_4                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<enum class EItemType>       K2Node_MakeArray_Array_5                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<enum class EItemType>       K2Node_MakeArray_Array_6                                         (ReferenceParm, HasGetValueTypeHash)

void UInventoryGrid_C::SetFilter(int32 FilterID, TArray<enum class EItemType>& K2Node_MakeArray_Array, bool K2Node_SwitchInteger_CmpSuccess, TArray<enum class EItemType>& K2Node_MakeArray_Array_1, TArray<enum class EItemType>& K2Node_MakeArray_Array_2, TArray<enum class EItemType>& K2Node_MakeArray_Array_3, TArray<enum class EItemType>& K2Node_MakeArray_Array_4, TArray<enum class EItemType>& K2Node_MakeArray_Array_5, TArray<enum class EItemType>& K2Node_MakeArray_Array_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "SetFilter");

	Params::UInventoryGrid_C_SetFilter_Params Parms{};

	Parms.FilterID = FilterID;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryGrid.InventoryGrid_C.GetFilteredItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowKeyItems                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EItemType>       FilterType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      InventoryItems                                                   (Parm, OutParm, HasGetValueTypeHash)
// TArray<int32>                      CorrespondingInventorySlot                                       (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      Local_InventoryItems                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              LocIndex                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Slots                                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<enum class EItemType>       LocFilterType                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      FilteredItemList                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               bLocShowKeyItems                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInventoryItem>      CallFunc_GetInventoryItems_InventoryItems                        (ReferenceParm, HasGetValueTypeHash)

void UInventoryGrid_C::GetFilteredItems(bool bShowKeyItems, TArray<enum class EItemType>& FilterType, TArray<struct FInventoryItem>* InventoryItems, TArray<int32>* CorrespondingInventorySlot, const TArray<struct FInventoryItem>& Local_InventoryItems, int32 LocIndex, const TArray<int32>& Slots, const TArray<enum class EItemType>& LocFilterType, const TArray<struct FInventoryItem>& FilteredItemList, bool bLocShowKeyItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FInventoryItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "GetFilteredItems");

	Params::UInventoryGrid_C_GetFilteredItems_Params Parms{};

	Parms.bShowKeyItems = bShowKeyItems;
	Parms.FilterType = FilterType;
	Parms.Local_InventoryItems = Local_InventoryItems;
	Parms.LocIndex = LocIndex;
	Parms.Slots = Slots;
	Parms.LocFilterType = LocFilterType;
	Parms.FilteredItemList = FilteredItemList;
	Parms.bLocShowKeyItems = bLocShowKeyItems;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInventoryItems_InventoryItems = CallFunc_GetInventoryItems_InventoryItems;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryItems != nullptr)
		*InventoryItems = std::move(Parms.InventoryItems);

	if (CorrespondingInventorySlot != nullptr)
		*CorrespondingInventorySlot = std::move(Parms.CorrespondingInventorySlot);

}


// Function InventoryGrid.InventoryGrid_C.SetRowAndColumn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUniformGridSlot*            GridSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Columns                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryGrid_C::SetRowAndColumn(class UUniformGridSlot* GridSlot, int32 Columns, int32 CurrentIndex, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "SetRowAndColumn");

	Params::UInventoryGrid_C_SetRowAndColumn_Params Parms{};

	Parms.GridSlot = GridSlot;
	Parms.Columns = Columns;
	Parms.CurrentIndex = CurrentIndex;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryGrid.InventoryGrid_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryGrid_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "Tick");

	Params::UInventoryGrid_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryGrid.InventoryGrid_C.OnGamepadScrollUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryGrid_C::OnGamepadScrollUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "OnGamepadScrollUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryGrid.InventoryGrid_C.OnGamepadScrolLDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryGrid_C::OnGamepadScrolLDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "OnGamepadScrolLDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryGrid.InventoryGrid_C.OnGamepadSCrollUpRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryGrid_C::OnGamepadSCrollUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "OnGamepadSCrollUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryGrid.InventoryGrid_C.OnGamepadScrollDownRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryGrid_C::OnGamepadScrollDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "OnGamepadScrollDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryGrid.InventoryGrid_C.OnItemStartedDragging_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryGridItem_C*        GridItemWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          DragDropOperation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryGrid_C::OnItemStartedDragging_Event_0(int32 InventorySlot, class UInventoryGridItem_C* GridItemWidget, class UDragDropOperation* DragDropOperation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "OnItemStartedDragging_Event_0");

	Params::UInventoryGrid_C_OnItemStartedDragging_Event_0_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.GridItemWidget = GridItemWidget;
	Parms.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryGrid.InventoryGrid_C.BuildGrid
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               QuickItemAnim                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryGrid_C::BuildGrid(bool QuickItemAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "BuildGrid");

	Params::UInventoryGrid_C_BuildGrid_Params Parms{};

	Parms.QuickItemAnim = QuickItemAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryGrid.InventoryGrid_C.OnSelectedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UInventoryGridItem_C*        HoveredWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MouseHover                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryGrid_C::OnSelectedEvent(const struct FInventoryItem& InventoryItem, class UInventoryGridItem_C* HoveredWidget, int32 InventorySlot, bool MouseHover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "OnSelectedEvent");

	Params::UInventoryGrid_C_OnSelectedEvent_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.HoveredWidget = HoveredWidget;
	Parms.InventorySlot = InventorySlot;
	Parms.MouseHover = MouseHover;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryGrid.InventoryGrid_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryGrid_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "PreConstruct");

	Params::UInventoryGrid_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryGrid.InventoryGrid_C.PreviewGrid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryGrid_C::PreviewGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "PreviewGrid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryGrid.InventoryGrid_C.ExecuteUbergraph_InventoryGrid
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryGridItem_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_CheckEquipmentTutorial_Add                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InventorySlot_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryGridItem_C*        K2Node_CustomEvent_GridItemWidget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          K2Node_CustomEvent_DragDropOperation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_QuickItemAnim                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInventoryItem>      CallFunc_GetFilteredItems_InventoryItems                         (ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_GetFilteredItems_CorrespondingInventorySlot             (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              K2Node_CustomEvent_InventoryItem                                 (HasGetValueTypeHash)
// class UInventoryGridItem_C*        K2Node_CustomEvent_HoveredWidget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InventorySlot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_MouseHover                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)

void UInventoryGrid_C::ExecuteUbergraph_InventoryGrid(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UInventoryGridItem_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_CheckEquipmentTutorial_Add, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_CustomEvent_InventorySlot_1, class UInventoryGridItem_C* K2Node_CustomEvent_GridItemWidget, class UDragDropOperation* K2Node_CustomEvent_DragDropOperation, bool K2Node_CustomEvent_QuickItemAnim, TArray<struct FInventoryItem>& CallFunc_GetFilteredItems_InventoryItems, TArray<int32>& CallFunc_GetFilteredItems_CorrespondingInventorySlot, int32 CallFunc_Array_Get_Item_1, const struct FInventoryItem& K2Node_CustomEvent_InventoryItem, class UInventoryGridItem_C* K2Node_CustomEvent_HoveredWidget, int32 K2Node_CustomEvent_InventorySlot, bool K2Node_CustomEvent_MouseHover, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "ExecuteUbergraph_InventoryGrid");

	Params::UInventoryGrid_C_ExecuteUbergraph_InventoryGrid_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CheckEquipmentTutorial_Add = CallFunc_CheckEquipmentTutorial_Add;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_InventorySlot_1 = K2Node_CustomEvent_InventorySlot_1;
	Parms.K2Node_CustomEvent_GridItemWidget = K2Node_CustomEvent_GridItemWidget;
	Parms.K2Node_CustomEvent_DragDropOperation = K2Node_CustomEvent_DragDropOperation;
	Parms.K2Node_CustomEvent_QuickItemAnim = K2Node_CustomEvent_QuickItemAnim;
	Parms.CallFunc_GetFilteredItems_InventoryItems = CallFunc_GetFilteredItems_InventoryItems;
	Parms.CallFunc_GetFilteredItems_CorrespondingInventorySlot = CallFunc_GetFilteredItems_CorrespondingInventorySlot;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_CustomEvent_InventoryItem = K2Node_CustomEvent_InventoryItem;
	Parms.K2Node_CustomEvent_HoveredWidget = K2Node_CustomEvent_HoveredWidget;
	Parms.K2Node_CustomEvent_InventorySlot = K2Node_CustomEvent_InventorySlot;
	Parms.K2Node_CustomEvent_MouseHover = K2Node_CustomEvent_MouseHover;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryGrid.InventoryGrid_C.OnGridLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryGrid_C::OnGridLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "OnGridLoaded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryGrid.InventoryGrid_C.OnItemStartedDragging__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryGridItem_C*        GridItemWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          DragDropOperation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryGrid_C::OnItemStartedDragging__DelegateSignature(int32 InventorySlot, class UInventoryGridItem_C* GridItemWidget, class UDragDropOperation* DragDropOperation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "OnItemStartedDragging__DelegateSignature");

	Params::UInventoryGrid_C_OnItemStartedDragging__DelegateSignature_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.GridItemWidget = GridItemWidget;
	Parms.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryGrid.InventoryGrid_C.OnGridItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UInventoryGridItem_C*        HoveredWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HoveredInventorySlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryGrid_C::OnGridItemSelected__DelegateSignature(const struct FInventoryItem& InventoryItem, class UInventoryGridItem_C* HoveredWidget, int32 HoveredInventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryGrid_C", "OnGridItemSelected__DelegateSignature");

	Params::UInventoryGrid_C_OnGridItemSelected__DelegateSignature_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.HoveredWidget = HoveredWidget;
	Parms.HoveredInventorySlot = HoveredInventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


