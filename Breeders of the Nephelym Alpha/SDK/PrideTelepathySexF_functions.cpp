#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideTelepathySexF.PrideTelepathySexF_C
// (None)

class UClass* UPrideTelepathySexF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideTelepathySexF_C");

	return Clss;
}


// PrideTelepathySexF_C PrideTelepathySexF.Default__PrideTelepathySexF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideTelepathySexF_C* UPrideTelepathySexF_C::GetDefaultObj()
{
	static class UPrideTelepathySexF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideTelepathySexF_C*>(UPrideTelepathySexF_C::StaticClass()->DefaultObject);

	return Default;
}

}


