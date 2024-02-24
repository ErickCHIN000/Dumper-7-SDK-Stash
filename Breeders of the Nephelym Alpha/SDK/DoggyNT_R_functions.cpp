#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyNT_R.DoggyNT_R_C
// (None)

class UClass* UDoggyNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyNT_R_C");

	return Clss;
}


// DoggyNT_R_C DoggyNT_R.Default__DoggyNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyNT_R_C* UDoggyNT_R_C::GetDefaultObj()
{
	static class UDoggyNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyNT_R_C*>(UDoggyNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


