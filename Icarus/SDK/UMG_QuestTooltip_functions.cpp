#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_QuestTooltip.UMG_QuestTooltip_C
// (None)

class UClass* UUMG_QuestTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_QuestTooltip_C");

	return Clss;
}


// UMG_QuestTooltip_C UMG_QuestTooltip.Default__UMG_QuestTooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_QuestTooltip_C* UUMG_QuestTooltip_C::GetDefaultObj()
{
	static class UUMG_QuestTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_QuestTooltip_C*>(UUMG_QuestTooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_QuestTooltip.UMG_QuestTooltip_C.Get_QuestDescription
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UUMG_QuestTooltip_C::Get_QuestDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_QuestTooltip_C", "Get_QuestDescription");

	Params::UUMG_QuestTooltip_C_Get_QuestDescription_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


