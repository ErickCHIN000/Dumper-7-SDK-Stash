#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_TabbyDefault.CS_TabbyDefault_C
// (None)

class UClass* UCS_TabbyDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_TabbyDefault_C");

	return Clss;
}


// CS_TabbyDefault_C CS_TabbyDefault.Default__CS_TabbyDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_TabbyDefault_C* UCS_TabbyDefault_C::GetDefaultObj()
{
	static class UCS_TabbyDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_TabbyDefault_C*>(UCS_TabbyDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


