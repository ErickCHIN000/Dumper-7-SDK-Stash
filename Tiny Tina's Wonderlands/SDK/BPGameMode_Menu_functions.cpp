#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPGameMode_Menu.BPGameMode_Menu_C
// (Actor)

class UClass* ABPGameMode_Menu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPGameMode_Menu_C");

	return Clss;
}


// BPGameMode_Menu_C BPGameMode_Menu.Default__BPGameMode_Menu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPGameMode_Menu_C* ABPGameMode_Menu_C::GetDefaultObj()
{
	static class ABPGameMode_Menu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPGameMode_Menu_C*>(ABPGameMode_Menu_C::StaticClass()->DefaultObject);

	return Default;
}

}


