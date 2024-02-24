#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideAboutWrath.PrideAboutWrath_C
// (None)

class UClass* UPrideAboutWrath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideAboutWrath_C");

	return Clss;
}


// PrideAboutWrath_C PrideAboutWrath.Default__PrideAboutWrath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideAboutWrath_C* UPrideAboutWrath_C::GetDefaultObj()
{
	static class UPrideAboutWrath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideAboutWrath_C*>(UPrideAboutWrath_C::StaticClass()->DefaultObject);

	return Default;
}

}


