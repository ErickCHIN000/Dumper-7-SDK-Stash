#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Homerun_Fire2.Homerun_Fire2_C
// (Actor)

class UClass* AHomerun_Fire2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Homerun_Fire2_C");

	return Clss;
}


// Homerun_Fire2_C Homerun_Fire2.Default__Homerun_Fire2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHomerun_Fire2_C* AHomerun_Fire2_C::GetDefaultObj()
{
	static class AHomerun_Fire2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHomerun_Fire2_C*>(AHomerun_Fire2_C::StaticClass()->DefaultObject);

	return Default;
}

}


