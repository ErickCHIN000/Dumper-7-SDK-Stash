#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wrench.Wrench_C
// (Actor)

class UClass* AWrench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wrench_C");

	return Clss;
}


// Wrench_C Wrench.Default__Wrench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWrench_C* AWrench_C::GetDefaultObj()
{
	static class AWrench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWrench_C*>(AWrench_C::StaticClass()->DefaultObject);

	return Default;
}

}


