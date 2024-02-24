#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tentacle_NT_G.Tentacle_NT_G_C
// (None)

class UClass* UTentacle_NT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tentacle_NT_G_C");

	return Clss;
}


// Tentacle_NT_G_C Tentacle_NT_G.Default__Tentacle_NT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTentacle_NT_G_C* UTentacle_NT_G_C::GetDefaultObj()
{
	static class UTentacle_NT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTentacle_NT_G_C*>(UTentacle_NT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


