#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernDefault03_R02.FernDefault03_R02_C
// (None)

class UClass* UFernDefault03_R02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernDefault03_R02_C");

	return Clss;
}


// FernDefault03_R02_C FernDefault03_R02.Default__FernDefault03_R02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernDefault03_R02_C* UFernDefault03_R02_C::GetDefaultObj()
{
	static class UFernDefault03_R02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernDefault03_R02_C*>(UFernDefault03_R02_C::StaticClass()->DefaultObject);

	return Default;
}

}


