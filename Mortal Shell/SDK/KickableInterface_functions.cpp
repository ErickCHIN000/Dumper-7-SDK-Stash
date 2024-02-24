#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KickableInterface.KickableInterface_C
// (None)

class UClass* IKickableInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KickableInterface_C");

	return Clss;
}


// KickableInterface_C KickableInterface.Default__KickableInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IKickableInterface_C* IKickableInterface_C::GetDefaultObj()
{
	static class IKickableInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IKickableInterface_C*>(IKickableInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KickableInterface.KickableInterface_C.GetKicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Kicker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     KickerLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Impulse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IKickableInterface_C::GetKicked(class AActor* Kicker, const struct FVector& KickerLocation, const struct FVector& ImpactLocation, const struct FVector& Impulse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KickableInterface_C", "GetKicked");

	Params::IKickableInterface_C_GetKicked_Params Parms{};

	Parms.Kicker = Kicker;
	Parms.KickerLocation = KickerLocation;
	Parms.ImpactLocation = ImpactLocation;
	Parms.Impulse = Impulse;

	UObject::ProcessEvent(Func, &Parms);

}

}


