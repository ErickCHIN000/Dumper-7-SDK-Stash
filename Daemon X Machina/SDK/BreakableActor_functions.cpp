#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BreakableActor.BreakableActor_C
// (None)

class UClass* UBreakableActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BreakableActor_C");

	return Clss;
}


// BreakableActor_C BreakableActor.Default__BreakableActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBreakableActor_C* UBreakableActor_C::GetDefaultObj()
{
	static class UBreakableActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBreakableActor_C*>(UBreakableActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BreakableActor.BreakableActor_C.OnBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBreakableActor_C::OnBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BreakableActor_C", "OnBreak");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BreakableActor.BreakableActor_C.ExecuteUbergraph_BreakableActor
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBreakableActor_C::ExecuteUbergraph_BreakableActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BreakableActor_C", "ExecuteUbergraph_BreakableActor");

	Params::UBreakableActor_C_ExecuteUbergraph_BreakableActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BreakableActor.BreakableActor_C.BreakDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBreakableActor_C::BreakDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BreakableActor_C", "BreakDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


