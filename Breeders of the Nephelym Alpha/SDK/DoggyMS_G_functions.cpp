#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyMS_G.DoggyMS_G_C
// (None)

class UClass* UDoggyMS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyMS_G_C");

	return Clss;
}


// DoggyMS_G_C DoggyMS_G.Default__DoggyMS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyMS_G_C* UDoggyMS_G_C::GetDefaultObj()
{
	static class UDoggyMS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyMS_G_C*>(UDoggyMS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


