#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ConnectedPlayer.ConnectedPlayer_C
// (None)

class UClass* UConnectedPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConnectedPlayer_C");

	return Clss;
}


// ConnectedPlayer_C ConnectedPlayer.Default__ConnectedPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConnectedPlayer_C* UConnectedPlayer_C::GetDefaultObj()
{
	static class UConnectedPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConnectedPlayer_C*>(UConnectedPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ConnectedPlayer.ConnectedPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UConnectedPlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConnectedPlayer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConnectedPlayer.ConnectedPlayer_C.ExecuteUbergraph_ConnectedPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConnectedPlayer_C::ExecuteUbergraph_ConnectedPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConnectedPlayer_C", "ExecuteUbergraph_ConnectedPlayer");

	Params::UConnectedPlayer_C_ExecuteUbergraph_ConnectedPlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


