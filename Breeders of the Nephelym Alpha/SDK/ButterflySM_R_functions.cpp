#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflySM_R.ButterflySM_R_C
// (None)

class UClass* UButterflySM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflySM_R_C");

	return Clss;
}


// ButterflySM_R_C ButterflySM_R.Default__ButterflySM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflySM_R_C* UButterflySM_R_C::GetDefaultObj()
{
	static class UButterflySM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflySM_R_C*>(UButterflySM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


