#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflySM_G.BaseButterflySM_G_C
// (None)

class UClass* UBaseButterflySM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflySM_G_C");

	return Clss;
}


// BaseButterflySM_G_C BaseButterflySM_G.Default__BaseButterflySM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflySM_G_C* UBaseButterflySM_G_C::GetDefaultObj()
{
	static class UBaseButterflySM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflySM_G_C*>(UBaseButterflySM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


