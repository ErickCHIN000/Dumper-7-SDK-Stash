#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflySM_G.ButterflySM_G_C
// (None)

class UClass* UButterflySM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflySM_G_C");

	return Clss;
}


// ButterflySM_G_C ButterflySM_G.Default__ButterflySM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflySM_G_C* UButterflySM_G_C::GetDefaultObj()
{
	static class UButterflySM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflySM_G_C*>(UButterflySM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


