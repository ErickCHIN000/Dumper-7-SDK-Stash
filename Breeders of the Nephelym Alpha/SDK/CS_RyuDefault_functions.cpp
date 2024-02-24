#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_RyuDefault.CS_RyuDefault_C
// (None)

class UClass* UCS_RyuDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_RyuDefault_C");

	return Clss;
}


// CS_RyuDefault_C CS_RyuDefault.Default__CS_RyuDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_RyuDefault_C* UCS_RyuDefault_C::GetDefaultObj()
{
	static class UCS_RyuDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_RyuDefault_C*>(UCS_RyuDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


