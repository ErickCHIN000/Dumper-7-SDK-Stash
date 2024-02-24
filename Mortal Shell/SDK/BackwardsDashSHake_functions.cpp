#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BackwardsDashSHake.BackwardsDashSHake_C
// (None)

class UClass* UBackwardsDashSHake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackwardsDashSHake_C");

	return Clss;
}


// BackwardsDashSHake_C BackwardsDashSHake.Default__BackwardsDashSHake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBackwardsDashSHake_C* UBackwardsDashSHake_C::GetDefaultObj()
{
	static class UBackwardsDashSHake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBackwardsDashSHake_C*>(UBackwardsDashSHake_C::StaticClass()->DefaultObject);

	return Default;
}

}


