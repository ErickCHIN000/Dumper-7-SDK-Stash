#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MenuMap_Audio.MenuMap_Audio_C
// (Actor)

class UClass* AMenuMap_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuMap_Audio_C");

	return Clss;
}


// MenuMap_Audio_C MenuMap_Audio.Default__MenuMap_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMenuMap_Audio_C* AMenuMap_Audio_C::GetDefaultObj()
{
	static class AMenuMap_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMenuMap_Audio_C*>(AMenuMap_Audio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuMap_Audio.MenuMap_Audio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMenuMap_Audio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_Audio_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuMap_Audio.MenuMap_Audio_C.Audio_UnmuteWorld
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMenuMap_Audio_C::Audio_UnmuteWorld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_Audio_C", "Audio_UnmuteWorld");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuMap_Audio.MenuMap_Audio_C.Audio_MuteWorld
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMenuMap_Audio_C::Audio_MuteWorld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_Audio_C", "Audio_MuteWorld");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuMap_Audio.MenuMap_Audio_C.ExecuteUbergraph_MenuMap_Audio
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue1                        (None)

void AMenuMap_Audio_C::ExecuteUbergraph_MenuMap_Audio(int32 EntryPoint, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuMap_Audio_C", "ExecuteUbergraph_MenuMap_Audio");

	Params::AMenuMap_Audio_C_ExecuteUbergraph_MenuMap_Audio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue1 = CallFunc_PostEventAtLocation_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


