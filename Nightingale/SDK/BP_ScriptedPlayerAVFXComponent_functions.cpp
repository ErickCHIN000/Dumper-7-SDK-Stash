#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ScriptedPlayerAVFXComponent.BP_ScriptedPlayerAVFXComponent_C
// (None)

class UClass* UBP_ScriptedPlayerAVFXComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ScriptedPlayerAVFXComponent_C");

	return Clss;
}


// BP_ScriptedPlayerAVFXComponent_C BP_ScriptedPlayerAVFXComponent.Default__BP_ScriptedPlayerAVFXComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ScriptedPlayerAVFXComponent_C* UBP_ScriptedPlayerAVFXComponent_C::GetDefaultObj()
{
	static class UBP_ScriptedPlayerAVFXComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ScriptedPlayerAVFXComponent_C*>(UBP_ScriptedPlayerAVFXComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


