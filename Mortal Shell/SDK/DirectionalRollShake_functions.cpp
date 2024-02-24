#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DirectionalRollShake.DirectionalRollShake_C
// (None)

class UClass* UDirectionalRollShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DirectionalRollShake_C");

	return Clss;
}


// DirectionalRollShake_C DirectionalRollShake.Default__DirectionalRollShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDirectionalRollShake_C* UDirectionalRollShake_C::GetDefaultObj()
{
	static class UDirectionalRollShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDirectionalRollShake_C*>(UDirectionalRollShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


