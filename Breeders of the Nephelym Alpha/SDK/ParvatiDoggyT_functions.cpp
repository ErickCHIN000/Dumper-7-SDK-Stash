#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiDoggyT.ParvatiDoggyT_C
// (None)

class UClass* UParvatiDoggyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiDoggyT_C");

	return Clss;
}


// ParvatiDoggyT_C ParvatiDoggyT.Default__ParvatiDoggyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiDoggyT_C* UParvatiDoggyT_C::GetDefaultObj()
{
	static class UParvatiDoggyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiDoggyT_C*>(UParvatiDoggyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


