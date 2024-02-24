#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_CoP_Cast.EffectCollection_CoP_Cast_C
// (None)

class UClass* UEffectCollection_CoP_Cast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_CoP_Cast_C");

	return Clss;
}


// EffectCollection_CoP_Cast_C EffectCollection_CoP_Cast.Default__EffectCollection_CoP_Cast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_CoP_Cast_C* UEffectCollection_CoP_Cast_C::GetDefaultObj()
{
	static class UEffectCollection_CoP_Cast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_CoP_Cast_C*>(UEffectCollection_CoP_Cast_C::StaticClass()->DefaultObject);

	return Default;
}

}


