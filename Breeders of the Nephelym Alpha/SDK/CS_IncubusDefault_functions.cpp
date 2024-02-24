#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_IncubusDefault.CS_IncubusDefault_C
// (None)

class UClass* UCS_IncubusDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_IncubusDefault_C");

	return Clss;
}


// CS_IncubusDefault_C CS_IncubusDefault.Default__CS_IncubusDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_IncubusDefault_C* UCS_IncubusDefault_C::GetDefaultObj()
{
	static class UCS_IncubusDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_IncubusDefault_C*>(UCS_IncubusDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


