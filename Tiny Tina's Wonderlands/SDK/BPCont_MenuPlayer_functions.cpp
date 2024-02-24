#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCont_MenuPlayer.BPCont_MenuPlayer_C
// (Actor, PlayerController)

class UClass* ABPCont_MenuPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCont_MenuPlayer_C");

	return Clss;
}


// BPCont_MenuPlayer_C BPCont_MenuPlayer.Default__BPCont_MenuPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPCont_MenuPlayer_C* ABPCont_MenuPlayer_C::GetDefaultObj()
{
	static class ABPCont_MenuPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPCont_MenuPlayer_C*>(ABPCont_MenuPlayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


