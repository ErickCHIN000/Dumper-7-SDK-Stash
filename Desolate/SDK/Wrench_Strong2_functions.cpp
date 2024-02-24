#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wrench_Strong2.Wrench_Strong2_C
// (Actor)

class UClass* AWrench_Strong2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wrench_Strong2_C");

	return Clss;
}


// Wrench_Strong2_C Wrench_Strong2.Default__Wrench_Strong2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWrench_Strong2_C* AWrench_Strong2_C::GetDefaultObj()
{
	static class AWrench_Strong2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWrench_Strong2_C*>(AWrench_Strong2_C::StaticClass()->DefaultObject);

	return Default;
}

}


