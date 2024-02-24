#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Homerun.Homerun_C
// (Actor)

class UClass* AHomerun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Homerun_C");

	return Clss;
}


// Homerun_C Homerun.Default__Homerun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHomerun_C* AHomerun_C::GetDefaultObj()
{
	static class AHomerun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHomerun_C*>(AHomerun_C::StaticClass()->DefaultObject);

	return Default;
}

}


