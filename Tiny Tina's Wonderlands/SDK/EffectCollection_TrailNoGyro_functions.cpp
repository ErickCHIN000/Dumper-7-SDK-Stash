#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_TrailNoGyro.EffectCollection_TrailNoGyro_C
// (None)

class UClass* UEffectCollection_TrailNoGyro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_TrailNoGyro_C");

	return Clss;
}


// EffectCollection_TrailNoGyro_C EffectCollection_TrailNoGyro.Default__EffectCollection_TrailNoGyro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_TrailNoGyro_C* UEffectCollection_TrailNoGyro_C::GetDefaultObj()
{
	static class UEffectCollection_TrailNoGyro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_TrailNoGyro_C*>(UEffectCollection_TrailNoGyro_C::StaticClass()->DefaultObject);

	return Default;
}

}


