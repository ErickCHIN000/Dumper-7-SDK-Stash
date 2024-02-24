#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyST_R.ButterflyST_R_C
// (None)

class UClass* UButterflyST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyST_R_C");

	return Clss;
}


// ButterflyST_R_C ButterflyST_R.Default__ButterflyST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyST_R_C* UButterflyST_R_C::GetDefaultObj()
{
	static class UButterflyST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyST_R_C*>(UButterflyST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


