#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideHaveReturned.PrideHaveReturned_C
// (None)

class UClass* UPrideHaveReturned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideHaveReturned_C");

	return Clss;
}


// PrideHaveReturned_C PrideHaveReturned.Default__PrideHaveReturned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideHaveReturned_C* UPrideHaveReturned_C::GetDefaultObj()
{
	static class UPrideHaveReturned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideHaveReturned_C*>(UPrideHaveReturned_C::StaticClass()->DefaultObject);

	return Default;
}

}


