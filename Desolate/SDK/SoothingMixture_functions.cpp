#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SoothingMixture.SoothingMixture_C
// (Actor)

class UClass* ASoothingMixture_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoothingMixture_C");

	return Clss;
}


// SoothingMixture_C SoothingMixture.Default__SoothingMixture_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASoothingMixture_C* ASoothingMixture_C::GetDefaultObj()
{
	static class ASoothingMixture_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASoothingMixture_C*>(ASoothingMixture_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SoothingMixture.SoothingMixture_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoothingMixture_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoothingMixture_C", "OnUse");

	Params::ASoothingMixture_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SoothingMixture.SoothingMixture_C.ExecuteUbergraph_SoothingMixture
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoothingMixture_C::ExecuteUbergraph_SoothingMixture(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoothingMixture_C", "ExecuteUbergraph_SoothingMixture");

	Params::ASoothingMixture_C_ExecuteUbergraph_SoothingMixture_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


