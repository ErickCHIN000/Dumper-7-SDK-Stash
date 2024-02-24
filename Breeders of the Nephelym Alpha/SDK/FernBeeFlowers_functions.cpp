#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernBeeFlowers.FernBeeFlowers_C
// (None)

class UClass* UFernBeeFlowers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernBeeFlowers_C");

	return Clss;
}


// FernBeeFlowers_C FernBeeFlowers.Default__FernBeeFlowers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernBeeFlowers_C* UFernBeeFlowers_C::GetDefaultObj()
{
	static class UFernBeeFlowers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernBeeFlowers_C*>(UFernBeeFlowers_C::StaticClass()->DefaultObject);

	return Default;
}

}


