#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_SurabhiDefault_Exotic.CS_SurabhiDefault_Exotic_C
// (None)

class UClass* UCS_SurabhiDefault_Exotic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_SurabhiDefault_Exotic_C");

	return Clss;
}


// CS_SurabhiDefault_Exotic_C CS_SurabhiDefault_Exotic.Default__CS_SurabhiDefault_Exotic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_SurabhiDefault_Exotic_C* UCS_SurabhiDefault_Exotic_C::GetDefaultObj()
{
	static class UCS_SurabhiDefault_Exotic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_SurabhiDefault_Exotic_C*>(UCS_SurabhiDefault_Exotic_C::StaticClass()->DefaultObject);

	return Default;
}

}


