#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearHumveeWheel.BP_RearHumveeWheel_C
// (None)

class UClass* UBP_RearHumveeWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearHumveeWheel_C");

	return Clss;
}


// BP_RearHumveeWheel_C BP_RearHumveeWheel.Default__BP_RearHumveeWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearHumveeWheel_C* UBP_RearHumveeWheel_C::GetDefaultObj()
{
	static class UBP_RearHumveeWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearHumveeWheel_C*>(UBP_RearHumveeWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


