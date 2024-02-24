#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyNL_G.DoggyNL_G_C
// (None)

class UClass* UDoggyNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyNL_G_C");

	return Clss;
}


// DoggyNL_G_C DoggyNL_G.Default__DoggyNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyNL_G_C* UDoggyNL_G_C::GetDefaultObj()
{
	static class UDoggyNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyNL_G_C*>(UDoggyNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


