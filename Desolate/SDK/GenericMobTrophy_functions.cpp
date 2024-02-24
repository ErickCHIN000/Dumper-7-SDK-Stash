#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericMobTrophy.GenericMobTrophy_C
// (Actor)

class UClass* AGenericMobTrophy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericMobTrophy_C");

	return Clss;
}


// GenericMobTrophy_C GenericMobTrophy.Default__GenericMobTrophy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericMobTrophy_C* AGenericMobTrophy_C::GetDefaultObj()
{
	static class AGenericMobTrophy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericMobTrophy_C*>(AGenericMobTrophy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericMobTrophy.GenericMobTrophy_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericMobTrophy_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericMobTrophy_C", "OnUse");

	Params::AGenericMobTrophy_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericMobTrophy.GenericMobTrophy_C.ExecuteUbergraph_GenericMobTrophy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericMobTrophy_C::ExecuteUbergraph_GenericMobTrophy(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericMobTrophy_C", "ExecuteUbergraph_GenericMobTrophy");

	Params::AGenericMobTrophy_C_ExecuteUbergraph_GenericMobTrophy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


