#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Homerun_Strong2.Homerun_Strong2_C
// (Actor)

class UClass* AHomerun_Strong2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Homerun_Strong2_C");

	return Clss;
}


// Homerun_Strong2_C Homerun_Strong2.Default__Homerun_Strong2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHomerun_Strong2_C* AHomerun_Strong2_C::GetDefaultObj()
{
	static class AHomerun_Strong2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHomerun_Strong2_C*>(AHomerun_Strong2_C::StaticClass()->DefaultObject);

	return Default;
}

}


