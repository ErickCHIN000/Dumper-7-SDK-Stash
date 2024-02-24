#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Orange.Orange_C
// (Actor)

class UClass* AOrange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Orange_C");

	return Clss;
}


// Orange_C Orange.Default__Orange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOrange_C* AOrange_C::GetDefaultObj()
{
	static class AOrange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOrange_C*>(AOrange_C::StaticClass()->DefaultObject);

	return Default;
}

}


