#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Herbs.Herbs_C
// (Actor)

class UClass* AHerbs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Herbs_C");

	return Clss;
}


// Herbs_C Herbs.Default__Herbs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHerbs_C* AHerbs_C::GetDefaultObj()
{
	static class AHerbs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHerbs_C*>(AHerbs_C::StaticClass()->DefaultObject);

	return Default;
}

}


