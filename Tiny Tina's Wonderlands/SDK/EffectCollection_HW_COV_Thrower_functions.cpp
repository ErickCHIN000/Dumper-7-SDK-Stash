#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_HW_COV_Thrower.EffectCollection_HW_COV_Thrower_C
// (None)

class UClass* UEffectCollection_HW_COV_Thrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_HW_COV_Thrower_C");

	return Clss;
}


// EffectCollection_HW_COV_Thrower_C EffectCollection_HW_COV_Thrower.Default__EffectCollection_HW_COV_Thrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_HW_COV_Thrower_C* UEffectCollection_HW_COV_Thrower_C::GetDefaultObj()
{
	static class UEffectCollection_HW_COV_Thrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_HW_COV_Thrower_C*>(UEffectCollection_HW_COV_Thrower_C::StaticClass()->DefaultObject);

	return Default;
}

}


