#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C
// (None)

class UClass* UWid_Upgrade_StatsNew_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Upgrade_StatsNew_Entry_C");

	return Clss;
}


// wid_Upgrade_StatsNew_Entry_C wid_Upgrade_StatsNew_Entry.Default__wid_Upgrade_StatsNew_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Upgrade_StatsNew_Entry_C* UWid_Upgrade_StatsNew_Entry_C::GetDefaultObj()
{
	static class UWid_Upgrade_StatsNew_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Upgrade_StatsNew_Entry_C*>(UWid_Upgrade_StatsNew_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.FindProperPropertiesPerFocus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDataTable*                  InDataTable                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Upgrades_Main_C*        InFocusedType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGAttachmentProperties     OutProperties                                                    (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGScopeProperties          CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo           (None)
// struct FCGBarrelProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo          (None)
// struct FCGMagazineProperties       CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo        (None)
// struct FCGHandleProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo           (None)
// struct FCGTriggerProperties        CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo         (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGAttachmentProperties     K2Node_MakeStruct_CGAttachmentProperties                         (UObjectWrapper)
// struct FCGAttachmentProperties     K2Node_MakeStruct_CGAttachmentProperties_1                       (UObjectWrapper)
// struct FCGAttachmentProperties     K2Node_MakeStruct_CGAttachmentProperties_2                       (UObjectWrapper)
// struct FCGAttachmentProperties     K2Node_MakeStruct_CGAttachmentProperties_3                       (UObjectWrapper)
// struct FCGAttachmentProperties     K2Node_MakeStruct_CGAttachmentProperties_4                       (UObjectWrapper)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGAttachmentProperties     K2Node_MakeStruct_CGAttachmentProperties_5                       (UObjectWrapper)
// struct FCGAttachmentProperties     K2Node_Select_Default                                            (None)
// struct FCGAttachmentProperties     K2Node_Select_Default_1                                          (None)
// struct FCGAttachmentProperties     K2Node_Select_Default_2                                          (None)
// struct FCGAttachmentProperties     K2Node_Select_Default_3                                          (None)
// struct FCGAttachmentProperties     K2Node_Select_Default_4                                          (None)

void UWid_Upgrade_StatsNew_Entry_C::FindProperPropertiesPerFocus(class UDataTable* InDataTable, class UWid_Upgrades_Main_C* InFocusedType, struct FCGAttachmentProperties* OutProperties, bool Temp_bool_Variable, const struct FCGScopeProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo, const struct FCGBarrelProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo, const struct FCGMagazineProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo, const struct FCGHandleProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo, const struct FCGTriggerProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FCGAttachmentProperties& K2Node_MakeStruct_CGAttachmentProperties, const struct FCGAttachmentProperties& K2Node_MakeStruct_CGAttachmentProperties_1, const struct FCGAttachmentProperties& K2Node_MakeStruct_CGAttachmentProperties_2, const struct FCGAttachmentProperties& K2Node_MakeStruct_CGAttachmentProperties_3, const struct FCGAttachmentProperties& K2Node_MakeStruct_CGAttachmentProperties_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, const struct FCGAttachmentProperties& K2Node_MakeStruct_CGAttachmentProperties_5, const struct FCGAttachmentProperties& K2Node_Select_Default, const struct FCGAttachmentProperties& K2Node_Select_Default_1, const struct FCGAttachmentProperties& K2Node_Select_Default_2, const struct FCGAttachmentProperties& K2Node_Select_Default_3, const struct FCGAttachmentProperties& K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Upgrade_StatsNew_Entry_C", "FindProperPropertiesPerFocus");

	Params::UWid_Upgrade_StatsNew_Entry_C_FindProperPropertiesPerFocus_Params Parms{};

	Parms.InDataTable = InDataTable;
	Parms.InFocusedType = InFocusedType;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_MakeStruct_CGAttachmentProperties = K2Node_MakeStruct_CGAttachmentProperties;
	Parms.K2Node_MakeStruct_CGAttachmentProperties_1 = K2Node_MakeStruct_CGAttachmentProperties_1;
	Parms.K2Node_MakeStruct_CGAttachmentProperties_2 = K2Node_MakeStruct_CGAttachmentProperties_2;
	Parms.K2Node_MakeStruct_CGAttachmentProperties_3 = K2Node_MakeStruct_CGAttachmentProperties_3;
	Parms.K2Node_MakeStruct_CGAttachmentProperties_4 = K2Node_MakeStruct_CGAttachmentProperties_4;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_4 = CallFunc_EqualEqual_ObjectObject_ReturnValue_4;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_MakeStruct_CGAttachmentProperties_5 = K2Node_MakeStruct_CGAttachmentProperties_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

	if (OutProperties != nullptr)
		*OutProperties = std::move(Parms.OutProperties);

}


// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.CalculateSignificantChange
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Upgrades_Main_C*        InOuter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGWeapon*                   InCurrentWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  InFocusDatatable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        InFocusRow                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutSignificantChange                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  _focusDT                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              _significantChange                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        _focusRow                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGWeapon*                   _currentWeapon                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Upgrades_Main_C*        _outer                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              _significantVal                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGMagazineProperties       CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGHandleProperties         CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGTriggerProperties        CallFunc_GetDataTableRowFromName_OutRow_2                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGBarrelProperties         CallFunc_GetDataTableRowFromName_OutRow_3                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGScopeProperties          CallFunc_GetDataTableRowFromName_OutRow_4                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGScopeProperties          CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo           (None)
// struct FCGBarrelProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo          (None)
// struct FCGMagazineProperties       CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo        (None)
// struct FCGHandleProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo           (None)
// struct FCGTriggerProperties        CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo         (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindAttachmentProperties_bOutFound                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGAttachmentProperties     CallFunc_FindAttachmentProperties_ReturnValue                    (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGAttachmentProperties     CallFunc_FindProperPropertiesPerFocus_OutProperties              (None)
// bool                               CallFunc_FindAttachmentProperties_bOutFound_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGAttachmentProperties     CallFunc_FindAttachmentProperties_ReturnValue_1                  (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGAttachmentProperties     CallFunc_FindProperPropertiesPerFocus_OutProperties_1            (None)
// bool                               CallFunc_FindAttachmentProperties_bOutFound_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGAttachmentProperties     CallFunc_FindAttachmentProperties_ReturnValue_2                  (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGAttachmentProperties     CallFunc_FindProperPropertiesPerFocus_OutProperties_2            (None)
// bool                               CallFunc_FindAttachmentProperties_bOutFound_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGAttachmentProperties     CallFunc_FindAttachmentProperties_ReturnValue_3                  (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGAttachmentProperties     CallFunc_FindProperPropertiesPerFocus_OutProperties_3            (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Upgrade_StatsNew_Entry_C::CalculateSignificantChange(class UWid_Upgrades_Main_C* InOuter, class ACGWeapon* InCurrentWeapon, class UDataTable* InFocusDatatable, class FName InFocusRow, int32* OutSignificantChange, class UDataTable* _focusDT, int32 _significantChange, class FName _focusRow, class ACGWeapon* _currentWeapon, class UWid_Upgrades_Main_C* _outer, int32 _significantVal, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, const struct FCGMagazineProperties& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FCGHandleProperties& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FCGTriggerProperties& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FCGBarrelProperties& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, const struct FCGScopeProperties& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, const struct FCGScopeProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo, const struct FCGBarrelProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo, const struct FCGMagazineProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo, const struct FCGHandleProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo, const struct FCGTriggerProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_FindAttachmentProperties_bOutFound, const struct FCGAttachmentProperties& CallFunc_FindAttachmentProperties_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FCGAttachmentProperties& CallFunc_FindProperPropertiesPerFocus_OutProperties, bool CallFunc_FindAttachmentProperties_bOutFound_1, const struct FCGAttachmentProperties& CallFunc_FindAttachmentProperties_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, const struct FCGAttachmentProperties& CallFunc_FindProperPropertiesPerFocus_OutProperties_1, bool CallFunc_FindAttachmentProperties_bOutFound_2, const struct FCGAttachmentProperties& CallFunc_FindAttachmentProperties_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_5, const struct FCGAttachmentProperties& CallFunc_FindProperPropertiesPerFocus_OutProperties_2, bool CallFunc_FindAttachmentProperties_bOutFound_3, const struct FCGAttachmentProperties& CallFunc_FindAttachmentProperties_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_7, const struct FCGAttachmentProperties& CallFunc_FindProperPropertiesPerFocus_OutProperties_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_9, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Upgrade_StatsNew_Entry_C", "CalculateSignificantChange");

	Params::UWid_Upgrade_StatsNew_Entry_C_CalculateSignificantChange_Params Parms{};

	Parms.InOuter = InOuter;
	Parms.InCurrentWeapon = InCurrentWeapon;
	Parms.InFocusDatatable = InFocusDatatable;
	Parms.InFocusRow = InFocusRow;
	Parms._focusDT = _focusDT;
	Parms._significantChange = _significantChange;
	Parms._focusRow = _focusRow;
	Parms._currentWeapon = _currentWeapon;
	Parms._outer = _outer;
	Parms._significantVal = _significantVal;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_4 = CallFunc_EqualEqual_ObjectObject_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FindAttachmentProperties_bOutFound = CallFunc_FindAttachmentProperties_bOutFound;
	Parms.CallFunc_FindAttachmentProperties_ReturnValue = CallFunc_FindAttachmentProperties_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_FindProperPropertiesPerFocus_OutProperties = CallFunc_FindProperPropertiesPerFocus_OutProperties;
	Parms.CallFunc_FindAttachmentProperties_bOutFound_1 = CallFunc_FindAttachmentProperties_bOutFound_1;
	Parms.CallFunc_FindAttachmentProperties_ReturnValue_1 = CallFunc_FindAttachmentProperties_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_FindProperPropertiesPerFocus_OutProperties_1 = CallFunc_FindProperPropertiesPerFocus_OutProperties_1;
	Parms.CallFunc_FindAttachmentProperties_bOutFound_2 = CallFunc_FindAttachmentProperties_bOutFound_2;
	Parms.CallFunc_FindAttachmentProperties_ReturnValue_2 = CallFunc_FindAttachmentProperties_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_FindProperPropertiesPerFocus_OutProperties_2 = CallFunc_FindProperPropertiesPerFocus_OutProperties_2;
	Parms.CallFunc_FindAttachmentProperties_bOutFound_3 = CallFunc_FindAttachmentProperties_bOutFound_3;
	Parms.CallFunc_FindAttachmentProperties_ReturnValue_3 = CallFunc_FindAttachmentProperties_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_6 = CallFunc_Subtract_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_7 = CallFunc_Subtract_IntInt_ReturnValue_7;
	Parms.CallFunc_FindProperPropertiesPerFocus_OutProperties_3 = CallFunc_FindProperPropertiesPerFocus_OutProperties_3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_5 = CallFunc_EqualEqual_ObjectObject_ReturnValue_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_8 = CallFunc_Subtract_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_9 = CallFunc_Subtract_IntInt_ReturnValue_9;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSignificantChange != nullptr)
		*OutSignificantChange = Parms.OutSignificantChange;

}


// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.CalculateSignificantValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Upgrades_Main_C*        InOuter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGWeapon*                   InCurrentWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutSignificantValue                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGWeapon*                   _currentWeapon                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Upgrades_Main_C*        _outer                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGScopeProperties          CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo           (None)
// struct FCGBarrelProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo          (None)
// struct FCGMagazineProperties       CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo        (None)
// struct FCGHandleProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo           (None)
// struct FCGTriggerProperties        CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo         (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGScopeProperties          CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_1         (None)
// struct FCGBarrelProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_1        (None)
// struct FCGMagazineProperties       CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_1      (None)
// struct FCGHandleProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_1         (None)
// struct FCGTriggerProperties        CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_1       (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGScopeProperties          CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_2         (None)
// struct FCGBarrelProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_2        (None)
// struct FCGMagazineProperties       CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_2      (None)
// struct FCGHandleProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_2         (None)
// struct FCGTriggerProperties        CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_2       (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGScopeProperties          CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_3         (None)
// struct FCGBarrelProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_3        (None)
// struct FCGMagazineProperties       CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_3      (None)
// struct FCGHandleProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_3         (None)
// struct FCGTriggerProperties        CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_3       (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGScopeProperties          CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_4         (None)
// struct FCGBarrelProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_4        (None)
// struct FCGMagazineProperties       CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_4      (None)
// struct FCGHandleProperties         CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_4         (None)
// struct FCGTriggerProperties        CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_4       (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_20                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Upgrade_StatsNew_Entry_C::CalculateSignificantValue(class UWid_Upgrades_Main_C* InOuter, class ACGWeapon* InCurrentWeapon, int32* OutSignificantValue, class ACGWeapon* _currentWeapon, class UWid_Upgrades_Main_C* _outer, bool CallFunc_IsValid_ReturnValue, const struct FCGScopeProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo, const struct FCGBarrelProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo, const struct FCGMagazineProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo, const struct FCGHandleProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo, const struct FCGTriggerProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, const struct FCGScopeProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_1, const struct FCGBarrelProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_1, const struct FCGMagazineProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_1, const struct FCGHandleProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_1, const struct FCGTriggerProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FCGScopeProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_2, const struct FCGBarrelProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_2, const struct FCGMagazineProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_2, const struct FCGHandleProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_2, const struct FCGTriggerProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Clamp_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, const struct FCGScopeProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_3, const struct FCGBarrelProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_3, const struct FCGMagazineProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_3, const struct FCGHandleProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_3, const struct FCGTriggerProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_3, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_10, int32 CallFunc_Clamp_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_12, const struct FCGScopeProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_4, const struct FCGBarrelProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_4, const struct FCGMagazineProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_4, const struct FCGHandleProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_4, const struct FCGTriggerProperties& CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_4, int32 CallFunc_Add_IntInt_ReturnValue_13, int32 CallFunc_Add_IntInt_ReturnValue_14, int32 CallFunc_Add_IntInt_ReturnValue_15, int32 CallFunc_Clamp_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue_16, int32 CallFunc_Add_IntInt_ReturnValue_17, int32 CallFunc_Add_IntInt_ReturnValue_18, int32 CallFunc_Add_IntInt_ReturnValue_19, int32 CallFunc_Add_IntInt_ReturnValue_20, int32 CallFunc_Clamp_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Upgrade_StatsNew_Entry_C", "CalculateSignificantValue");

	Params::UWid_Upgrade_StatsNew_Entry_C_CalculateSignificantValue_Params Parms{};

	Parms.InOuter = InOuter;
	Parms.InCurrentWeapon = InCurrentWeapon;
	Parms._currentWeapon = _currentWeapon;
	Parms._outer = _outer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_1 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_1;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_1 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_1;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_1 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_1;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_1 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_1;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_1 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_2 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_2;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_2 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_2;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_2 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_2;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_2 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_2;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_2 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_3 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_3;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_3 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_3;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_3 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_3;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_3 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_3;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_3 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_Clamp_ReturnValue_2 = CallFunc_Clamp_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_4 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_4;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_4 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_4;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_4 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_4;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_4 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_4;
	Parms.CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_4 = CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.CallFunc_Add_IntInt_ReturnValue_14 = CallFunc_Add_IntInt_ReturnValue_14;
	Parms.CallFunc_Add_IntInt_ReturnValue_15 = CallFunc_Add_IntInt_ReturnValue_15;
	Parms.CallFunc_Clamp_ReturnValue_3 = CallFunc_Clamp_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_16 = CallFunc_Add_IntInt_ReturnValue_16;
	Parms.CallFunc_Add_IntInt_ReturnValue_17 = CallFunc_Add_IntInt_ReturnValue_17;
	Parms.CallFunc_Add_IntInt_ReturnValue_18 = CallFunc_Add_IntInt_ReturnValue_18;
	Parms.CallFunc_Add_IntInt_ReturnValue_19 = CallFunc_Add_IntInt_ReturnValue_19;
	Parms.CallFunc_Add_IntInt_ReturnValue_20 = CallFunc_Add_IntInt_ReturnValue_20;
	Parms.CallFunc_Clamp_ReturnValue_4 = CallFunc_Clamp_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSignificantValue != nullptr)
		*OutSignificantValue = Parms.OutSignificantValue;

}


// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.Update_Craft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Upgrades_Main_C*        InOuter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Upgrade_StatsNew_Entry_C::Update_Craft(class UWid_Upgrades_Main_C* InOuter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Upgrade_StatsNew_Entry_C", "Update_Craft");

	Params::UWid_Upgrade_StatsNew_Entry_C_Update_Craft_Params Parms{};

	Parms.InOuter = InOuter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.UpdateCurrentSignificantValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Upgrade_StatsNew_Entry_C::UpdateCurrentSignificantValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Upgrade_StatsNew_Entry_C", "UpdateCurrentSignificantValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.Update_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Upgrades_Main_C*        InOuter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  InDataTable                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        InRow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Upgrade_StatsNew_Entry_C::Update_Focus(class UWid_Upgrades_Main_C* InOuter, class UDataTable* InDataTable, class FName InRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Upgrade_StatsNew_Entry_C", "Update_Focus");

	Params::UWid_Upgrade_StatsNew_Entry_C_Update_Focus_Params Parms{};

	Parms.InOuter = InOuter;
	Parms.InDataTable = InDataTable;
	Parms.InRow = InRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.UpdateCurrentChangeValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  InDataTable                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        InRow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Upgrade_StatsNew_Entry_C::UpdateCurrentChangeValue(class UDataTable* InDataTable, class FName InRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Upgrade_StatsNew_Entry_C", "UpdateCurrentChangeValue");

	Params::UWid_Upgrade_StatsNew_Entry_C_UpdateCurrentChangeValue_Params Parms{};

	Parms.InDataTable = InDataTable;
	Parms.InRow = InRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Upgrade_StatsNew_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Upgrade_StatsNew_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Upgrade_StatsNew_Entry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Upgrade_StatsNew_Entry_C", "Tick");

	Params::UWid_Upgrade_StatsNew_Entry_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.Update_CategoryEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Upgrades_Main_C*        Outer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Upgrade_StatsNew_Entry_C::Update_CategoryEnter(class UWid_Upgrades_Main_C* Outer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Upgrade_StatsNew_Entry_C", "Update_CategoryEnter");

	Params::UWid_Upgrade_StatsNew_Entry_C_Update_CategoryEnter_Params Parms{};

	Parms.Outer = Outer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.ExecuteUbergraph_wid_Upgrade_StatsNew_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Upgrades_Main_C*        K2Node_CustomEvent_InOuter_1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGActiveItem*               CallFunc_GetCurrentWeapon_OutCurrentWeapon                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGActiveItem*               CallFunc_GetCurrentWeapon_OutCurrentWeapon_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGWeapon*                   K2Node_DynamicCast_AsCGWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGWeapon*                   K2Node_DynamicCast_AsCGWeapon_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Upgrades_Main_C*        K2Node_CustomEvent_InOuter                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_CustomEvent_InDatatable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_InRow_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculateSignificantValue_OutSignificantValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGActiveItem*               CallFunc_GetCurrentWeapon_OutCurrentWeapon_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_CustomEvent_InDatatable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_InRow                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGWeapon*                   K2Node_DynamicCast_AsCGWeapon_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculateSignificantChange_OutSignificantChange         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGActiveItem*               CallFunc_GetCurrentWeapon_OutCurrentWeapon_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class ACGWeapon*                   K2Node_DynamicCast_AsCGWeapon_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Abs_Int_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Upgrades_Main_C*        K2Node_CustomEvent_Outer                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Upgrade_StatsNew_Entry_C::ExecuteUbergraph_wid_Upgrade_StatsNew_Entry(int32 EntryPoint, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, class UWid_Upgrades_Main_C* K2Node_CustomEvent_InOuter_1, class ACGActiveItem* CallFunc_GetCurrentWeapon_OutCurrentWeapon, class ACGActiveItem* CallFunc_GetCurrentWeapon_OutCurrentWeapon_1, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon_1, bool K2Node_DynamicCast_bSuccess_1, class UWid_Upgrades_Main_C* K2Node_CustomEvent_InOuter, class UDataTable* K2Node_CustomEvent_InDatatable_1, class FName K2Node_CustomEvent_InRow_1, int32 CallFunc_CalculateSignificantValue_OutSignificantValue, class ACGActiveItem* CallFunc_GetCurrentWeapon_OutCurrentWeapon_2, class UDataTable* K2Node_CustomEvent_InDatatable, class FName K2Node_CustomEvent_InRow, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_CalculateSignificantChange_OutSignificantChange, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class ACGActiveItem* CallFunc_GetCurrentWeapon_OutCurrentWeapon_3, class FText CallFunc_Conv_IntToText_ReturnValue, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon_3, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Abs_Int_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& K2Node_Select_Default, bool CallFunc_NotEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UWid_Upgrades_Main_C* K2Node_CustomEvent_Outer, const struct FLinearColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Upgrade_StatsNew_Entry_C", "ExecuteUbergraph_wid_Upgrade_StatsNew_Entry");

	Params::UWid_Upgrade_StatsNew_Entry_C_ExecuteUbergraph_wid_Upgrade_StatsNew_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CustomEvent_InOuter_1 = K2Node_CustomEvent_InOuter_1;
	Parms.CallFunc_GetCurrentWeapon_OutCurrentWeapon = CallFunc_GetCurrentWeapon_OutCurrentWeapon;
	Parms.CallFunc_GetCurrentWeapon_OutCurrentWeapon_1 = CallFunc_GetCurrentWeapon_OutCurrentWeapon_1;
	Parms.K2Node_DynamicCast_AsCGWeapon = K2Node_DynamicCast_AsCGWeapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCGWeapon_1 = K2Node_DynamicCast_AsCGWeapon_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_InOuter = K2Node_CustomEvent_InOuter;
	Parms.K2Node_CustomEvent_InDatatable_1 = K2Node_CustomEvent_InDatatable_1;
	Parms.K2Node_CustomEvent_InRow_1 = K2Node_CustomEvent_InRow_1;
	Parms.CallFunc_CalculateSignificantValue_OutSignificantValue = CallFunc_CalculateSignificantValue_OutSignificantValue;
	Parms.CallFunc_GetCurrentWeapon_OutCurrentWeapon_2 = CallFunc_GetCurrentWeapon_OutCurrentWeapon_2;
	Parms.K2Node_CustomEvent_InDatatable = K2Node_CustomEvent_InDatatable;
	Parms.K2Node_CustomEvent_InRow = K2Node_CustomEvent_InRow;
	Parms.K2Node_DynamicCast_AsCGWeapon_2 = K2Node_DynamicCast_AsCGWeapon_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_CalculateSignificantChange_OutSignificantChange = CallFunc_CalculateSignificantChange_OutSignificantChange;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetCurrentWeapon_OutCurrentWeapon_3 = CallFunc_GetCurrentWeapon_OutCurrentWeapon_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGWeapon_3 = K2Node_DynamicCast_AsCGWeapon_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Abs_Int_ReturnValue = CallFunc_Abs_Int_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_Outer = K2Node_CustomEvent_Outer;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


