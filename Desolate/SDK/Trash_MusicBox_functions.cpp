#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_MusicBox.Trash_MusicBox_C
// (Actor)

class UClass* ATrash_MusicBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_MusicBox_C");

	return Clss;
}


// Trash_MusicBox_C Trash_MusicBox.Default__Trash_MusicBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_MusicBox_C* ATrash_MusicBox_C::GetDefaultObj()
{
	static class ATrash_MusicBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_MusicBox_C*>(ATrash_MusicBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


