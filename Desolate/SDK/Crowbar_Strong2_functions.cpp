#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Crowbar_Strong2.Crowbar_Strong2_C
// (Actor)

class UClass* ACrowbar_Strong2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crowbar_Strong2_C");

	return Clss;
}


// Crowbar_Strong2_C Crowbar_Strong2.Default__Crowbar_Strong2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACrowbar_Strong2_C* ACrowbar_Strong2_C::GetDefaultObj()
{
	static class ACrowbar_Strong2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrowbar_Strong2_C*>(ACrowbar_Strong2_C::StaticClass()->DefaultObject);

	return Default;
}

}


