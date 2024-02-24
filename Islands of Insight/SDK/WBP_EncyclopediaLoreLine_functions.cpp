#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EncyclopediaLoreLine.WBP_EncyclopediaLoreLine_C
// (None)

class UClass* UWBP_EncyclopediaLoreLine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EncyclopediaLoreLine_C");

	return Clss;
}


// WBP_EncyclopediaLoreLine_C WBP_EncyclopediaLoreLine.Default__WBP_EncyclopediaLoreLine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EncyclopediaLoreLine_C* UWBP_EncyclopediaLoreLine_C::GetDefaultObj()
{
	static class UWBP_EncyclopediaLoreLine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EncyclopediaLoreLine_C*>(UWBP_EncyclopediaLoreLine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_EncyclopediaLoreLine.WBP_EncyclopediaLoreLine_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_EncyclopediaLoreLine_C::SetText(class FText NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaLoreLine_C", "SetText");

	Params::UWBP_EncyclopediaLoreLine_C_SetText_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}

}


