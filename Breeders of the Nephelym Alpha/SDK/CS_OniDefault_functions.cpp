#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_OniDefault.CS_OniDefault_C
// (None)

class UClass* UCS_OniDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_OniDefault_C");

	return Clss;
}


// CS_OniDefault_C CS_OniDefault.Default__CS_OniDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_OniDefault_C* UCS_OniDefault_C::GetDefaultObj()
{
	static class UCS_OniDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_OniDefault_C*>(UCS_OniDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


