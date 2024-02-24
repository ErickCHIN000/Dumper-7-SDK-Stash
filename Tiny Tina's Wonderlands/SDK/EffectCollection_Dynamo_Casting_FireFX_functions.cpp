#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_Dynamo_Casting_FireFX.EffectCollection_Dynamo_Casting_FireFX_C
// (None)

class UClass* UEffectCollection_Dynamo_Casting_FireFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_Dynamo_Casting_FireFX_C");

	return Clss;
}


// EffectCollection_Dynamo_Casting_FireFX_C EffectCollection_Dynamo_Casting_FireFX.Default__EffectCollection_Dynamo_Casting_FireFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_Dynamo_Casting_FireFX_C* UEffectCollection_Dynamo_Casting_FireFX_C::GetDefaultObj()
{
	static class UEffectCollection_Dynamo_Casting_FireFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_Dynamo_Casting_FireFX_C*>(UEffectCollection_Dynamo_Casting_FireFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


