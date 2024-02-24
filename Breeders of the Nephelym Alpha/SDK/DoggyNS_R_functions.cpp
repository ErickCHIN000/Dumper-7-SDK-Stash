#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyNS_R.DoggyNS_R_C
// (None)

class UClass* UDoggyNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyNS_R_C");

	return Clss;
}


// DoggyNS_R_C DoggyNS_R.Default__DoggyNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyNS_R_C* UDoggyNS_R_C::GetDefaultObj()
{
	static class UDoggyNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyNS_R_C*>(UDoggyNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


