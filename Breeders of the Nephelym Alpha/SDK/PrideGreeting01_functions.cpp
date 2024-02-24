#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideGreeting01.PrideGreeting01_C
// (None)

class UClass* UPrideGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideGreeting01_C");

	return Clss;
}


// PrideGreeting01_C PrideGreeting01.Default__PrideGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideGreeting01_C* UPrideGreeting01_C::GetDefaultObj()
{
	static class UPrideGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideGreeting01_C*>(UPrideGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


