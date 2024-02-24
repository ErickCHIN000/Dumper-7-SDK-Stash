#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyML_G.DoggyML_G_C
// (None)

class UClass* UDoggyML_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyML_G_C");

	return Clss;
}


// DoggyML_G_C DoggyML_G.Default__DoggyML_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyML_G_C* UDoggyML_G_C::GetDefaultObj()
{
	static class UDoggyML_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyML_G_C*>(UDoggyML_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


