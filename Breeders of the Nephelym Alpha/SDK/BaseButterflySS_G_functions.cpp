#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflySS_G.BaseButterflySS_G_C
// (None)

class UClass* UBaseButterflySS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflySS_G_C");

	return Clss;
}


// BaseButterflySS_G_C BaseButterflySS_G.Default__BaseButterflySS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflySS_G_C* UBaseButterflySS_G_C::GetDefaultObj()
{
	static class UBaseButterflySS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflySS_G_C*>(UBaseButterflySS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


