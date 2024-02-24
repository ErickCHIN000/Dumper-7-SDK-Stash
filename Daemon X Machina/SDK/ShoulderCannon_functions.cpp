#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShoulderCannon.ShoulderCannon_C
// (Actor)

class UClass* AShoulderCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShoulderCannon_C");

	return Clss;
}


// ShoulderCannon_C ShoulderCannon.Default__ShoulderCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShoulderCannon_C* AShoulderCannon_C::GetDefaultObj()
{
	static class AShoulderCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShoulderCannon_C*>(AShoulderCannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


