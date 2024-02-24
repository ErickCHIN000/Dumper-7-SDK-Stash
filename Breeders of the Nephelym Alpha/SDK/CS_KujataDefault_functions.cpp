#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_KujataDefault.CS_KujataDefault_C
// (None)

class UClass* UCS_KujataDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_KujataDefault_C");

	return Clss;
}


// CS_KujataDefault_C CS_KujataDefault.Default__CS_KujataDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_KujataDefault_C* UCS_KujataDefault_C::GetDefaultObj()
{
	static class UCS_KujataDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_KujataDefault_C*>(UCS_KujataDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


