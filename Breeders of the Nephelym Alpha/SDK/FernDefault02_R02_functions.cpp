#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernDefault02_R02.FernDefault02_R02_C
// (None)

class UClass* UFernDefault02_R02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernDefault02_R02_C");

	return Clss;
}


// FernDefault02_R02_C FernDefault02_R02.Default__FernDefault02_R02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernDefault02_R02_C* UFernDefault02_R02_C::GetDefaultObj()
{
	static class UFernDefault02_R02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernDefault02_R02_C*>(UFernDefault02_R02_C::StaticClass()->DefaultObject);

	return Default;
}

}

