#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScreenFrameInterface.ScreenFrameInterface_C
// (None)

class UClass* IScreenFrameInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScreenFrameInterface_C");

	return Clss;
}


// ScreenFrameInterface_C ScreenFrameInterface.Default__ScreenFrameInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IScreenFrameInterface_C* IScreenFrameInterface_C::GetDefaultObj()
{
	static class IScreenFrameInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IScreenFrameInterface_C*>(IScreenFrameInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScreenFrameInterface.ScreenFrameInterface_C.GetSoundToPlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAkAudioEvent*               Event                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IScreenFrameInterface_C::GetSoundToPlay(class UAkAudioEvent** Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScreenFrameInterface_C", "GetSoundToPlay");

	Params::IScreenFrameInterface_C_GetSoundToPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Event != nullptr)
		*Event = Parms.Event;

}

}


