#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OuterGrenadeBullet.OuterGrenadeBullet_C
// (Actor)

class UClass* AOuterGrenadeBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OuterGrenadeBullet_C");

	return Clss;
}


// OuterGrenadeBullet_C OuterGrenadeBullet.Default__OuterGrenadeBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOuterGrenadeBullet_C* AOuterGrenadeBullet_C::GetDefaultObj()
{
	static class AOuterGrenadeBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOuterGrenadeBullet_C*>(AOuterGrenadeBullet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OuterGrenadeBullet.OuterGrenadeBullet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AOuterGrenadeBullet_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterGrenadeBullet_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterGrenadeBullet.OuterGrenadeBullet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AOuterGrenadeBullet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterGrenadeBullet_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OuterGrenadeBullet.OuterGrenadeBullet_C.ExecuteUbergraph_OuterGrenadeBullet
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOuterGrenadeBullet_C::ExecuteUbergraph_OuterGrenadeBullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OuterGrenadeBullet_C", "ExecuteUbergraph_OuterGrenadeBullet");

	Params::AOuterGrenadeBullet_C_ExecuteUbergraph_OuterGrenadeBullet_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


