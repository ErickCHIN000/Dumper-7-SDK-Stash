#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_interactable_sand.BP_Item_interactable_sand_C
// (Actor)

class UClass* ABP_Item_interactable_sand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_interactable_sand_C");

	return Clss;
}


// BP_Item_interactable_sand_C BP_Item_interactable_sand.Default__BP_Item_interactable_sand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Item_interactable_sand_C* ABP_Item_interactable_sand_C::GetDefaultObj()
{
	static class ABP_Item_interactable_sand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Item_interactable_sand_C*>(ABP_Item_interactable_sand_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Item_interactable_sand.BP_Item_interactable_sand_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Item_interactable_sand_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_interactable_sand_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_interactable_sand.BP_Item_interactable_sand_C.Show Indicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Item_interactable_sand_C::Show_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_interactable_sand_C", "Show Indicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_interactable_sand.BP_Item_interactable_sand_C.ExecuteUbergraph_BP_Item_interactable_sand
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Add_Item_to_Inventory_Inventory_Full_                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_Item_to_Inventory_Added_Slot_Index                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_interactable_sand_C::ExecuteUbergraph_BP_Item_interactable_sand(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Add_Item_to_Inventory_Inventory_Full_, int32 CallFunc_Add_Item_to_Inventory_Added_Slot_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_interactable_sand_C", "ExecuteUbergraph_BP_Item_interactable_sand");

	Params::ABP_Item_interactable_sand_C_ExecuteUbergraph_BP_Item_interactable_sand_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_Item_to_Inventory_Inventory_Full_ = CallFunc_Add_Item_to_Inventory_Inventory_Full_;
	Parms.CallFunc_Add_Item_to_Inventory_Added_Slot_Index = CallFunc_Add_Item_to_Inventory_Added_Slot_Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


