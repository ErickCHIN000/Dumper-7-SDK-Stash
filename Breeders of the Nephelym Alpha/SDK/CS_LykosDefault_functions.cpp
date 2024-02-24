#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_LykosDefault.CS_LykosDefault_C
// (None)

class UClass* UCS_LykosDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_LykosDefault_C");

	return Clss;
}


// CS_LykosDefault_C CS_LykosDefault.Default__CS_LykosDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_LykosDefault_C* UCS_LykosDefault_C::GetDefaultObj()
{
	static class UCS_LykosDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_LykosDefault_C*>(UCS_LykosDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


