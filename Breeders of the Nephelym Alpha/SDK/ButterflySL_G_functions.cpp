#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflySL_G.ButterflySL_G_C
// (None)

class UClass* UButterflySL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflySL_G_C");

	return Clss;
}


// ButterflySL_G_C ButterflySL_G.Default__ButterflySL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflySL_G_C* UButterflySL_G_C::GetDefaultObj()
{
	static class UButterflySL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflySL_G_C*>(UButterflySL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


