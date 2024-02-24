#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyST_G.ButterflyST_G_C
// (None)

class UClass* UButterflyST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyST_G_C");

	return Clss;
}


// ButterflyST_G_C ButterflyST_G.Default__ButterflyST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyST_G_C* UButterflyST_G_C::GetDefaultObj()
{
	static class UButterflyST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyST_G_C*>(UButterflyST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


