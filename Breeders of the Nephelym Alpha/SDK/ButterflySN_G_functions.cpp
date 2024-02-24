#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflySN_G.ButterflySN_G_C
// (None)

class UClass* UButterflySN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflySN_G_C");

	return Clss;
}


// ButterflySN_G_C ButterflySN_G.Default__ButterflySN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflySN_G_C* UButterflySN_G_C::GetDefaultObj()
{
	static class UButterflySN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflySN_G_C*>(UButterflySN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


