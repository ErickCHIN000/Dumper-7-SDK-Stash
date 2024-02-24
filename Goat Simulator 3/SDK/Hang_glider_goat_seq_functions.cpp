#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hang_glider_goat_seq.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C Hang_glider_goat_seq.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Hang_glider_goat_seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class UAudioComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Hang_glider_goat_seq.SequenceDirector_C.SequenceEvent_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::SequenceEvent_0(class UAudioComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent_0");

	Params::USequenceDirector_C_SequenceEvent_0_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}

}


