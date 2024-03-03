#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_interactable_mistletoe.BP_Item_interactable_mistletoe_C
// (Actor)

class UClass* ABP_Item_interactable_mistletoe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_interactable_mistletoe_C");

	return Clss;
}


// BP_Item_interactable_mistletoe_C BP_Item_interactable_mistletoe.Default__BP_Item_interactable_mistletoe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Item_interactable_mistletoe_C* ABP_Item_interactable_mistletoe_C::GetDefaultObj()
{
	static class ABP_Item_interactable_mistletoe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Item_interactable_mistletoe_C*>(ABP_Item_interactable_mistletoe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Item_interactable_mistletoe.BP_Item_interactable_mistletoe_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Item_interactable_mistletoe_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_interactable_mistletoe_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_interactable_mistletoe.BP_Item_interactable_mistletoe_C.Show Indicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Item_interactable_mistletoe_C::Show_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_interactable_mistletoe_C", "Show Indicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_interactable_mistletoe.BP_Item_interactable_mistletoe_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Item_interactable_mistletoe_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_interactable_mistletoe_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_interactable_mistletoe.BP_Item_interactable_mistletoe_C.MeshSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Item_interactable_mistletoe_C::MeshSwap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_interactable_mistletoe_C", "MeshSwap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_interactable_mistletoe.BP_Item_interactable_mistletoe_C.ExecuteUbergraph_BP_Item_interactable_mistletoe
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Add_Item_to_Inventory_Inventory_Full_                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_Item_to_Inventory_Added_Slot_Index                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Item_interactable_mistletoe_C::ExecuteUbergraph_BP_Item_interactable_mistletoe(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Add_Item_to_Inventory_Inventory_Full_, int32 CallFunc_Add_Item_to_Inventory_Added_Slot_Index, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_interactable_mistletoe_C", "ExecuteUbergraph_BP_Item_interactable_mistletoe");

	Params::ABP_Item_interactable_mistletoe_C_ExecuteUbergraph_BP_Item_interactable_mistletoe_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_Item_to_Inventory_Inventory_Full_ = CallFunc_Add_Item_to_Inventory_Inventory_Full_;
	Parms.CallFunc_Add_Item_to_Inventory_Added_Slot_Index = CallFunc_Add_Item_to_Inventory_Added_Slot_Index;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


