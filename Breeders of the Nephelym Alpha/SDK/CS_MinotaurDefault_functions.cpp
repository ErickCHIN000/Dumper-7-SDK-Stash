#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_MinotaurDefault.CS_MinotaurDefault_C
// (None)

class UClass* UCS_MinotaurDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_MinotaurDefault_C");

	return Clss;
}


// CS_MinotaurDefault_C CS_MinotaurDefault.Default__CS_MinotaurDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_MinotaurDefault_C* UCS_MinotaurDefault_C::GetDefaultObj()
{
	static class UCS_MinotaurDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_MinotaurDefault_C*>(UCS_MinotaurDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


