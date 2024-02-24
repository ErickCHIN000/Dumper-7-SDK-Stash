#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wrench_Poison1.Wrench_Poison1_C
// (Actor)

class UClass* AWrench_Poison1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wrench_Poison1_C");

	return Clss;
}


// Wrench_Poison1_C Wrench_Poison1.Default__Wrench_Poison1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWrench_Poison1_C* AWrench_Poison1_C::GetDefaultObj()
{
	static class AWrench_Poison1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWrench_Poison1_C*>(AWrench_Poison1_C::StaticClass()->DefaultObject);

	return Default;
}

}


