#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_MeteorImpact.CS_MeteorImpact_C
// (None)

class UClass* UCS_MeteorImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_MeteorImpact_C");

	return Clss;
}


// CS_MeteorImpact_C CS_MeteorImpact.Default__CS_MeteorImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_MeteorImpact_C* UCS_MeteorImpact_C::GetDefaultObj()
{
	static class UCS_MeteorImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_MeteorImpact_C*>(UCS_MeteorImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


