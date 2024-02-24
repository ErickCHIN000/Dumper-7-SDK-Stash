#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BioLab_PurchaseUpgradeDetails.UMG_BioLab_PurchaseUpgradeDetails_C
// (None)

class UClass* UUMG_BioLab_PurchaseUpgradeDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BioLab_PurchaseUpgradeDetails_C");

	return Clss;
}


// UMG_BioLab_PurchaseUpgradeDetails_C UMG_BioLab_PurchaseUpgradeDetails.Default__UMG_BioLab_PurchaseUpgradeDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BioLab_PurchaseUpgradeDetails_C* UUMG_BioLab_PurchaseUpgradeDetails_C::GetDefaultObj()
{
	static class UUMG_BioLab_PurchaseUpgradeDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BioLab_PurchaseUpgradeDetails_C*>(UUMG_BioLab_PurchaseUpgradeDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BioLab_PurchaseUpgradeDetails.UMG_BioLab_PurchaseUpgradeDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BioLab_PurchaseUpgradeDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_PurchaseUpgradeDetails_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_PurchaseUpgradeDetails.UMG_BioLab_PurchaseUpgradeDetails_C.ExecuteUbergraph_UMG_BioLab_PurchaseUpgradeDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradeData      CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades          (None)
// enum class EValid                  CallFunc_GetLivingItemUpgradesStruct_Paths                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_WorkshopCost_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorkshopCost               CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAlterationsEnum            CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_PurchaseUpgradeDetails_C::ExecuteUbergraph_UMG_BioLab_PurchaseUpgradeDetails(int32 EntryPoint, const struct FLivingItemUpgradeData& CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades, enum class EValid CallFunc_GetLivingItemUpgradesStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_WorkshopCost_C* CallFunc_Create_ReturnValue, const struct FWorkshopCost& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FAlterationsEnum& CallFunc_RowHandleToStruct_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_PurchaseUpgradeDetails_C", "ExecuteUbergraph_UMG_BioLab_PurchaseUpgradeDetails");

	Params::UUMG_BioLab_PurchaseUpgradeDetails_C_ExecuteUbergraph_UMG_BioLab_PurchaseUpgradeDetails_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades = CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades;
	Parms.CallFunc_GetLivingItemUpgradesStruct_Paths = CallFunc_GetLivingItemUpgradesStruct_Paths;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


