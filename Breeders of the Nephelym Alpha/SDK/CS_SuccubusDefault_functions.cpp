#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_SuccubusDefault.CS_SuccubusDefault_C
// (None)

class UClass* UCS_SuccubusDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_SuccubusDefault_C");

	return Clss;
}


// CS_SuccubusDefault_C CS_SuccubusDefault.Default__CS_SuccubusDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_SuccubusDefault_C* UCS_SuccubusDefault_C::GetDefaultObj()
{
	static class UCS_SuccubusDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_SuccubusDefault_C*>(UCS_SuccubusDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


