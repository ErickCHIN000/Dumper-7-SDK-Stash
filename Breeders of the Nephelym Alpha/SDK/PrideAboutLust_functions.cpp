#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideAboutLust.PrideAboutLust_C
// (None)

class UClass* UPrideAboutLust_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideAboutLust_C");

	return Clss;
}


// PrideAboutLust_C PrideAboutLust.Default__PrideAboutLust_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideAboutLust_C* UPrideAboutLust_C::GetDefaultObj()
{
	static class UPrideAboutLust_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideAboutLust_C*>(UPrideAboutLust_C::StaticClass()->DefaultObject);

	return Default;
}

}


