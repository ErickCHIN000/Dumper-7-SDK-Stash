#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HelpMenuTutorial.HelpMenuTutorial_C
// (Actor)

class UClass* AHelpMenuTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HelpMenuTutorial_C");

	return Clss;
}


// HelpMenuTutorial_C HelpMenuTutorial.Default__HelpMenuTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHelpMenuTutorial_C* AHelpMenuTutorial_C::GetDefaultObj()
{
	static class AHelpMenuTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHelpMenuTutorial_C*>(AHelpMenuTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HelpMenuTutorial.HelpMenuTutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHelpMenuTutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HelpMenuTutorial_C", "OnTutorialActivated");

	Params::AHelpMenuTutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpMenuTutorial.HelpMenuTutorial_C.ExecuteUbergraph_HelpMenuTutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGInventory*                CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHelpMenuTutorial_C::ExecuteUbergraph_HelpMenuTutorial(int32 EntryPoint, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, class UGGInventory* CallFunc_GetPlayerInventory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HelpMenuTutorial_C", "ExecuteUbergraph_HelpMenuTutorial");

	Params::AHelpMenuTutorial_C_ExecuteUbergraph_HelpMenuTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


