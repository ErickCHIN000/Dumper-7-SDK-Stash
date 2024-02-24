#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RadarMainScreenBase.UMG_RadarMainScreenBase_C
// (None)

class UClass* UUMG_RadarMainScreenBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RadarMainScreenBase_C");

	return Clss;
}


// UMG_RadarMainScreenBase_C UMG_RadarMainScreenBase.Default__UMG_RadarMainScreenBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RadarMainScreenBase_C* UUMG_RadarMainScreenBase_C::GetDefaultObj()
{
	static class UUMG_RadarMainScreenBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RadarMainScreenBase_C*>(UUMG_RadarMainScreenBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RadarMainScreenBase.UMG_RadarMainScreenBase_C.FOWRevealCircle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     WorldLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RadiusInKM                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RadarMainScreenBase_C::FOWRevealCircle(const struct FVector& WorldLocation, float RadiusInKM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarMainScreenBase_C", "FOWRevealCircle");

	Params::UUMG_RadarMainScreenBase_C_FOWRevealCircle_Params Parms{};

	Parms.WorldLocation = WorldLocation;
	Parms.RadiusInKM = RadiusInKM;

	UObject::ProcessEvent(Func, &Parms);

}

}


