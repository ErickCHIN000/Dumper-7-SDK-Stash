#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_EquipmentSlots.UMG_EquipmentSlots_C
// (None)

class UClass* UUMG_EquipmentSlots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_EquipmentSlots_C");

	return Clss;
}


// UMG_EquipmentSlots_C UMG_EquipmentSlots.Default__UMG_EquipmentSlots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_EquipmentSlots_C* UUMG_EquipmentSlots_C::GetDefaultObj()
{
	static class UUMG_EquipmentSlots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_EquipmentSlots_C*>(UUMG_EquipmentSlots_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_EquipmentSlots.UMG_EquipmentSlots_C.UpdateInventoryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_EquipmentSlots_C::UpdateInventoryItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_EquipmentSlots_C", "UpdateInventoryItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_EquipmentSlots.UMG_EquipmentSlots_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_EquipmentSlots_C::Initialize(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_EquipmentSlots_C", "Initialize");

	Params::UUMG_EquipmentSlots_C_Initialize_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_EquipmentSlots.UMG_EquipmentSlots_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_EquipmentSlots_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_EquipmentSlots_C", "PreConstruct");

	Params::UUMG_EquipmentSlots_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_EquipmentSlots.UMG_EquipmentSlots_C.ExecuteUbergraph_UMG_EquipmentSlots
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_EquipmentSlots_C::ExecuteUbergraph_UMG_EquipmentSlots(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_EquipmentSlots_C", "ExecuteUbergraph_UMG_EquipmentSlots");

	Params::UUMG_EquipmentSlots_C_ExecuteUbergraph_UMG_EquipmentSlots_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


