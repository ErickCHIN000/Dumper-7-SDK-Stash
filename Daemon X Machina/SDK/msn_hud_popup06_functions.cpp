#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass msn_hud_popup06.msn_hud_popup06_C
// (None)

class UClass* UMsn_hud_popup06_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("msn_hud_popup06_C");

	return Clss;
}


// msn_hud_popup06_C msn_hud_popup06.Default__msn_hud_popup06_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_hud_popup06_C* UMsn_hud_popup06_C::GetDefaultObj()
{
	static class UMsn_hud_popup06_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_hud_popup06_C*>(UMsn_hud_popup06_C::StaticClass()->DefaultObject);

	return Default;
}


// Function msn_hud_popup06.msn_hud_popup06_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMsn_hud_popup06_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msn_hud_popup06_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msn_hud_popup06.msn_hud_popup06_C.ExecuteUbergraph_msn_hud_popup06
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMsn_hud_popup06_C::ExecuteUbergraph_msn_hud_popup06(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msn_hud_popup06_C", "ExecuteUbergraph_msn_hud_popup06");

	Params::UMsn_hud_popup06_C_ExecuteUbergraph_msn_hud_popup06_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


