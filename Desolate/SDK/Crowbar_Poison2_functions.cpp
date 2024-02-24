#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Crowbar_Poison2.Crowbar_Poison2_C
// (Actor)

class UClass* ACrowbar_Poison2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crowbar_Poison2_C");

	return Clss;
}


// Crowbar_Poison2_C Crowbar_Poison2.Default__Crowbar_Poison2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACrowbar_Poison2_C* ACrowbar_Poison2_C::GetDefaultObj()
{
	static class ACrowbar_Poison2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrowbar_Poison2_C*>(ACrowbar_Poison2_C::StaticClass()->DefaultObject);

	return Default;
}

}


