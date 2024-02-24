#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RetreatTargetInterface.BP_RetreatTargetInterface_C
// (None)

class UClass* IBP_RetreatTargetInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RetreatTargetInterface_C");

	return Clss;
}


// BP_RetreatTargetInterface_C BP_RetreatTargetInterface.Default__BP_RetreatTargetInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_RetreatTargetInterface_C* IBP_RetreatTargetInterface_C::GetDefaultObj()
{
	static class IBP_RetreatTargetInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_RetreatTargetInterface_C*>(IBP_RetreatTargetInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RetreatTargetInterface.BP_RetreatTargetInterface_C.GetRetreatExitLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     WorldLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    WorldRotation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_RetreatTargetInterface_C::GetRetreatExitLocation(struct FVector* WorldLocation, struct FRotator* WorldRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RetreatTargetInterface_C", "GetRetreatExitLocation");

	Params::IBP_RetreatTargetInterface_C_GetRetreatExitLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WorldLocation != nullptr)
		*WorldLocation = std::move(Parms.WorldLocation);

	if (WorldRotation != nullptr)
		*WorldRotation = std::move(Parms.WorldRotation);

}


// Function BP_RetreatTargetInterface.BP_RetreatTargetInterface_C.GetRetreatEntryLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     WorldLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    WorldRotation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_RetreatTargetInterface_C::GetRetreatEntryLocation(struct FVector* WorldLocation, struct FRotator* WorldRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RetreatTargetInterface_C", "GetRetreatEntryLocation");

	Params::IBP_RetreatTargetInterface_C_GetRetreatEntryLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WorldLocation != nullptr)
		*WorldLocation = std::move(Parms.WorldLocation);

	if (WorldRotation != nullptr)
		*WorldRotation = std::move(Parms.WorldRotation);

}

}


