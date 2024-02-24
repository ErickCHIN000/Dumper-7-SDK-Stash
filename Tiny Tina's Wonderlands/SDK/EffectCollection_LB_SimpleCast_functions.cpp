#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_LB_SimpleCast.EffectCollection_LB_SimpleCast_C
// (None)

class UClass* UEffectCollection_LB_SimpleCast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_LB_SimpleCast_C");

	return Clss;
}


// EffectCollection_LB_SimpleCast_C EffectCollection_LB_SimpleCast.Default__EffectCollection_LB_SimpleCast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_LB_SimpleCast_C* UEffectCollection_LB_SimpleCast_C::GetDefaultObj()
{
	static class UEffectCollection_LB_SimpleCast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_LB_SimpleCast_C*>(UEffectCollection_LB_SimpleCast_C::StaticClass()->DefaultObject);

	return Default;
}

}


