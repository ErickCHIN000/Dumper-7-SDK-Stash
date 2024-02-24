#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflySH_R.ButterflySH_R_C
// (None)

class UClass* UButterflySH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflySH_R_C");

	return Clss;
}


// ButterflySH_R_C ButterflySH_R.Default__ButterflySH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflySH_R_C* UButterflySH_R_C::GetDefaultObj()
{
	static class UButterflySH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflySH_R_C*>(UButterflySH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


