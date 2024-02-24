#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_HellhoundDefault.CS_HellhoundDefault_C
// (None)

class UClass* UCS_HellhoundDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_HellhoundDefault_C");

	return Clss;
}


// CS_HellhoundDefault_C CS_HellhoundDefault.Default__CS_HellhoundDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_HellhoundDefault_C* UCS_HellhoundDefault_C::GetDefaultObj()
{
	static class UCS_HellhoundDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_HellhoundDefault_C*>(UCS_HellhoundDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


