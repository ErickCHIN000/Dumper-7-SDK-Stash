#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_Erupt_SnapChannel.EffectCollection_Erupt_SnapChannel_C
// (None)

class UClass* UEffectCollection_Erupt_SnapChannel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_Erupt_SnapChannel_C");

	return Clss;
}


// EffectCollection_Erupt_SnapChannel_C EffectCollection_Erupt_SnapChannel.Default__EffectCollection_Erupt_SnapChannel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_Erupt_SnapChannel_C* UEffectCollection_Erupt_SnapChannel_C::GetDefaultObj()
{
	static class UEffectCollection_Erupt_SnapChannel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_Erupt_SnapChannel_C*>(UEffectCollection_Erupt_SnapChannel_C::StaticClass()->DefaultObject);

	return Default;
}

}


