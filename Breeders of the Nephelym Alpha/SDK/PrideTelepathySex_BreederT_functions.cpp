#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideTelepathySex_BreederT.PrideTelepathySex_BreederT_C
// (None)

class UClass* UPrideTelepathySex_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideTelepathySex_BreederT_C");

	return Clss;
}


// PrideTelepathySex_BreederT_C PrideTelepathySex_BreederT.Default__PrideTelepathySex_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideTelepathySex_BreederT_C* UPrideTelepathySex_BreederT_C::GetDefaultObj()
{
	static class UPrideTelepathySex_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideTelepathySex_BreederT_C*>(UPrideTelepathySex_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


