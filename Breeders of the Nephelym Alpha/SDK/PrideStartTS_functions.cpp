#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideStartTS.PrideStartTS_C
// (None)

class UClass* UPrideStartTS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideStartTS_C");

	return Clss;
}


// PrideStartTS_C PrideStartTS.Default__PrideStartTS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideStartTS_C* UPrideStartTS_C::GetDefaultObj()
{
	static class UPrideStartTS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideStartTS_C*>(UPrideStartTS_C::StaticClass()->DefaultObject);

	return Default;
}

}


