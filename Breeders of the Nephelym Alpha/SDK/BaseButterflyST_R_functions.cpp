#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyST_R.BaseButterflyST_R_C
// (None)

class UClass* UBaseButterflyST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyST_R_C");

	return Clss;
}


// BaseButterflyST_R_C BaseButterflyST_R.Default__BaseButterflyST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyST_R_C* UBaseButterflyST_R_C::GetDefaultObj()
{
	static class UBaseButterflyST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyST_R_C*>(UBaseButterflyST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


