#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDefault01.PrideDefault01_C
// (None)

class UClass* UPrideDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDefault01_C");

	return Clss;
}


// PrideDefault01_C PrideDefault01.Default__PrideDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDefault01_C* UPrideDefault01_C::GetDefaultObj()
{
	static class UPrideDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDefault01_C*>(UPrideDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


