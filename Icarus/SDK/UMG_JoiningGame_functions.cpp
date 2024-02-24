#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_JoiningGame.UMG_JoiningGame_C
// (None)

class UClass* UUMG_JoiningGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_JoiningGame_C");

	return Clss;
}


// UMG_JoiningGame_C UMG_JoiningGame.Default__UMG_JoiningGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_JoiningGame_C* UUMG_JoiningGame_C::GetDefaultObj()
{
	static class UUMG_JoiningGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_JoiningGame_C*>(UUMG_JoiningGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_JoiningGame.UMG_JoiningGame_C.SetDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_JoiningGame_C::SetDescription(class FText Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_JoiningGame_C", "SetDescription");

	Params::UUMG_JoiningGame_C_SetDescription_Params Parms{};

	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_JoiningGame.UMG_JoiningGame_C.ExecuteUbergraph_UMG_JoiningGame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Description                                   (None)

void UUMG_JoiningGame_C::ExecuteUbergraph_UMG_JoiningGame(int32 EntryPoint, class FText K2Node_CustomEvent_Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_JoiningGame_C", "ExecuteUbergraph_UMG_JoiningGame");

	Params::UUMG_JoiningGame_C_ExecuteUbergraph_UMG_JoiningGame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Description = K2Node_CustomEvent_Description;

	UObject::ProcessEvent(Func, &Parms);

}

}


