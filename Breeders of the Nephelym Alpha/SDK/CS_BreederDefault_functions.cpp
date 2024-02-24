#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_BreederDefault.CS_BreederDefault_C
// (None)

class UClass* UCS_BreederDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_BreederDefault_C");

	return Clss;
}


// CS_BreederDefault_C CS_BreederDefault.Default__CS_BreederDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_BreederDefault_C* UCS_BreederDefault_C::GetDefaultObj()
{
	static class UCS_BreederDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_BreederDefault_C*>(UCS_BreederDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


