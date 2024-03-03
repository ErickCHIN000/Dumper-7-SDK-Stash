#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NPC_Dialogue.WBP_NPC_Dialogue_C
// (None)

class UClass* UWBP_NPC_Dialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NPC_Dialogue_C");

	return Clss;
}


// WBP_NPC_Dialogue_C WBP_NPC_Dialogue.Default__WBP_NPC_Dialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NPC_Dialogue_C* UWBP_NPC_Dialogue_C::GetDefaultObj()
{
	static class UWBP_NPC_Dialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NPC_Dialogue_C*>(UWBP_NPC_Dialogue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NPC_Dialogue.WBP_NPC_Dialogue_C.fnShowHideWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_NPC_Dialogue_C::FnShowHideWidget(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Dialogue_C", "fnShowHideWidget");

	Params::UWBP_NPC_Dialogue_C_FnShowHideWidget_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Dialogue.WBP_NPC_Dialogue_C.fnSetDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Phrase                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_NPC_Dialogue_C::FnSetDialogue(class FText Phrase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Dialogue_C", "fnSetDialogue");

	Params::UWBP_NPC_Dialogue_C_FnSetDialogue_Params Parms{};

	Parms.Phrase = Phrase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Dialogue.WBP_NPC_Dialogue_C.fnSetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_NPC_Dialogue_C::FnSetName(class FText Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Dialogue_C", "fnSetName");

	Params::UWBP_NPC_Dialogue_C_FnSetName_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Dialogue.WBP_NPC_Dialogue_C.ExecuteUbergraph_WBP_NPC_Dialogue
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Dialogue_C::ExecuteUbergraph_WBP_NPC_Dialogue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Dialogue_C", "ExecuteUbergraph_WBP_NPC_Dialogue");

	Params::UWBP_NPC_Dialogue_C_ExecuteUbergraph_WBP_NPC_Dialogue_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


