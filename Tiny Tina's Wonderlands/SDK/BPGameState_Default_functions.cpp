#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPGameState_Default.BPGameState_Default_C
// (Actor)

class UClass* ABPGameState_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPGameState_Default_C");

	return Clss;
}


// BPGameState_Default_C BPGameState_Default.Default__BPGameState_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPGameState_Default_C* ABPGameState_Default_C::GetDefaultObj()
{
	static class ABPGameState_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPGameState_Default_C*>(ABPGameState_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}


