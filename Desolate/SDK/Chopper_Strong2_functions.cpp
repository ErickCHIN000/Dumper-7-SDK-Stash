#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chopper_Strong2.Chopper_Strong2_C
// (Actor)

class UClass* AChopper_Strong2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chopper_Strong2_C");

	return Clss;
}


// Chopper_Strong2_C Chopper_Strong2.Default__Chopper_Strong2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChopper_Strong2_C* AChopper_Strong2_C::GetDefaultObj()
{
	static class AChopper_Strong2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChopper_Strong2_C*>(AChopper_Strong2_C::StaticClass()->DefaultObject);

	return Default;
}

}


