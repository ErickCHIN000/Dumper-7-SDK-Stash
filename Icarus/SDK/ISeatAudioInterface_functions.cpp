#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ISeatAudioInterface.ISeatAudioInterface_C
// (None)

class UClass* IISeatAudioInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ISeatAudioInterface_C");

	return Clss;
}


// ISeatAudioInterface_C ISeatAudioInterface.Default__ISeatAudioInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IISeatAudioInterface_C* IISeatAudioInterface_C::GetDefaultObj()
{
	static class IISeatAudioInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IISeatAudioInterface_C*>(IISeatAudioInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ISeatAudioInterface.ISeatAudioInterface_C.GetAudioSeatType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAudioSeatType          Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IISeatAudioInterface_C::GetAudioSeatType(enum class EAudioSeatType* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ISeatAudioInterface_C", "GetAudioSeatType");

	Params::IISeatAudioInterface_C_GetAudioSeatType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}

}


