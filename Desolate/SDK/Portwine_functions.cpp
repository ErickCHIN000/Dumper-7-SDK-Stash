#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Portwine.Portwine_C
// (Actor)

class UClass* APortwine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Portwine_C");

	return Clss;
}


// Portwine_C Portwine.Default__Portwine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APortwine_C* APortwine_C::GetDefaultObj()
{
	static class APortwine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APortwine_C*>(APortwine_C::StaticClass()->DefaultObject);

	return Default;
}

}


