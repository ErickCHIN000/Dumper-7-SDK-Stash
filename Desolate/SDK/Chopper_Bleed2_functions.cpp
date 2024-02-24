#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chopper_Bleed2.Chopper_Bleed2_C
// (Actor)

class UClass* AChopper_Bleed2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chopper_Bleed2_C");

	return Clss;
}


// Chopper_Bleed2_C Chopper_Bleed2.Default__Chopper_Bleed2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChopper_Bleed2_C* AChopper_Bleed2_C::GetDefaultObj()
{
	static class AChopper_Bleed2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChopper_Bleed2_C*>(AChopper_Bleed2_C::StaticClass()->DefaultObject);

	return Default;
}

}


