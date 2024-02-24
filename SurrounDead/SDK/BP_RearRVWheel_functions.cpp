#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearRVWheel.BP_RearRVWheel_C
// (None)

class UClass* UBP_RearRVWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearRVWheel_C");

	return Clss;
}


// BP_RearRVWheel_C BP_RearRVWheel.Default__BP_RearRVWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearRVWheel_C* UBP_RearRVWheel_C::GetDefaultObj()
{
	static class UBP_RearRVWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearRVWheel_C*>(UBP_RearRVWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


