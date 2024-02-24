#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiButterfly_BreederT.ParvatiButterfly_BreederT_C
// (None)

class UClass* UParvatiButterfly_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiButterfly_BreederT_C");

	return Clss;
}


// ParvatiButterfly_BreederT_C ParvatiButterfly_BreederT.Default__ParvatiButterfly_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiButterfly_BreederT_C* UParvatiButterfly_BreederT_C::GetDefaultObj()
{
	static class UParvatiButterfly_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiButterfly_BreederT_C*>(UParvatiButterfly_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


