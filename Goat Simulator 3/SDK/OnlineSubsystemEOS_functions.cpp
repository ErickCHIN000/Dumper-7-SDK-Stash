#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemEOS.EOSNetConnection
// (None)

class UClass* UEOSNetConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSNetConnection");

	return Clss;
}


// EOSNetConnection OnlineSubsystemEOS.Default__EOSNetConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSNetConnection* UEOSNetConnection::GetDefaultObj()
{
	static class UEOSNetConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSNetConnection*>(UEOSNetConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemEOS.EOSNetDriver
// (None)

class UClass* UEOSNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSNetDriver");

	return Clss;
}


// EOSNetDriver OnlineSubsystemEOS.Default__EOSNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSNetDriver* UEOSNetDriver::GetDefaultObj()
{
	static class UEOSNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSNetDriver*>(UEOSNetDriver::StaticClass()->DefaultObject);

	return Default;
}

}


