#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflySN_G.BaseButterflySN_G_C
// (None)

class UClass* UBaseButterflySN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflySN_G_C");

	return Clss;
}


// BaseButterflySN_G_C BaseButterflySN_G.Default__BaseButterflySN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflySN_G_C* UBaseButterflySN_G_C::GetDefaultObj()
{
	static class UBaseButterflySN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflySN_G_C*>(UBaseButterflySN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


