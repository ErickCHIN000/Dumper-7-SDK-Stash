#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyHS_G.DoggyHS_G_C
// (None)

class UClass* UDoggyHS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyHS_G_C");

	return Clss;
}


// DoggyHS_G_C DoggyHS_G.Default__DoggyHS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyHS_G_C* UDoggyHS_G_C::GetDefaultObj()
{
	static class UDoggyHS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyHS_G_C*>(UDoggyHS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


