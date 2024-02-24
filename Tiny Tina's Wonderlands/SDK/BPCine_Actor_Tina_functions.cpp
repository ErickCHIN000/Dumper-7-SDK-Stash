#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCine_Actor_Tina.BPCine_Actor_Tina_C
// (Actor)

class UClass* ABPCine_Actor_Tina_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCine_Actor_Tina_C");

	return Clss;
}


// BPCine_Actor_Tina_C BPCine_Actor_Tina.Default__BPCine_Actor_Tina_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPCine_Actor_Tina_C* ABPCine_Actor_Tina_C::GetDefaultObj()
{
	static class ABPCine_Actor_Tina_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPCine_Actor_Tina_C*>(ABPCine_Actor_Tina_C::StaticClass()->DefaultObject);

	return Default;
}

}


