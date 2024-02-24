#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimpleBreakfast.SimpleBreakfast_C
// (Actor)

class UClass* ASimpleBreakfast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleBreakfast_C");

	return Clss;
}


// SimpleBreakfast_C SimpleBreakfast.Default__SimpleBreakfast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASimpleBreakfast_C* ASimpleBreakfast_C::GetDefaultObj()
{
	static class ASimpleBreakfast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASimpleBreakfast_C*>(ASimpleBreakfast_C::StaticClass()->DefaultObject);

	return Default;
}

}


