#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_hud_list01.Msn_hud_list01_C
// (None)

class UClass* UMsn_hud_list01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_hud_list01_C");

	return Clss;
}


// Msn_hud_list01_C Msn_hud_list01.Default__Msn_hud_list01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_hud_list01_C* UMsn_hud_list01_C::GetDefaultObj()
{
	static class UMsn_hud_list01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_hud_list01_C*>(UMsn_hud_list01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Msn_hud_list01.Msn_hud_list01_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMsn_hud_list01_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Msn_hud_list01_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Msn_hud_list01.Msn_hud_list01_C.ExecuteUbergraph_Msn_hud_list01
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMsn_hud_list01_C::ExecuteUbergraph_Msn_hud_list01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Msn_hud_list01_C", "ExecuteUbergraph_Msn_hud_list01");

	Params::UMsn_hud_list01_C_ExecuteUbergraph_Msn_hud_list01_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


