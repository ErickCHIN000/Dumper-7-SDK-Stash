#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideMyBody.PrideMyBody_C
// (None)

class UClass* UPrideMyBody_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideMyBody_C");

	return Clss;
}


// PrideMyBody_C PrideMyBody.Default__PrideMyBody_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideMyBody_C* UPrideMyBody_C::GetDefaultObj()
{
	static class UPrideMyBody_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideMyBody_C*>(UPrideMyBody_C::StaticClass()->DefaultObject);

	return Default;
}

}


