#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wrench_Bleed1.Wrench_Bleed1_C
// (Actor)

class UClass* AWrench_Bleed1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wrench_Bleed1_C");

	return Clss;
}


// Wrench_Bleed1_C Wrench_Bleed1.Default__Wrench_Bleed1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWrench_Bleed1_C* AWrench_Bleed1_C::GetDefaultObj()
{
	static class AWrench_Bleed1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWrench_Bleed1_C*>(AWrench_Bleed1_C::StaticClass()->DefaultObject);

	return Default;
}

}


