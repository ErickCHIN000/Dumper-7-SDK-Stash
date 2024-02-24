#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_WyvernDefault_Exotic.CS_WyvernDefault_Exotic_C
// (None)

class UClass* UCS_WyvernDefault_Exotic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_WyvernDefault_Exotic_C");

	return Clss;
}


// CS_WyvernDefault_Exotic_C CS_WyvernDefault_Exotic.Default__CS_WyvernDefault_Exotic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_WyvernDefault_Exotic_C* UCS_WyvernDefault_Exotic_C::GetDefaultObj()
{
	static class UCS_WyvernDefault_Exotic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_WyvernDefault_Exotic_C*>(UCS_WyvernDefault_Exotic_C::StaticClass()->DefaultObject);

	return Default;
}

}


