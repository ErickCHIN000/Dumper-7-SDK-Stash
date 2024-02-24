#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_WyvernDefault.CS_WyvernDefault_C
// (None)

class UClass* UCS_WyvernDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_WyvernDefault_C");

	return Clss;
}


// CS_WyvernDefault_C CS_WyvernDefault.Default__CS_WyvernDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_WyvernDefault_C* UCS_WyvernDefault_C::GetDefaultObj()
{
	static class UCS_WyvernDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_WyvernDefault_C*>(UCS_WyvernDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


