#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_InventoryEnvirosuit.UMG_InventoryEnvirosuit_C
// (None)

class UClass* UUMG_InventoryEnvirosuit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_InventoryEnvirosuit_C");

	return Clss;
}


// UMG_InventoryEnvirosuit_C UMG_InventoryEnvirosuit.Default__UMG_InventoryEnvirosuit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_InventoryEnvirosuit_C* UUMG_InventoryEnvirosuit_C::GetDefaultObj()
{
	static class UUMG_InventoryEnvirosuit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_InventoryEnvirosuit_C*>(UUMG_InventoryEnvirosuit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_InventoryEnvirosuit.UMG_InventoryEnvirosuit_C.UpdateLockState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_InventoryEnvirosuit_C::UpdateLockState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InventoryEnvirosuit_C", "UpdateLockState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_InventoryEnvirosuit.UMG_InventoryEnvirosuit_C.ExecuteUbergraph_UMG_InventoryEnvirosuit
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFeatureLevelEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_InventoryEnvirosuit_C::ExecuteUbergraph_UMG_InventoryEnvirosuit(int32 EntryPoint, bool CallFunc_IsFeatureLevelEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InventoryEnvirosuit_C", "ExecuteUbergraph_UMG_InventoryEnvirosuit");

	Params::UUMG_InventoryEnvirosuit_C_ExecuteUbergraph_UMG_InventoryEnvirosuit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsFeatureLevelEnabled_ReturnValue = CallFunc_IsFeatureLevelEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


