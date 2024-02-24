#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TalkSelectPopup.TalkSelectPopup_C
// (Actor)

class UClass* ATalkSelectPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TalkSelectPopup_C");

	return Clss;
}


// TalkSelectPopup_C TalkSelectPopup.Default__TalkSelectPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATalkSelectPopup_C* ATalkSelectPopup_C::GetDefaultObj()
{
	static class ATalkSelectPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATalkSelectPopup_C*>(ATalkSelectPopup_C::StaticClass()->DefaultObject);

	return Default;
}

}


