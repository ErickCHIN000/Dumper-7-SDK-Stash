#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_Boltlash_Cast.EffectCollection_Boltlash_Cast_C
// (None)

class UClass* UEffectCollection_Boltlash_Cast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_Boltlash_Cast_C");

	return Clss;
}


// EffectCollection_Boltlash_Cast_C EffectCollection_Boltlash_Cast.Default__EffectCollection_Boltlash_Cast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_Boltlash_Cast_C* UEffectCollection_Boltlash_Cast_C::GetDefaultObj()
{
	static class UEffectCollection_Boltlash_Cast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_Boltlash_Cast_C*>(UEffectCollection_Boltlash_Cast_C::StaticClass()->DefaultObject);

	return Default;
}

}


