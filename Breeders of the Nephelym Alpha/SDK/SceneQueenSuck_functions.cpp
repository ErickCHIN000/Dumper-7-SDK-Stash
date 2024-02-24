#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SceneQueenSuck.SceneQueenSuck_C
// (None)

class UClass* USceneQueenSuck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SceneQueenSuck_C");

	return Clss;
}


// SceneQueenSuck_C SceneQueenSuck.Default__SceneQueenSuck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USceneQueenSuck_C* USceneQueenSuck_C::GetDefaultObj()
{
	static class USceneQueenSuck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USceneQueenSuck_C*>(USceneQueenSuck_C::StaticClass()->DefaultObject);

	return Default;
}

}


