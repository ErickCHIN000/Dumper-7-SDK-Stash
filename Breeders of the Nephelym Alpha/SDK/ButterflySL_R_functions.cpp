#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflySL_R.ButterflySL_R_C
// (None)

class UClass* UButterflySL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflySL_R_C");

	return Clss;
}


// ButterflySL_R_C ButterflySL_R.Default__ButterflySL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflySL_R_C* UButterflySL_R_C::GetDefaultObj()
{
	static class UButterflySL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflySL_R_C*>(UButterflySL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


