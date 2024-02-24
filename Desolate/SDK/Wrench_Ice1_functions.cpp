#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wrench_Ice1.Wrench_Ice1_C
// (Actor)

class UClass* AWrench_Ice1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wrench_Ice1_C");

	return Clss;
}


// Wrench_Ice1_C Wrench_Ice1.Default__Wrench_Ice1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWrench_Ice1_C* AWrench_Ice1_C::GetDefaultObj()
{
	static class AWrench_Ice1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWrench_Ice1_C*>(AWrench_Ice1_C::StaticClass()->DefaultObject);

	return Default;
}

}


