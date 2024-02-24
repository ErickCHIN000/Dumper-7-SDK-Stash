#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideAboutPride.PrideAboutPride_C
// (None)

class UClass* UPrideAboutPride_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideAboutPride_C");

	return Clss;
}


// PrideAboutPride_C PrideAboutPride.Default__PrideAboutPride_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideAboutPride_C* UPrideAboutPride_C::GetDefaultObj()
{
	static class UPrideAboutPride_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideAboutPride_C*>(UPrideAboutPride_C::StaticClass()->DefaultObject);

	return Default;
}

}


