#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_CambionDefault.CS_CambionDefault_C
// (None)

class UClass* UCS_CambionDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_CambionDefault_C");

	return Clss;
}


// CS_CambionDefault_C CS_CambionDefault.Default__CS_CambionDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_CambionDefault_C* UCS_CambionDefault_C::GetDefaultObj()
{
	static class UCS_CambionDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_CambionDefault_C*>(UCS_CambionDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


