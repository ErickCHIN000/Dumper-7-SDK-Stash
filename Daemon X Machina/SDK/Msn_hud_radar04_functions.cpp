#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_hud_radar04.Msn_hud_radar04_C
// (None)

class UClass* UMsn_hud_radar04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_hud_radar04_C");

	return Clss;
}


// Msn_hud_radar04_C Msn_hud_radar04.Default__Msn_hud_radar04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_hud_radar04_C* UMsn_hud_radar04_C::GetDefaultObj()
{
	static class UMsn_hud_radar04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_hud_radar04_C*>(UMsn_hud_radar04_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Msn_hud_radar04.Msn_hud_radar04_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UMsn_hud_radar04_C::OnPaint(struct FPaintContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Msn_hud_radar04_C", "OnPaint");

	Params::UMsn_hud_radar04_C_OnPaint_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}

}


