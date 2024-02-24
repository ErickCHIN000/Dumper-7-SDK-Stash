#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mus_MenuMusic.BP_Mus_MenuMusic_C
// (Actor)

class UClass* ABP_Mus_MenuMusic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mus_MenuMusic_C");

	return Clss;
}


// BP_Mus_MenuMusic_C BP_Mus_MenuMusic.Default__BP_Mus_MenuMusic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mus_MenuMusic_C* ABP_Mus_MenuMusic_C::GetDefaultObj()
{
	static class ABP_Mus_MenuMusic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mus_MenuMusic_C*>(ABP_Mus_MenuMusic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Mus_MenuMusic.BP_Mus_MenuMusic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mus_MenuMusic_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mus_MenuMusic_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mus_MenuMusic.BP_Mus_MenuMusic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Mus_MenuMusic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mus_MenuMusic_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mus_MenuMusic.BP_Mus_MenuMusic_C.ExecuteUbergraph_BP_Mus_MenuMusic
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)

void ABP_Mus_MenuMusic_C::ExecuteUbergraph_BP_Mus_MenuMusic(int32 EntryPoint, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mus_MenuMusic_C", "ExecuteUbergraph_BP_Mus_MenuMusic");

	Params::ABP_Mus_MenuMusic_C_ExecuteUbergraph_BP_Mus_MenuMusic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


