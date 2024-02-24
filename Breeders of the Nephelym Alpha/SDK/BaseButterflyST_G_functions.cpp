#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyST_G.BaseButterflyST_G_C
// (None)

class UClass* UBaseButterflyST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyST_G_C");

	return Clss;
}


// BaseButterflyST_G_C BaseButterflyST_G.Default__BaseButterflyST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyST_G_C* UBaseButterflyST_G_C::GetDefaultObj()
{
	static class UBaseButterflyST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyST_G_C*>(UBaseButterflyST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


