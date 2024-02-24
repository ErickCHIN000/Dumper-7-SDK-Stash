#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wrench_Strong1.Wrench_Strong1_C
// (Actor)

class UClass* AWrench_Strong1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wrench_Strong1_C");

	return Clss;
}


// Wrench_Strong1_C Wrench_Strong1.Default__Wrench_Strong1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWrench_Strong1_C* AWrench_Strong1_C::GetDefaultObj()
{
	static class AWrench_Strong1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWrench_Strong1_C*>(AWrench_Strong1_C::StaticClass()->DefaultObject);

	return Default;
}

}


