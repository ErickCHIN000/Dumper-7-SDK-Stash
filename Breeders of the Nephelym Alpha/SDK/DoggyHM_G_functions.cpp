#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyHM_G.DoggyHM_G_C
// (None)

class UClass* UDoggyHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyHM_G_C");

	return Clss;
}


// DoggyHM_G_C DoggyHM_G.Default__DoggyHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyHM_G_C* UDoggyHM_G_C::GetDefaultObj()
{
	static class UDoggyHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyHM_G_C*>(UDoggyHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


