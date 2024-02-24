#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wrench_Fire1.Wrench_Fire1_C
// (Actor)

class UClass* AWrench_Fire1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wrench_Fire1_C");

	return Clss;
}


// Wrench_Fire1_C Wrench_Fire1.Default__Wrench_Fire1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWrench_Fire1_C* AWrench_Fire1_C::GetDefaultObj()
{
	static class AWrench_Fire1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWrench_Fire1_C*>(AWrench_Fire1_C::StaticClass()->DefaultObject);

	return Default;
}

}


