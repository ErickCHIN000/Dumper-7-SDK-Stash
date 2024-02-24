#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiMissionary_BreederF.ParvatiMissionary_BreederF_C
// (None)

class UClass* UParvatiMissionary_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiMissionary_BreederF_C");

	return Clss;
}


// ParvatiMissionary_BreederF_C ParvatiMissionary_BreederF.Default__ParvatiMissionary_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiMissionary_BreederF_C* UParvatiMissionary_BreederF_C::GetDefaultObj()
{
	static class UParvatiMissionary_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiMissionary_BreederF_C*>(UParvatiMissionary_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


