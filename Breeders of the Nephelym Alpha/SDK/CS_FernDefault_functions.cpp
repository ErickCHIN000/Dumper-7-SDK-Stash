#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_FernDefault.CS_FernDefault_C
// (None)

class UClass* UCS_FernDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_FernDefault_C");

	return Clss;
}


// CS_FernDefault_C CS_FernDefault.Default__CS_FernDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_FernDefault_C* UCS_FernDefault_C::GetDefaultObj()
{
	static class UCS_FernDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_FernDefault_C*>(UCS_FernDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


