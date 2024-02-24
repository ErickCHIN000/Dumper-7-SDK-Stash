#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideAboutGluttony.PrideAboutGluttony_C
// (None)

class UClass* UPrideAboutGluttony_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideAboutGluttony_C");

	return Clss;
}


// PrideAboutGluttony_C PrideAboutGluttony.Default__PrideAboutGluttony_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideAboutGluttony_C* UPrideAboutGluttony_C::GetDefaultObj()
{
	static class UPrideAboutGluttony_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideAboutGluttony_C*>(UPrideAboutGluttony_C::StaticClass()->DefaultObject);

	return Default;
}

}


