#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystem.NamedInterfaces
// (None)

class UClass* UNamedInterfaces::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NamedInterfaces");

	return Clss;
}


// NamedInterfaces OnlineSubsystem.Default__NamedInterfaces
// (Public, ClassDefaultObject, ArchetypeObject)

class UNamedInterfaces* UNamedInterfaces::GetDefaultObj()
{
	static class UNamedInterfaces* Default = nullptr;

	if (!Default)
		Default = static_cast<UNamedInterfaces*>(UNamedInterfaces::StaticClass()->DefaultObject);

	return Default;
}

}


