#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Banana.Banana_C
// (Actor)

class UClass* ABanana_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Banana_C");

	return Clss;
}


// Banana_C Banana.Default__Banana_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABanana_C* ABanana_C::GetDefaultObj()
{
	static class ABanana_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABanana_C*>(ABanana_C::StaticClass()->DefaultObject);

	return Default;
}

}


