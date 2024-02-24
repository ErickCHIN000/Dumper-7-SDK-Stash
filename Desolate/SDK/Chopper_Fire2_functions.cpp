#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chopper_Fire2.Chopper_Fire2_C
// (Actor)

class UClass* AChopper_Fire2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chopper_Fire2_C");

	return Clss;
}


// Chopper_Fire2_C Chopper_Fire2.Default__Chopper_Fire2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChopper_Fire2_C* AChopper_Fire2_C::GetDefaultObj()
{
	static class AChopper_Fire2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChopper_Fire2_C*>(AChopper_Fire2_C::StaticClass()->DefaultObject);

	return Default;
}

}


