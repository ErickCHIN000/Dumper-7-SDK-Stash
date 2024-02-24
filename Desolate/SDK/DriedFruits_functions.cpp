#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DriedFruits.DriedFruits_C
// (Actor)

class UClass* ADriedFruits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DriedFruits_C");

	return Clss;
}


// DriedFruits_C DriedFruits.Default__DriedFruits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADriedFruits_C* ADriedFruits_C::GetDefaultObj()
{
	static class ADriedFruits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADriedFruits_C*>(ADriedFruits_C::StaticClass()->DefaultObject);

	return Default;
}

}


