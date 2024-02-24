#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryBlessedInquiry02_RL.EmissaryBlessedInquiry02_RL_C
// (None)

class UClass* UEmissaryBlessedInquiry02_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryBlessedInquiry02_RL_C");

	return Clss;
}


// EmissaryBlessedInquiry02_RL_C EmissaryBlessedInquiry02_RL.Default__EmissaryBlessedInquiry02_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryBlessedInquiry02_RL_C* UEmissaryBlessedInquiry02_RL_C::GetDefaultObj()
{
	static class UEmissaryBlessedInquiry02_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryBlessedInquiry02_RL_C*>(UEmissaryBlessedInquiry02_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


