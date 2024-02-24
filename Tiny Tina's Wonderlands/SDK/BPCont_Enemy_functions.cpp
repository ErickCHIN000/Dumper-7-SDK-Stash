#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCont_Enemy.BPCont_Enemy_C
// (Actor)

class UClass* ABPCont_Enemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCont_Enemy_C");

	return Clss;
}


// BPCont_Enemy_C BPCont_Enemy.Default__BPCont_Enemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPCont_Enemy_C* ABPCont_Enemy_C::GetDefaultObj()
{
	static class ABPCont_Enemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPCont_Enemy_C*>(ABPCont_Enemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


