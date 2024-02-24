#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyNM_R.DoggyNM_R_C
// (None)

class UClass* UDoggyNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyNM_R_C");

	return Clss;
}


// DoggyNM_R_C DoggyNM_R.Default__DoggyNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyNM_R_C* UDoggyNM_R_C::GetDefaultObj()
{
	static class UDoggyNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyNM_R_C*>(UDoggyNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


