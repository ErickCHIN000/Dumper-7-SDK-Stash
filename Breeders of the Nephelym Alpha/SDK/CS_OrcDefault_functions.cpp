#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_OrcDefault.CS_OrcDefault_C
// (None)

class UClass* UCS_OrcDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_OrcDefault_C");

	return Clss;
}


// CS_OrcDefault_C CS_OrcDefault.Default__CS_OrcDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_OrcDefault_C* UCS_OrcDefault_C::GetDefaultObj()
{
	static class UCS_OrcDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_OrcDefault_C*>(UCS_OrcDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


