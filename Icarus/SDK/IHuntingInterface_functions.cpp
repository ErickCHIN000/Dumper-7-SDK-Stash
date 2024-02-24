#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IHuntingInterface.IHuntingInterface_C
// (None)

class UClass* IIHuntingInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IHuntingInterface_C");

	return Clss;
}


// IHuntingInterface_C IHuntingInterface.Default__IHuntingInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIHuntingInterface_C* IIHuntingInterface_C::GetDefaultObj()
{
	static class IIHuntingInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIHuntingInterface_C*>(IIHuntingInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IHuntingInterface.IHuntingInterface_C.GetHuntingWidgetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIHuntingInterface_C::GetHuntingWidgetLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IHuntingInterface_C", "GetHuntingWidgetLocation");

	Params::IIHuntingInterface_C_GetHuntingWidgetLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function IHuntingInterface.IHuntingInterface_C.GatherSplineLocations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVector>             Locations                                                        (Parm, OutParm)

void IIHuntingInterface_C::GatherSplineLocations(bool* Return, TArray<struct FVector>* Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IHuntingInterface_C", "GatherSplineLocations");

	Params::IIHuntingInterface_C_GatherSplineLocations_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (Locations != nullptr)
		*Locations = std::move(Parms.Locations);

}


// Function IHuntingInterface.IHuntingInterface_C.SendSplineLocations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             Locations                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IIHuntingInterface_C::SendSplineLocations(TArray<struct FVector>& Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IHuntingInterface_C", "SendSplineLocations");

	Params::IIHuntingInterface_C_SendSplineLocations_Params Parms{};

	Parms.Locations = Locations;

	UObject::ProcessEvent(Func, &Parms);

}

}


