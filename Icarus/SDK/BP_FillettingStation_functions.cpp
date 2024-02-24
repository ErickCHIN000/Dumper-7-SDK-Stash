#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FillettingStation.BP_FillettingStation_C
// (Actor)

class UClass* ABP_FillettingStation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FillettingStation_C");

	return Clss;
}


// BP_FillettingStation_C BP_FillettingStation.Default__BP_FillettingStation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FillettingStation_C* ABP_FillettingStation_C::GetDefaultObj()
{
	static class ABP_FillettingStation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FillettingStation_C*>(ABP_FillettingStation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FillettingStation.BP_FillettingStation_C.GenericAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FillettingStation_C::GenericAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FillettingStation_C", "GenericAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FillettingStation.BP_FillettingStation_C.GenericActionWithCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FillettingStation_C::GenericActionWithCharacter(class AIcarusPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FillettingStation_C", "GenericActionWithCharacter");

	Params::ABP_FillettingStation_C_GenericActionWithCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FillettingStation.BP_FillettingStation_C.ExecuteUbergraph_BP_FillettingStation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FillettingStation_C::ExecuteUbergraph_BP_FillettingStation(int32 EntryPoint, class AIcarusPlayerCharacter* K2Node_Event_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FillettingStation_C", "ExecuteUbergraph_BP_FillettingStation");

	Params::ABP_FillettingStation_C_ExecuteUbergraph_BP_FillettingStation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


