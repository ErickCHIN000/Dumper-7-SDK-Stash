#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_VulpussDefault_Exotic.CS_VulpussDefault_Exotic_C
// (None)

class UClass* UCS_VulpussDefault_Exotic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_VulpussDefault_Exotic_C");

	return Clss;
}


// CS_VulpussDefault_Exotic_C CS_VulpussDefault_Exotic.Default__CS_VulpussDefault_Exotic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_VulpussDefault_Exotic_C* UCS_VulpussDefault_Exotic_C::GetDefaultObj()
{
	static class UCS_VulpussDefault_Exotic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_VulpussDefault_Exotic_C*>(UCS_VulpussDefault_Exotic_C::StaticClass()->DefaultObject);

	return Default;
}

}


