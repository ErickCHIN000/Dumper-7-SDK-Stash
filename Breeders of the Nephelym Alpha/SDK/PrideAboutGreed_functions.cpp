#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideAboutGreed.PrideAboutGreed_C
// (None)

class UClass* UPrideAboutGreed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideAboutGreed_C");

	return Clss;
}


// PrideAboutGreed_C PrideAboutGreed.Default__PrideAboutGreed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideAboutGreed_C* UPrideAboutGreed_C::GetDefaultObj()
{
	static class UPrideAboutGreed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideAboutGreed_C*>(UPrideAboutGreed_C::StaticClass()->DefaultObject);

	return Default;
}

}


