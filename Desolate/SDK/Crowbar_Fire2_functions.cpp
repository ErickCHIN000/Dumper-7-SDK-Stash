#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Crowbar_Fire2.Crowbar_Fire2_C
// (Actor)

class UClass* ACrowbar_Fire2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crowbar_Fire2_C");

	return Clss;
}


// Crowbar_Fire2_C Crowbar_Fire2.Default__Crowbar_Fire2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACrowbar_Fire2_C* ACrowbar_Fire2_C::GetDefaultObj()
{
	static class ACrowbar_Fire2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrowbar_Fire2_C*>(ACrowbar_Fire2_C::StaticClass()->DefaultObject);

	return Default;
}

}


