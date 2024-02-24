#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Crowbar_Bleed3.Crowbar_Bleed3_C
// (Actor)

class UClass* ACrowbar_Bleed3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crowbar_Bleed3_C");

	return Clss;
}


// Crowbar_Bleed3_C Crowbar_Bleed3.Default__Crowbar_Bleed3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACrowbar_Bleed3_C* ACrowbar_Bleed3_C::GetDefaultObj()
{
	static class ACrowbar_Bleed3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrowbar_Bleed3_C*>(ACrowbar_Bleed3_C::StaticClass()->DefaultObject);

	return Default;
}

}


