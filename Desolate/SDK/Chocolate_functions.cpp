#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chocolate.Chocolate_C
// (Actor)

class UClass* AChocolate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chocolate_C");

	return Clss;
}


// Chocolate_C Chocolate.Default__Chocolate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChocolate_C* AChocolate_C::GetDefaultObj()
{
	static class AChocolate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChocolate_C*>(AChocolate_C::StaticClass()->DefaultObject);

	return Default;
}

}


