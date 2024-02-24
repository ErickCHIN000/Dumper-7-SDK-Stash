#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiDoggy_BreederT.ParvatiDoggy_BreederT_C
// (None)

class UClass* UParvatiDoggy_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiDoggy_BreederT_C");

	return Clss;
}


// ParvatiDoggy_BreederT_C ParvatiDoggy_BreederT.Default__ParvatiDoggy_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiDoggy_BreederT_C* UParvatiDoggy_BreederT_C::GetDefaultObj()
{
	static class UParvatiDoggy_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiDoggy_BreederT_C*>(UParvatiDoggy_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


