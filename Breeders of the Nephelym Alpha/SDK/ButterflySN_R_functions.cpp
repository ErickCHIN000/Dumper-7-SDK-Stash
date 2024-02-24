#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflySN_R.ButterflySN_R_C
// (None)

class UClass* UButterflySN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflySN_R_C");

	return Clss;
}


// ButterflySN_R_C ButterflySN_R.Default__ButterflySN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflySN_R_C* UButterflySN_R_C::GetDefaultObj()
{
	static class UButterflySN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflySN_R_C*>(UButterflySN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


