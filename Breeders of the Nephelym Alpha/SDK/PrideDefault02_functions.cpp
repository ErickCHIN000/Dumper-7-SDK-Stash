#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDefault02.PrideDefault02_C
// (None)

class UClass* UPrideDefault02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDefault02_C");

	return Clss;
}


// PrideDefault02_C PrideDefault02.Default__PrideDefault02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDefault02_C* UPrideDefault02_C::GetDefaultObj()
{
	static class UPrideDefault02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDefault02_C*>(UPrideDefault02_C::StaticClass()->DefaultObject);

	return Default;
}

}


