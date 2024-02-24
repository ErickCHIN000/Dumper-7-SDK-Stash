#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_KujataDefault_Exotic.CS_KujataDefault_Exotic_C
// (None)

class UClass* UCS_KujataDefault_Exotic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_KujataDefault_Exotic_C");

	return Clss;
}


// CS_KujataDefault_Exotic_C CS_KujataDefault_Exotic.Default__CS_KujataDefault_Exotic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_KujataDefault_Exotic_C* UCS_KujataDefault_Exotic_C::GetDefaultObj()
{
	static class UCS_KujataDefault_Exotic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_KujataDefault_Exotic_C*>(UCS_KujataDefault_Exotic_C::StaticClass()->DefaultObject);

	return Default;
}

}


