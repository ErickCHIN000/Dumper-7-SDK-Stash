#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Vessel_Halloween.BP_Vessel_Halloween_C
// (Actor)

class UClass* ABP_Vessel_Halloween_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Vessel_Halloween_C");

	return Clss;
}


// BP_Vessel_Halloween_C BP_Vessel_Halloween.Default__BP_Vessel_Halloween_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Vessel_Halloween_C* ABP_Vessel_Halloween_C::GetDefaultObj()
{
	static class ABP_Vessel_Halloween_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Vessel_Halloween_C*>(ABP_Vessel_Halloween_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Vessel_Halloween.BP_Vessel_Halloween_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Vessel_Halloween_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vessel_Halloween_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vessel_Halloween.BP_Vessel_Halloween_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Vessel_Halloween_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vessel_Halloween_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vessel_Halloween.BP_Vessel_Halloween_C.ShowJar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Vessel_Halloween_C::ShowJar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vessel_Halloween_C", "ShowJar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vessel_Halloween.BP_Vessel_Halloween_C.Hide Jar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Vessel_Halloween_C::Hide_Jar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vessel_Halloween_C", "Hide Jar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vessel_Halloween.BP_Vessel_Halloween_C.ExecuteUbergraph_BP_Vessel_Halloween
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_bodySystem               CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Vessel_Halloween_C::ExecuteUbergraph_BP_Vessel_Halloween(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_bodySystem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vessel_Halloween_C", "ExecuteUbergraph_BP_Vessel_Halloween");

	Params::ABP_Vessel_Halloween_C_ExecuteUbergraph_BP_Vessel_Halloween_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


