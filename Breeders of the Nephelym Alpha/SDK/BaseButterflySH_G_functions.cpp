#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflySH_G.BaseButterflySH_G_C
// (None)

class UClass* UBaseButterflySH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflySH_G_C");

	return Clss;
}


// BaseButterflySH_G_C BaseButterflySH_G.Default__BaseButterflySH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflySH_G_C* UBaseButterflySH_G_C::GetDefaultObj()
{
	static class UBaseButterflySH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflySH_G_C*>(UBaseButterflySH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


