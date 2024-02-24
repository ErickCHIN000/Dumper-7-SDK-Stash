#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMClimaxPeak.DMClimaxPeak_C
// (None)

class UClass* UDMClimaxPeak_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMClimaxPeak_C");

	return Clss;
}


// DMClimaxPeak_C DMClimaxPeak.Default__DMClimaxPeak_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMClimaxPeak_C* UDMClimaxPeak_C::GetDefaultObj()
{
	static class UDMClimaxPeak_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMClimaxPeak_C*>(UDMClimaxPeak_C::StaticClass()->DefaultObject);

	return Default;
}

}


