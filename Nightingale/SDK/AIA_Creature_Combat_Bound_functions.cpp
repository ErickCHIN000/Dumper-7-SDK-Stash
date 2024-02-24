#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Combat_Bound.AIA_Creature_Combat_Bound_C
// (None)

class UClass* UAIA_Creature_Combat_Bound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Combat_Bound_C");

	return Clss;
}


// AIA_Creature_Combat_Bound_C AIA_Creature_Combat_Bound.Default__AIA_Creature_Combat_Bound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Combat_Bound_C* UAIA_Creature_Combat_Bound_C::GetDefaultObj()
{
	static class UAIA_Creature_Combat_Bound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Combat_Bound_C*>(UAIA_Creature_Combat_Bound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_Combat_Bound.AIA_Creature_Combat_Bound_C.Start
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_Bound_C::Start(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_Bound_C", "Start");

	Params::UAIA_Creature_Combat_Bound_C_Start_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIA_Creature_Combat_Bound.AIA_Creature_Combat_Bound_C.ExecuteUbergraph_AIA_Creature_Combat_Bound
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_Bound_C::ExecuteUbergraph_AIA_Creature_Combat_Bound(int32 EntryPoint, class AActor* K2Node_Event_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_Bound_C", "ExecuteUbergraph_AIA_Creature_Combat_Bound");

	Params::UAIA_Creature_Combat_Bound_C_ExecuteUbergraph_AIA_Creature_Combat_Bound_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Target = K2Node_Event_Target;

	UObject::ProcessEvent(Func, &Parms);

}

}


