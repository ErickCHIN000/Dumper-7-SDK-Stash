#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiDoggy_BreederF.ParvatiDoggy_BreederF_C
// (None)

class UClass* UParvatiDoggy_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiDoggy_BreederF_C");

	return Clss;
}


// ParvatiDoggy_BreederF_C ParvatiDoggy_BreederF.Default__ParvatiDoggy_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiDoggy_BreederF_C* UParvatiDoggy_BreederF_C::GetDefaultObj()
{
	static class UParvatiDoggy_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiDoggy_BreederF_C*>(UParvatiDoggy_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


