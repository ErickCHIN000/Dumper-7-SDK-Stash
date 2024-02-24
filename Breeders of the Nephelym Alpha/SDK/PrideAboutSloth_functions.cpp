#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideAboutSloth.PrideAboutSloth_C
// (None)

class UClass* UPrideAboutSloth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideAboutSloth_C");

	return Clss;
}


// PrideAboutSloth_C PrideAboutSloth.Default__PrideAboutSloth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideAboutSloth_C* UPrideAboutSloth_C::GetDefaultObj()
{
	static class UPrideAboutSloth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideAboutSloth_C*>(UPrideAboutSloth_C::StaticClass()->DefaultObject);

	return Default;
}

}


