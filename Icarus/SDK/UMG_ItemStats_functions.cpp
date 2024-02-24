#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ItemStats.UMG_ItemStats_C
// (None)

class UClass* UUMG_ItemStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ItemStats_C");

	return Clss;
}


// UMG_ItemStats_C UMG_ItemStats.Default__UMG_ItemStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ItemStats_C* UUMG_ItemStats_C::GetDefaultObj()
{
	static class UUMG_ItemStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ItemStats_C*>(UUMG_ItemStats_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ItemStats.UMG_ItemStats_C.Has Any Visible Stats
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasStats                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AnyChildrenVisible_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AnyChildrenVisible_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AnyChildrenVisible_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ItemStats_C::Has_Any_Visible_Stats(bool* HasStats, bool CallFunc_AnyChildrenVisible_ReturnValue, bool CallFunc_AnyChildrenVisible_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_AnyChildrenVisible_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemStats_C", "Has Any Visible Stats");

	Params::UUMG_ItemStats_C_Has_Any_Visible_Stats_Params Parms{};

	Parms.CallFunc_AnyChildrenVisible_ReturnValue = CallFunc_AnyChildrenVisible_ReturnValue;
	Parms.CallFunc_AnyChildrenVisible_ReturnValue_1 = CallFunc_AnyChildrenVisible_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_AnyChildrenVisible_ReturnValue_2 = CallFunc_AnyChildrenVisible_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (HasStats != nullptr)
		*HasStats = Parms.HasStats;

}


// Function UMG_ItemStats.UMG_ItemStats_C.Update Building Type Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBuildingTypesRowHandle     BuildingTypeRow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TMap<struct FStatsEnum, int32>     CallFunc_GetBuildingTypePopupStats_Stats                         (None)
// TArray<int32>                      CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<struct FStatsEnum>          CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_StatDescription_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsEnum                  CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_ApplyArbitraryMultiplier_OutModifiedStat                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasStatDescription_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ItemStats_C::Update_Building_Type_Stats(const struct FBuildingTypesRowHandle& BuildingTypeRow, TMap<struct FStatsEnum, int32> CallFunc_GetBuildingTypePopupStats_Stats, TArray<int32>& CallFunc_Map_Values_Values, TArray<struct FStatsEnum>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUMG_StatDescription_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, const struct FStatsEnum& CallFunc_Array_Get_Item_1, int32 CallFunc_ApplyArbitraryMultiplier_OutModifiedStat, bool CallFunc_HasStatDescription_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemStats_C", "Update Building Type Stats");

	Params::UUMG_ItemStats_C_Update_Building_Type_Stats_Params Parms{};

	Parms.BuildingTypeRow = BuildingTypeRow;
	Parms.CallFunc_GetBuildingTypePopupStats_Stats = CallFunc_GetBuildingTypePopupStats_Stats;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_ApplyArbitraryMultiplier_OutModifiedStat = CallFunc_ApplyArbitraryMultiplier_OutModifiedStat;
	Parms.CallFunc_HasStatDescription_ReturnValue = CallFunc_HasStatDescription_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ItemStats.UMG_ItemStats_C.ApplyArbitraryMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              InStat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutModifiedStat                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SignOfInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ItemStats_C::ApplyArbitraryMultiplier(int32 InStat, int32* OutModifiedStat, int32 Temp_wildcard_Variable, int32 CallFunc_SignOfInteger_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemStats_C", "ApplyArbitraryMultiplier");

	Params::UUMG_ItemStats_C_ApplyArbitraryMultiplier_Params Parms{};

	Parms.InStat = InStat;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_SignOfInteger_ReturnValue = CallFunc_SignOfInteger_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutModifiedStat != nullptr)
		*OutModifiedStat = Parms.OutModifiedStat;

}


// Function UMG_ItemStats.UMG_ItemStats_C.UpdateAlterations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAlterationsEnum>    CombinedAlterations                                              (Edit, BlueprintVisible)
// class UUMG_AlterationDescription_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_AlterationDescription_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAlterationsEnum            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAlterationsEnum>    CallFunc_GetItemAlterations_Alterations                          (ReferenceParm)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryContainerData     CallFunc_GetInventoryContainerData_InventoryContainerData        (None)
// enum class EDataValid              CallFunc_GetInventoryContainerData_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItemAttachment_Attachment                            (ContainsInstancedReference)
// enum class EDataValid              CallFunc_GetItemAttachment_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusAttachment           CallFunc_GetItemAttachmentData_Attachment                        (None)
// enum class EDataValid              CallFunc_GetItemAttachmentData_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAlterationsEnum            CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)

void UUMG_ItemStats_C::UpdateAlterations(const TArray<struct FAlterationsEnum>& CombinedAlterations, class UUMG_AlterationDescription_C* CallFunc_Create_ReturnValue, class UUMG_AlterationDescription_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FAlterationsEnum& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, TArray<struct FAlterationsEnum>& CallFunc_GetItemAlterations_Alterations, bool CallFunc_ItemMatchesQuery_ReturnValue, const struct FInventoryContainerData& CallFunc_GetInventoryContainerData_InventoryContainerData, enum class EDataValid CallFunc_GetInventoryContainerData_Paths, const struct FItemData& CallFunc_GetItemAttachment_Attachment, enum class EDataValid CallFunc_GetItemAttachment_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FIcarusAttachment& CallFunc_GetItemAttachmentData_Attachment, enum class EDataValid CallFunc_GetItemAttachmentData_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FAlterationsEnum& CallFunc_RowHandleToStruct_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemStats_C", "UpdateAlterations");

	Params::UUMG_ItemStats_C_UpdateAlterations_Params Parms{};

	Parms.CombinedAlterations = CombinedAlterations;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;
	Parms.CallFunc_GetItemAlterations_Alterations = CallFunc_GetItemAlterations_Alterations;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.CallFunc_GetInventoryContainerData_InventoryContainerData = CallFunc_GetInventoryContainerData_InventoryContainerData;
	Parms.CallFunc_GetInventoryContainerData_Paths = CallFunc_GetInventoryContainerData_Paths;
	Parms.CallFunc_GetItemAttachment_Attachment = CallFunc_GetItemAttachment_Attachment;
	Parms.CallFunc_GetItemAttachment_Paths = CallFunc_GetItemAttachment_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetItemAttachmentData_Attachment = CallFunc_GetItemAttachmentData_Attachment;
	Parms.CallFunc_GetItemAttachmentData_Paths = CallFunc_GetItemAttachmentData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ItemStats.UMG_ItemStats_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TMap<struct FStatsEnum, int32>     Stats                                                            (Edit, BlueprintVisible)
// struct FStatAfflictionsRowHandle   StatAfflication                                                  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatAfflictionsEnum        CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// struct FStatAfflictionsRowHandle   CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatAfflictions            CallFunc_GetStatAfflictionsStruct_StatAfflictions                (None)
// enum class EValid                  CallFunc_GetStatAfflictionsStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ArmourSet_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_StatDescription_C*      CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsEnum                  Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConsumableData             CallFunc_GetConsumableData_ConsumableData                        (None)
// enum class EDataValid              CallFunc_GetConsumableData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifierStateData          CallFunc_GetModifierStatesStruct_ModifierStates                  (None)
// enum class EValid                  CallFunc_GetModifierStatesStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ModifierDescription_C*  CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmourData                 CallFunc_GetArmourData_ArmourData                                (None)
// enum class EDataValid              CallFunc_GetArmourData_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEquippedArmourSet_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmourSet                  CallFunc_GetArmourSetsStruct_ArmourSets                          (None)
// enum class EValid                  CallFunc_GetArmourSetsStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmourSetBonusRowHandle    CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ModifierDescription_C*  CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsEnum                  Temp_struct_Variable_1                                           (ConstParm, HasGetValueTypeHash)
// TMap<struct FStatsEnum, int32>     CallFunc_GetItemPopupStats_Stats                                 (None)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<struct FStatsEnum>          CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsEnum                  CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// int32                              CallFunc_ApplyArbitraryMultiplier_OutModifiedStat                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasStatDescription_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ItemStats_C::Update(const struct FItemData& Item, TMap<struct FStatsEnum, int32> Stats, const struct FStatAfflictionsRowHandle& StatAfflication, int32 Temp_int_Variable, const struct FStatAfflictionsEnum& CallFunc_IntToStruct_ReturnValue, const struct FStatAfflictionsRowHandle& CallFunc_StructToRowHandle_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FStatAfflictions& CallFunc_GetStatAfflictionsStruct_StatAfflictions, enum class EValid CallFunc_GetStatAfflictionsStruct_Paths, class UUMG_ArmourSet_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_StatDescription_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FStatsEnum& Temp_struct_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FConsumableData& CallFunc_GetConsumableData_ConsumableData, enum class EDataValid CallFunc_GetConsumableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStatesStruct_ModifierStates, enum class EValid CallFunc_GetModifierStatesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UUMG_ModifierDescription_C* CallFunc_Create_ReturnValue_2, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, const struct FArmourData& CallFunc_GetArmourData_ArmourData, enum class EDataValid CallFunc_GetArmourData_Paths, int32 CallFunc_NumRows_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetEquippedArmourSet_ReturnValue, const struct FArmourSet& CallFunc_GetArmourSetsStruct_ArmourSets, enum class EValid CallFunc_GetArmourSetsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_5, int32 Temp_int_Loop_Counter_Variable_1, const struct FArmourSetBonusRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class UUMG_ModifierDescription_C* CallFunc_Create_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, const struct FStatsEnum& Temp_struct_Variable_1, TMap<struct FStatsEnum, int32> CallFunc_GetItemPopupStats_Stats, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, TArray<int32>& CallFunc_Map_Values_Values, TArray<struct FStatsEnum>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Get_Item_1, const struct FStatsEnum& CallFunc_Array_Get_Item_2, int32 CallFunc_ApplyArbitraryMultiplier_OutModifiedStat, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, bool CallFunc_HasStatDescription_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemStats_C", "Update");

	Params::UUMG_ItemStats_C_Update_Params Parms{};

	Parms.Item = Item;
	Parms.Stats = Stats;
	Parms.StatAfflication = StatAfflication;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetStatAfflictionsStruct_StatAfflictions = CallFunc_GetStatAfflictionsStruct_StatAfflictions;
	Parms.CallFunc_GetStatAfflictionsStruct_Paths = CallFunc_GetStatAfflictionsStruct_Paths;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetConsumableData_ConsumableData = CallFunc_GetConsumableData_ConsumableData;
	Parms.CallFunc_GetConsumableData_Paths = CallFunc_GetConsumableData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_GetModifierStatesStruct_ModifierStates = CallFunc_GetModifierStatesStruct_ModifierStates;
	Parms.CallFunc_GetModifierStatesStruct_Paths = CallFunc_GetModifierStatesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;
	Parms.CallFunc_GetArmourData_ArmourData = CallFunc_GetArmourData_ArmourData;
	Parms.CallFunc_GetArmourData_Paths = CallFunc_GetArmourData_Paths;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEquippedArmourSet_ReturnValue = CallFunc_GetEquippedArmourSet_ReturnValue;
	Parms.CallFunc_GetArmourSetsStruct_ArmourSets = CallFunc_GetArmourSetsStruct_ArmourSets;
	Parms.CallFunc_GetArmourSetsStruct_Paths = CallFunc_GetArmourSetsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_2 = CallFunc_AddChildToVerticalBox_ReturnValue_2;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetItemPopupStats_Stats = CallFunc_GetItemPopupStats_Stats;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_ApplyArbitraryMultiplier_OutModifiedStat = CallFunc_ApplyArbitraryMultiplier_OutModifiedStat;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.CallFunc_HasStatDescription_ReturnValue = CallFunc_HasStatDescription_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ItemStats.UMG_ItemStats_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_ItemStats_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemStats_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ItemStats.UMG_ItemStats_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ItemStats_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemStats_C", "BP_OnItemExpansionChanged");

	Params::UUMG_ItemStats_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ItemStats.UMG_ItemStats_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ItemStats_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemStats_C", "BP_OnItemSelectionChanged");

	Params::UUMG_ItemStats_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ItemStats.UMG_ItemStats_C.ExecuteUbergraph_UMG_ItemStats
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ItemStats_C::ExecuteUbergraph_UMG_ItemStats(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemStats_C", "ExecuteUbergraph_UMG_ItemStats");

	Params::UUMG_ItemStats_C_ExecuteUbergraph_UMG_ItemStats_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}

}


