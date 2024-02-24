#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoadoutRow.LoadoutRow_C
// (None)

class UClass* ULoadoutRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutRow_C");

	return Clss;
}


// LoadoutRow_C LoadoutRow.Default__LoadoutRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutRow_C* ULoadoutRow_C::GetDefaultObj()
{
	static class ULoadoutRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutRow_C*>(ULoadoutRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadoutRow.LoadoutRow_C.AddLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Loadout                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadoutRow_C::AddLoadout(class FName Loadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutRow_C", "AddLoadout");

	Params::ULoadoutRow_C_AddLoadout_Params Parms{};

	Parms.Loadout = Loadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadoutRow.LoadoutRow_C.ExecuteUbergraph_LoadoutRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Loadout                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void ULoadoutRow_C::ExecuteUbergraph_LoadoutRow(int32 EntryPoint, class FName K2Node_CustomEvent_Loadout, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutRow_C", "ExecuteUbergraph_LoadoutRow");

	Params::ULoadoutRow_C_ExecuteUbergraph_LoadoutRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loadout = K2Node_CustomEvent_Loadout;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


