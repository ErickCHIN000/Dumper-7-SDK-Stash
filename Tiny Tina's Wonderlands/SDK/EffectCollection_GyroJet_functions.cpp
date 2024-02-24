#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_GyroJet.EffectCollection_GyroJet_C
// (None)

class UClass* UEffectCollection_GyroJet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_GyroJet_C");

	return Clss;
}


// EffectCollection_GyroJet_C EffectCollection_GyroJet.Default__EffectCollection_GyroJet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_GyroJet_C* UEffectCollection_GyroJet_C::GetDefaultObj()
{
	static class UEffectCollection_GyroJet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_GyroJet_C*>(UEffectCollection_GyroJet_C::StaticClass()->DefaultObject);

	return Default;
}

}


