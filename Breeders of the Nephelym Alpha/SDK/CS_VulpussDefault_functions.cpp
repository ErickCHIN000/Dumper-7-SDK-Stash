#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_VulpussDefault.CS_VulpussDefault_C
// (None)

class UClass* UCS_VulpussDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_VulpussDefault_C");

	return Clss;
}


// CS_VulpussDefault_C CS_VulpussDefault.Default__CS_VulpussDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_VulpussDefault_C* UCS_VulpussDefault_C::GetDefaultObj()
{
	static class UCS_VulpussDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_VulpussDefault_C*>(UCS_VulpussDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


