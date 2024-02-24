#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyNM_G.DoggyNM_G_C
// (None)

class UClass* UDoggyNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyNM_G_C");

	return Clss;
}


// DoggyNM_G_C DoggyNM_G.Default__DoggyNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyNM_G_C* UDoggyNM_G_C::GetDefaultObj()
{
	static class UDoggyNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyNM_G_C*>(UDoggyNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


