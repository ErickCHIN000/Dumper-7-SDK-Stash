#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_KumihoDefault.CS_KumihoDefault_C
// (None)

class UClass* UCS_KumihoDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_KumihoDefault_C");

	return Clss;
}


// CS_KumihoDefault_C CS_KumihoDefault.Default__CS_KumihoDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_KumihoDefault_C* UCS_KumihoDefault_C::GetDefaultObj()
{
	static class UCS_KumihoDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_KumihoDefault_C*>(UCS_KumihoDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


