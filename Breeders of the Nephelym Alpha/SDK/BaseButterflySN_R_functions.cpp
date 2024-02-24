#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflySN_R.BaseButterflySN_R_C
// (None)

class UClass* UBaseButterflySN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflySN_R_C");

	return Clss;
}


// BaseButterflySN_R_C BaseButterflySN_R.Default__BaseButterflySN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflySN_R_C* UBaseButterflySN_R_C::GetDefaultObj()
{
	static class UBaseButterflySN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflySN_R_C*>(UBaseButterflySN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


