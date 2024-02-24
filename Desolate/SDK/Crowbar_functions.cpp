#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Crowbar.Crowbar_C
// (Actor)

class UClass* ACrowbar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crowbar_C");

	return Clss;
}


// Crowbar_C Crowbar.Default__Crowbar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACrowbar_C* ACrowbar_C::GetDefaultObj()
{
	static class ACrowbar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrowbar_C*>(ACrowbar_C::StaticClass()->DefaultObject);

	return Default;
}

}


