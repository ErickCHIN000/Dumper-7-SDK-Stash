#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiDoggyF.ParvatiDoggyF_C
// (None)

class UClass* UParvatiDoggyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiDoggyF_C");

	return Clss;
}


// ParvatiDoggyF_C ParvatiDoggyF.Default__ParvatiDoggyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiDoggyF_C* UParvatiDoggyF_C::GetDefaultObj()
{
	static class UParvatiDoggyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiDoggyF_C*>(UParvatiDoggyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


