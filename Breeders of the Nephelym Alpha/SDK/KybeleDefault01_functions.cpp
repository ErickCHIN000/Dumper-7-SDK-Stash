#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleDefault01.KybeleDefault01_C
// (None)

class UClass* UKybeleDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleDefault01_C");

	return Clss;
}


// KybeleDefault01_C KybeleDefault01.Default__KybeleDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleDefault01_C* UKybeleDefault01_C::GetDefaultObj()
{
	static class UKybeleDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleDefault01_C*>(UKybeleDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


