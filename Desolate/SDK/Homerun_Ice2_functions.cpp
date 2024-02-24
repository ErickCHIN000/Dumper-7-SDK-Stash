#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Homerun_Ice2.Homerun_Ice2_C
// (Actor)

class UClass* AHomerun_Ice2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Homerun_Ice2_C");

	return Clss;
}


// Homerun_Ice2_C Homerun_Ice2.Default__Homerun_Ice2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHomerun_Ice2_C* AHomerun_Ice2_C::GetDefaultObj()
{
	static class AHomerun_Ice2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHomerun_Ice2_C*>(AHomerun_Ice2_C::StaticClass()->DefaultObject);

	return Default;
}

}


