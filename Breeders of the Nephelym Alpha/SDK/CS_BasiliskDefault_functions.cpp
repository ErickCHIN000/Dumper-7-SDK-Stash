#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_BasiliskDefault.CS_BasiliskDefault_C
// (None)

class UClass* UCS_BasiliskDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_BasiliskDefault_C");

	return Clss;
}


// CS_BasiliskDefault_C CS_BasiliskDefault.Default__CS_BasiliskDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_BasiliskDefault_C* UCS_BasiliskDefault_C::GetDefaultObj()
{
	static class UCS_BasiliskDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_BasiliskDefault_C*>(UCS_BasiliskDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


