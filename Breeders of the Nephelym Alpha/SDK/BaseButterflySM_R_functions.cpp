#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflySM_R.BaseButterflySM_R_C
// (None)

class UClass* UBaseButterflySM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflySM_R_C");

	return Clss;
}


// BaseButterflySM_R_C BaseButterflySM_R.Default__BaseButterflySM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflySM_R_C* UBaseButterflySM_R_C::GetDefaultObj()
{
	static class UBaseButterflySM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflySM_R_C*>(UBaseButterflySM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


