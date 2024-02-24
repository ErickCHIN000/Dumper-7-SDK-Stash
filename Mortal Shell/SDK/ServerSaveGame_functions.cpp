#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ServerSaveGame.ServerSaveGame_C
// (None)

class UClass* UServerSaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ServerSaveGame_C");

	return Clss;
}


// ServerSaveGame_C ServerSaveGame.Default__ServerSaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UServerSaveGame_C* UServerSaveGame_C::GetDefaultObj()
{
	static class UServerSaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UServerSaveGame_C*>(UServerSaveGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


