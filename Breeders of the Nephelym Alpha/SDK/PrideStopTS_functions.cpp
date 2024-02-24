#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideStopTS.PrideStopTS_C
// (None)

class UClass* UPrideStopTS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideStopTS_C");

	return Clss;
}


// PrideStopTS_C PrideStopTS.Default__PrideStopTS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideStopTS_C* UPrideStopTS_C::GetDefaultObj()
{
	static class UPrideStopTS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideStopTS_C*>(UPrideStopTS_C::StaticClass()->DefaultObject);

	return Default;
}

}


