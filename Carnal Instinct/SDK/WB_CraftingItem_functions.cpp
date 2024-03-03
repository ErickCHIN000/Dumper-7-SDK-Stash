#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_CraftingItem.WB_CraftingItem_C
// (None)

class UClass* UWB_CraftingItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_CraftingItem_C");

	return Clss;
}


// WB_CraftingItem_C WB_CraftingItem.Default__WB_CraftingItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_CraftingItem_C* UWB_CraftingItem_C::GetDefaultObj()
{
	static class UWB_CraftingItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_CraftingItem_C*>(UWB_CraftingItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_CraftingItem.WB_CraftingItem_C.Get Quantity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWB_CraftingItem_C::Get_Quantity(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CraftingItem_C", "Get Quantity");

	Params::UWB_CraftingItem_C_Get_Quantity_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_CraftingItem.WB_CraftingItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_CraftingItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CraftingItem_C", "BndEvt__ItemButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CraftingItem.WB_CraftingItem_C.Event Craft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_CraftingItem_C::Event_Craft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CraftingItem_C", "Event Craft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CraftingItem.WB_CraftingItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_CraftingItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CraftingItem_C", "BndEvt__ItemButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CraftingItem.WB_CraftingItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_CraftingItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CraftingItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CraftingItem.WB_CraftingItem_C.ExecuteUbergraph_WB_CraftingItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_ToolTip_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Crafting_C*              CallFunc_Get_AC_Crafting_AC_Crafting                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CraftingItem_C::ExecuteUbergraph_WB_CraftingItem(int32 EntryPoint, class UWB_ToolTip_C* CallFunc_Create_ReturnValue, class UAC_Crafting_C* CallFunc_Get_AC_Crafting_AC_Crafting, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CraftingItem_C", "ExecuteUbergraph_WB_CraftingItem");

	Params::UWB_CraftingItem_C_ExecuteUbergraph_WB_CraftingItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Get_AC_Crafting_AC_Crafting = CallFunc_Get_AC_Crafting_AC_Crafting;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;

	UObject::ProcessEvent(Func, &Parms);

}

}


