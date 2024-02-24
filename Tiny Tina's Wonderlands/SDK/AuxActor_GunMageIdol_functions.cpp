#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AuxActor_GunMageIdol.AuxActor_GunMageIdol_C
// (Actor)

class UClass* AAuxActor_GunMageIdol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AuxActor_GunMageIdol_C");

	return Clss;
}


// AuxActor_GunMageIdol_C AuxActor_GunMageIdol.Default__AuxActor_GunMageIdol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAuxActor_GunMageIdol_C* AAuxActor_GunMageIdol_C::GetDefaultObj()
{
	static class AAuxActor_GunMageIdol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAuxActor_GunMageIdol_C*>(AAuxActor_GunMageIdol_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AuxActor_GunMageIdol.AuxActor_GunMageIdol_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_GunMageIdol_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_GunMageIdol_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_GunMageIdol.AuxActor_GunMageIdol_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAuxActor_GunMageIdol_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_GunMageIdol_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_GunMageIdol.AuxActor_GunMageIdol_C.ExecuteUbergraph_AuxActor_GunMageIdol
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAuxActor_GunMageIdol_C::ExecuteUbergraph_AuxActor_GunMageIdol(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_GunMageIdol_C", "ExecuteUbergraph_AuxActor_GunMageIdol");

	Params::AAuxActor_GunMageIdol_C_ExecuteUbergraph_AuxActor_GunMageIdol_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


