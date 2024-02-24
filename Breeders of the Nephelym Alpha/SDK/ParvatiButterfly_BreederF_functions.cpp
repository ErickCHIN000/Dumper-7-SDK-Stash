#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiButterfly_BreederF.ParvatiButterfly_BreederF_C
// (None)

class UClass* UParvatiButterfly_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiButterfly_BreederF_C");

	return Clss;
}


// ParvatiButterfly_BreederF_C ParvatiButterfly_BreederF.Default__ParvatiButterfly_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiButterfly_BreederF_C* UParvatiButterfly_BreederF_C::GetDefaultObj()
{
	static class UParvatiButterfly_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiButterfly_BreederF_C*>(UParvatiButterfly_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


