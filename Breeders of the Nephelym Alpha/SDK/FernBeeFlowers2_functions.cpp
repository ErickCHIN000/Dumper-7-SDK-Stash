#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernBeeFlowers2.FernBeeFlowers2_C
// (None)

class UClass* UFernBeeFlowers2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernBeeFlowers2_C");

	return Clss;
}


// FernBeeFlowers2_C FernBeeFlowers2.Default__FernBeeFlowers2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernBeeFlowers2_C* UFernBeeFlowers2_C::GetDefaultObj()
{
	static class UFernBeeFlowers2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernBeeFlowers2_C*>(UFernBeeFlowers2_C::StaticClass()->DefaultObject);

	return Default;
}

}


