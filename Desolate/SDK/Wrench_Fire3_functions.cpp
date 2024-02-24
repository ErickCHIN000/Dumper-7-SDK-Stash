#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wrench_Fire3.Wrench_Fire3_C
// (Actor)

class UClass* AWrench_Fire3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wrench_Fire3_C");

	return Clss;
}


// Wrench_Fire3_C Wrench_Fire3.Default__Wrench_Fire3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWrench_Fire3_C* AWrench_Fire3_C::GetDefaultObj()
{
	static class AWrench_Fire3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWrench_Fire3_C*>(AWrench_Fire3_C::StaticClass()->DefaultObject);

	return Default;
}

}


