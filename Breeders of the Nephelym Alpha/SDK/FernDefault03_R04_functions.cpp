#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernDefault03_R04.FernDefault03_R04_C
// (None)

class UClass* UFernDefault03_R04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernDefault03_R04_C");

	return Clss;
}


// FernDefault03_R04_C FernDefault03_R04.Default__FernDefault03_R04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernDefault03_R04_C* UFernDefault03_R04_C::GetDefaultObj()
{
	static class UFernDefault03_R04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernDefault03_R04_C*>(UFernDefault03_R04_C::StaticClass()->DefaultObject);

	return Default;
}

}


