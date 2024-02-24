#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tractor_Seq.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C Tractor_Seq.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tractor_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmbientSound*               SC_Vehicle_Truck_Engine                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class AAmbientSound* SC_Vehicle_Truck_Engine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0_Params Parms{};

	Parms.SC_Vehicle_Truck_Engine = SC_Vehicle_Truck_Engine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tractor_Seq.SequenceDirector_C.SequenceEvent_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GenericNPC_C*            Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent_0(class ABP_GenericNPC_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent_0");

	Params::USequenceDirector_C_SequenceEvent_0_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tractor_Seq.SequenceDirector_C.SC_Vehicle_Truck_Engine_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAmbientSound*               SC_Vehicle_Truck_Engine                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SC_Vehicle_Truck_Engine_Event_0(class AAmbientSound* SC_Vehicle_Truck_Engine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SC_Vehicle_Truck_Engine_Event_0");

	Params::USequenceDirector_C_SC_Vehicle_Truck_Engine_Event_0_Params Parms{};

	Parms.SC_Vehicle_Truck_Engine = SC_Vehicle_Truck_Engine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Tractor_Seq.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmbientSound*               K2Node_CustomEvent_SC_Vehicle_Truck_Engine                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class AAmbientSound* K2Node_CustomEvent_SC_Vehicle_Truck_Engine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SC_Vehicle_Truck_Engine = K2Node_CustomEvent_SC_Vehicle_Truck_Engine;

	UObject::ProcessEvent(Func, &Parms);

}

}


