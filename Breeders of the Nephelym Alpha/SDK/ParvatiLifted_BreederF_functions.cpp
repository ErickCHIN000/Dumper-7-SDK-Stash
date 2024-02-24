#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiLifted_BreederF.ParvatiLifted_BreederF_C
// (None)

class UClass* UParvatiLifted_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiLifted_BreederF_C");

	return Clss;
}


// ParvatiLifted_BreederF_C ParvatiLifted_BreederF.Default__ParvatiLifted_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiLifted_BreederF_C* UParvatiLifted_BreederF_C::GetDefaultObj()
{
	static class UParvatiLifted_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiLifted_BreederF_C*>(UParvatiLifted_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


