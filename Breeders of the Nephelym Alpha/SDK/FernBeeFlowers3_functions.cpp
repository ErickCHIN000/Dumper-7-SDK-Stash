#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernBeeFlowers3.FernBeeFlowers3_C
// (None)

class UClass* UFernBeeFlowers3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernBeeFlowers3_C");

	return Clss;
}


// FernBeeFlowers3_C FernBeeFlowers3.Default__FernBeeFlowers3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernBeeFlowers3_C* UFernBeeFlowers3_C::GetDefaultObj()
{
	static class UFernBeeFlowers3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernBeeFlowers3_C*>(UFernBeeFlowers3_C::StaticClass()->DefaultObject);

	return Default;
}

}


