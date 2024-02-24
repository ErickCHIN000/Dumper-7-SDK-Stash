#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Doggy.Doggy_C
// (None)

class UClass* UDoggy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Doggy_C");

	return Clss;
}


// Doggy_C Doggy.Default__Doggy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggy_C* UDoggy_C::GetDefaultObj()
{
	static class UDoggy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggy_C*>(UDoggy_C::StaticClass()->DefaultObject);

	return Default;
}

}


