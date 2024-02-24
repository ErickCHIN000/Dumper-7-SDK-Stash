#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Crowbar_Ice2.Crowbar_Ice2_C
// (Actor)

class UClass* ACrowbar_Ice2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crowbar_Ice2_C");

	return Clss;
}


// Crowbar_Ice2_C Crowbar_Ice2.Default__Crowbar_Ice2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACrowbar_Ice2_C* ACrowbar_Ice2_C::GetDefaultObj()
{
	static class ACrowbar_Ice2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrowbar_Ice2_C*>(ACrowbar_Ice2_C::StaticClass()->DefaultObject);

	return Default;
}

}


