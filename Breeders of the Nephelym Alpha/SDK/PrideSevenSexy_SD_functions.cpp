#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideSevenSexy_SD.PrideSevenSexy_SD_C
// (None)

class UClass* UPrideSevenSexy_SD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideSevenSexy_SD_C");

	return Clss;
}


// PrideSevenSexy_SD_C PrideSevenSexy_SD.Default__PrideSevenSexy_SD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideSevenSexy_SD_C* UPrideSevenSexy_SD_C::GetDefaultObj()
{
	static class UPrideSevenSexy_SD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideSevenSexy_SD_C*>(UPrideSevenSexy_SD_C::StaticClass()->DefaultObject);

	return Default;
}

}


