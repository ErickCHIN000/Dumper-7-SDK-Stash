#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideAboutEnvy.PrideAboutEnvy_C
// (None)

class UClass* UPrideAboutEnvy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideAboutEnvy_C");

	return Clss;
}


// PrideAboutEnvy_C PrideAboutEnvy.Default__PrideAboutEnvy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideAboutEnvy_C* UPrideAboutEnvy_C::GetDefaultObj()
{
	static class UPrideAboutEnvy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideAboutEnvy_C*>(UPrideAboutEnvy_C::StaticClass()->DefaultObject);

	return Default;
}

}


