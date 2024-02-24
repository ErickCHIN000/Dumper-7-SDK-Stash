#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Harpy.Harpy_C
// (None)

class UClass* UHarpy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Harpy_C");

	return Clss;
}


// Harpy_C Harpy.Default__Harpy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHarpy_C* UHarpy_C::GetDefaultObj()
{
	static class UHarpy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHarpy_C*>(UHarpy_C::StaticClass()->DefaultObject);

	return Default;
}

}


