#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AuxActor_LivingBlade.AuxActor_LivingBlade_C
// (Actor)

class UClass* AAuxActor_LivingBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AuxActor_LivingBlade_C");

	return Clss;
}


// AuxActor_LivingBlade_C AuxActor_LivingBlade.Default__AuxActor_LivingBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAuxActor_LivingBlade_C* AAuxActor_LivingBlade_C::GetDefaultObj()
{
	static class AAuxActor_LivingBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAuxActor_LivingBlade_C*>(AAuxActor_LivingBlade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AuxActor_LivingBlade.AuxActor_LivingBlade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_LivingBlade_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_LivingBlade_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_LivingBlade.AuxActor_LivingBlade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAuxActor_LivingBlade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_LivingBlade_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_LivingBlade.AuxActor_LivingBlade_C.DeactivateBladeEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_LivingBlade_C::DeactivateBladeEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_LivingBlade_C", "DeactivateBladeEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_LivingBlade.AuxActor_LivingBlade_C.ExecuteUbergraph_AuxActor_LivingBlade
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAuxActor_LivingBlade_C::ExecuteUbergraph_AuxActor_LivingBlade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_LivingBlade_C", "ExecuteUbergraph_AuxActor_LivingBlade");

	Params::AAuxActor_LivingBlade_C_ExecuteUbergraph_AuxActor_LivingBlade_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


