#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflySH_R.BaseButterflySH_R_C
// (None)

class UClass* UBaseButterflySH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflySH_R_C");

	return Clss;
}


// BaseButterflySH_R_C BaseButterflySH_R.Default__BaseButterflySH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflySH_R_C* UBaseButterflySH_R_C::GetDefaultObj()
{
	static class UBaseButterflySH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflySH_R_C*>(UBaseButterflySH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


