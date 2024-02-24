#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SceneQueenSuck_Breeder.SceneQueenSuck_Breeder_C
// (None)

class UClass* USceneQueenSuck_Breeder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SceneQueenSuck_Breeder_C");

	return Clss;
}


// SceneQueenSuck_Breeder_C SceneQueenSuck_Breeder.Default__SceneQueenSuck_Breeder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USceneQueenSuck_Breeder_C* USceneQueenSuck_Breeder_C::GetDefaultObj()
{
	static class USceneQueenSuck_Breeder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USceneQueenSuck_Breeder_C*>(USceneQueenSuck_Breeder_C::StaticClass()->DefaultObject);

	return Default;
}

}


