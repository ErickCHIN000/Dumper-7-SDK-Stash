#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernDefault02_R03.FernDefault02_R03_C
// (None)

class UClass* UFernDefault02_R03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernDefault02_R03_C");

	return Clss;
}


// FernDefault02_R03_C FernDefault02_R03.Default__FernDefault02_R03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernDefault02_R03_C* UFernDefault02_R03_C::GetDefaultObj()
{
	static class UFernDefault02_R03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernDefault02_R03_C*>(UFernDefault02_R03_C::StaticClass()->DefaultObject);

	return Default;
}

}


