#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectsCollection_EchoPho.EffectsCollection_EchoPho_C
// (None)

class UClass* UEffectsCollection_EchoPho_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectsCollection_EchoPho_C");

	return Clss;
}


// EffectsCollection_EchoPho_C EffectsCollection_EchoPho.Default__EffectsCollection_EchoPho_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectsCollection_EchoPho_C* UEffectsCollection_EchoPho_C::GetDefaultObj()
{
	static class UEffectsCollection_EchoPho_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectsCollection_EchoPho_C*>(UEffectsCollection_EchoPho_C::StaticClass()->DefaultObject);

	return Default;
}

}


