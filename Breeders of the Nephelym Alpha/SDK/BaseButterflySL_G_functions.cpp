#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflySL_G.BaseButterflySL_G_C
// (None)

class UClass* UBaseButterflySL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflySL_G_C");

	return Clss;
}


// BaseButterflySL_G_C BaseButterflySL_G.Default__BaseButterflySL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflySL_G_C* UBaseButterflySL_G_C::GetDefaultObj()
{
	static class UBaseButterflySL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflySL_G_C*>(UBaseButterflySL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


