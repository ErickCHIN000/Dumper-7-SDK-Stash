#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SendPneumomail.SendPneumomail_C
// (None)

class UClass* USendPneumomail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SendPneumomail_C");

	return Clss;
}


// SendPneumomail_C SendPneumomail.Default__SendPneumomail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USendPneumomail_C* USendPneumomail_C::GetDefaultObj()
{
	static class USendPneumomail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USendPneumomail_C*>(USendPneumomail_C::StaticClass()->DefaultObject);

	return Default;
}

}


