#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyNL_R.DoggyNL_R_C
// (None)

class UClass* UDoggyNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyNL_R_C");

	return Clss;
}


// DoggyNL_R_C DoggyNL_R.Default__DoggyNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyNL_R_C* UDoggyNL_R_C::GetDefaultObj()
{
	static class UDoggyNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyNL_R_C*>(UDoggyNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


