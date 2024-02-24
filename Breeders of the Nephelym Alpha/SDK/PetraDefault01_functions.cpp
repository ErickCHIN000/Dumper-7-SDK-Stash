#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PetraDefault01.PetraDefault01_C
// (None)

class UClass* UPetraDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetraDefault01_C");

	return Clss;
}


// PetraDefault01_C PetraDefault01.Default__PetraDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPetraDefault01_C* UPetraDefault01_C::GetDefaultObj()
{
	static class UPetraDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPetraDefault01_C*>(UPetraDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


