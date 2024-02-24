#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflySH_G.ButterflySH_G_C
// (None)

class UClass* UButterflySH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflySH_G_C");

	return Clss;
}


// ButterflySH_G_C ButterflySH_G.Default__ButterflySH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflySH_G_C* UButterflySH_G_C::GetDefaultObj()
{
	static class UButterflySH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflySH_G_C*>(UButterflySH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


