#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TalkToNPC.TalkToNPC_C
// (None)

class UClass* UTalkToNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TalkToNPC_C");

	return Clss;
}


// TalkToNPC_C TalkToNPC.Default__TalkToNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTalkToNPC_C* UTalkToNPC_C::GetDefaultObj()
{
	static class UTalkToNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTalkToNPC_C*>(UTalkToNPC_C::StaticClass()->DefaultObject);

	return Default;
}

}


