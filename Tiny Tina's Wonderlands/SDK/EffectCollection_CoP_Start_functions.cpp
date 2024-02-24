#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_CoP_Start.EffectCollection_CoP_Start_C
// (None)

class UClass* UEffectCollection_CoP_Start_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_CoP_Start_C");

	return Clss;
}


// EffectCollection_CoP_Start_C EffectCollection_CoP_Start.Default__EffectCollection_CoP_Start_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_CoP_Start_C* UEffectCollection_CoP_Start_C::GetDefaultObj()
{
	static class UEffectCollection_CoP_Start_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_CoP_Start_C*>(UEffectCollection_CoP_Start_C::StaticClass()->DefaultObject);

	return Default;
}

}


