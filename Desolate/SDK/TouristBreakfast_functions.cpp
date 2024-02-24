#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TouristBreakfast.TouristBreakfast_C
// (Actor)

class UClass* ATouristBreakfast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TouristBreakfast_C");

	return Clss;
}


// TouristBreakfast_C TouristBreakfast.Default__TouristBreakfast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATouristBreakfast_C* ATouristBreakfast_C::GetDefaultObj()
{
	static class ATouristBreakfast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATouristBreakfast_C*>(ATouristBreakfast_C::StaticClass()->DefaultObject);

	return Default;
}

}


