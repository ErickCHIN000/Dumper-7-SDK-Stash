#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyNN_G.DoggyNN_G_C
// (None)

class UClass* UDoggyNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyNN_G_C");

	return Clss;
}


// DoggyNN_G_C DoggyNN_G.Default__DoggyNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyNN_G_C* UDoggyNN_G_C::GetDefaultObj()
{
	static class UDoggyNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyNN_G_C*>(UDoggyNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


