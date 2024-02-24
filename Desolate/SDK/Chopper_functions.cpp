#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chopper.Chopper_C
// (Actor)

class UClass* AChopper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chopper_C");

	return Clss;
}


// Chopper_C Chopper.Default__Chopper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChopper_C* AChopper_C::GetDefaultObj()
{
	static class AChopper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChopper_C*>(AChopper_C::StaticClass()->DefaultObject);

	return Default;
}

}


