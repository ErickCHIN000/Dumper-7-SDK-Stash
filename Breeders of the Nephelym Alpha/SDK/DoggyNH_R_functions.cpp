#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyNH_R.DoggyNH_R_C
// (None)

class UClass* UDoggyNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyNH_R_C");

	return Clss;
}


// DoggyNH_R_C DoggyNH_R.Default__DoggyNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyNH_R_C* UDoggyNH_R_C::GetDefaultObj()
{
	static class UDoggyNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyNH_R_C*>(UDoggyNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


