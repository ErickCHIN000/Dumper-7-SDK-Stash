#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffectCollection_LB_ChannelWarmup.EffectCollection_LB_ChannelWarmup_C
// (None)

class UClass* UEffectCollection_LB_ChannelWarmup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectCollection_LB_ChannelWarmup_C");

	return Clss;
}


// EffectCollection_LB_ChannelWarmup_C EffectCollection_LB_ChannelWarmup.Default__EffectCollection_LB_ChannelWarmup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffectCollection_LB_ChannelWarmup_C* UEffectCollection_LB_ChannelWarmup_C::GetDefaultObj()
{
	static class UEffectCollection_LB_ChannelWarmup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffectCollection_LB_ChannelWarmup_C*>(UEffectCollection_LB_ChannelWarmup_C::StaticClass()->DefaultObject);

	return Default;
}

}


