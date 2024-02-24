#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_Boltlash_Cast_Repeat.EffectCollection_Boltlash_Cast_Repeat_C
// (None)

class UClass* UEffectCollection_Boltlash_Cast_Repeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_Boltlash_Cast_Repeat_C");

	return Clss;
}


// EffectCollection_Boltlash_Cast_Repeat_C EffectCollection_Boltlash_Cast_Repeat.Default__EffectCollection_Boltlash_Cast_Repeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_Boltlash_Cast_Repeat_C* UEffectCollection_Boltlash_Cast_Repeat_C::GetDefaultObj()
{
	static class UEffectCollection_Boltlash_Cast_Repeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_Boltlash_Cast_Repeat_C*>(UEffectCollection_Boltlash_Cast_Repeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


