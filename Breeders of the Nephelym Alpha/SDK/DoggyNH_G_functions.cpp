#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyNH_G.DoggyNH_G_C
// (None)

class UClass* UDoggyNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyNH_G_C");

	return Clss;
}


// DoggyNH_G_C DoggyNH_G.Default__DoggyNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyNH_G_C* UDoggyNH_G_C::GetDefaultObj()
{
	static class UDoggyNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyNH_G_C*>(UDoggyNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


