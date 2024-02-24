#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dessert.Dessert_C
// (Actor)

class UClass* ADessert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dessert_C");

	return Clss;
}


// Dessert_C Dessert.Default__Dessert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADessert_C* ADessert_C::GetDefaultObj()
{
	static class ADessert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADessert_C*>(ADessert_C::StaticClass()->DefaultObject);

	return Default;
}

}


