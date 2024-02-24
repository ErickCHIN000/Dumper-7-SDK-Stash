#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflySS_R.BaseButterflySS_R_C
// (None)

class UClass* UBaseButterflySS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflySS_R_C");

	return Clss;
}


// BaseButterflySS_R_C BaseButterflySS_R.Default__BaseButterflySS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflySS_R_C* UBaseButterflySS_R_C::GetDefaultObj()
{
	static class UBaseButterflySS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflySS_R_C*>(UBaseButterflySS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


