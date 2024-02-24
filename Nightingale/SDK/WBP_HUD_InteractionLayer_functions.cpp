#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_InteractionLayer.WBP_HUD_InteractionLayer_C
// (None)

class UClass* UWBP_HUD_InteractionLayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_InteractionLayer_C");

	return Clss;
}


// WBP_HUD_InteractionLayer_C WBP_HUD_InteractionLayer.Default__WBP_HUD_InteractionLayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_InteractionLayer_C* UWBP_HUD_InteractionLayer_C::GetDefaultObj()
{
	static class UWBP_HUD_InteractionLayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_InteractionLayer_C*>(UWBP_HUD_InteractionLayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_InteractionLayer.WBP_HUD_InteractionLayer_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionUIContext       UI_Context                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_HUD_InteractionLayer_C::UpdateState(const struct FInteractionUIContext& UI_Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_InteractionLayer_C", "UpdateState");

	Params::UWBP_HUD_InteractionLayer_C_UpdateState_Params Parms{};

	Parms.UI_Context = UI_Context;

	UObject::ProcessEvent(Func, &Parms);

}

}


