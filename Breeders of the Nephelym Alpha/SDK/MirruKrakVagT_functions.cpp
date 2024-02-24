#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruKrakVagT.MirruKrakVagT_C
// (None)

class UClass* UMirruKrakVagT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruKrakVagT_C");

	return Clss;
}


// MirruKrakVagT_C MirruKrakVagT.Default__MirruKrakVagT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruKrakVagT_C* UMirruKrakVagT_C::GetDefaultObj()
{
	static class UMirruKrakVagT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruKrakVagT_C*>(UMirruKrakVagT_C::StaticClass()->DefaultObject);

	return Default;
}

}


