#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_hud_popup03.Msn_hud_popup03_C
// (None)

class UClass* UMsn_hud_popup03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_hud_popup03_C");

	return Clss;
}


// Msn_hud_popup03_C Msn_hud_popup03.Default__Msn_hud_popup03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_hud_popup03_C* UMsn_hud_popup03_C::GetDefaultObj()
{
	static class UMsn_hud_popup03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_hud_popup03_C*>(UMsn_hud_popup03_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Msn_hud_popup03.Msn_hud_popup03_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMsn_hud_popup03_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Msn_hud_popup03_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Msn_hud_popup03.Msn_hud_popup03_C.ExecuteUbergraph_Msn_hud_popup03
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMsn_hud_popup03_C::ExecuteUbergraph_Msn_hud_popup03(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Msn_hud_popup03_C", "ExecuteUbergraph_Msn_hud_popup03");

	Params::UMsn_hud_popup03_C_ExecuteUbergraph_Msn_hud_popup03_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


