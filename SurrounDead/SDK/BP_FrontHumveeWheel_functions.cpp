#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontHumveeWheel.BP_FrontHumveeWheel_C
// (None)

class UClass* UBP_FrontHumveeWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontHumveeWheel_C");

	return Clss;
}


// BP_FrontHumveeWheel_C BP_FrontHumveeWheel.Default__BP_FrontHumveeWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontHumveeWheel_C* UBP_FrontHumveeWheel_C::GetDefaultObj()
{
	static class UBP_FrontHumveeWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontHumveeWheel_C*>(UBP_FrontHumveeWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


