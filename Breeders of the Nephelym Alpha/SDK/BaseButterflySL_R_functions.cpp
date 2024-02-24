#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflySL_R.BaseButterflySL_R_C
// (None)

class UClass* UBaseButterflySL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflySL_R_C");

	return Clss;
}


// BaseButterflySL_R_C BaseButterflySL_R.Default__BaseButterflySL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflySL_R_C* UBaseButterflySL_R_C::GetDefaultObj()
{
	static class UBaseButterflySL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflySL_R_C*>(UBaseButterflySL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


