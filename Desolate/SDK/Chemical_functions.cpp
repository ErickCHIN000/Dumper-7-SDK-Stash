#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chemical.Chemical_C
// (Actor)

class UClass* AChemical_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chemical_C");

	return Clss;
}


// Chemical_C Chemical.Default__Chemical_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChemical_C* AChemical_C::GetDefaultObj()
{
	static class AChemical_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChemical_C*>(AChemical_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Chemical.Chemical_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChemical_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chemical_C", "OnUse");

	Params::AChemical_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Chemical.Chemical_C.ExecuteUbergraph_Chemical
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericCharacter_C*         K2Node_DynamicCast_AsGeneric_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChemical_C::ExecuteUbergraph_Chemical(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chemical_C", "ExecuteUbergraph_Chemical");

	Params::AChemical_C_ExecuteUbergraph_Chemical_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_DynamicCast_AsGeneric_Character = K2Node_DynamicCast_AsGeneric_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


