#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyTM_G.DoggyTM_G_C
// (None)

class UClass* UDoggyTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyTM_G_C");

	return Clss;
}


// DoggyTM_G_C DoggyTM_G.Default__DoggyTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyTM_G_C* UDoggyTM_G_C::GetDefaultObj()
{
	static class UDoggyTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyTM_G_C*>(UDoggyTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


