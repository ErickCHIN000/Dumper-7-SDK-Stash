#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass msn_hud_popup05.msn_hud_popup05_C
// (None)

class UClass* UMsn_hud_popup05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("msn_hud_popup05_C");

	return Clss;
}


// msn_hud_popup05_C msn_hud_popup05.Default__msn_hud_popup05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_hud_popup05_C* UMsn_hud_popup05_C::GetDefaultObj()
{
	static class UMsn_hud_popup05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_hud_popup05_C*>(UMsn_hud_popup05_C::StaticClass()->DefaultObject);

	return Default;
}


// Function msn_hud_popup05.msn_hud_popup05_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMsn_hud_popup05_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msn_hud_popup05_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msn_hud_popup05.msn_hud_popup05_C.ExecuteUbergraph_msn_hud_popup05
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMsn_hud_popup05_C::ExecuteUbergraph_msn_hud_popup05(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msn_hud_popup05_C", "ExecuteUbergraph_msn_hud_popup05");

	Params::UMsn_hud_popup05_C_ExecuteUbergraph_msn_hud_popup05_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


