#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerRow.PlayerRow_C
// (None)

class UClass* UPlayerRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerRow_C");

	return Clss;
}


// PlayerRow_C PlayerRow.Default__PlayerRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerRow_C* UPlayerRow_C::GetDefaultObj()
{
	static class UPlayerRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerRow_C*>(UPlayerRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerRow.PlayerRow_C.AddPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRow_C::AddPlayer(class APlayerState* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerRow_C", "AddPlayer");

	Params::UPlayerRow_C_AddPlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRow.PlayerRow_C.ExecuteUbergraph_PlayerRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_CustomEvent_Player                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UPlayerRow_C::ExecuteUbergraph_PlayerRow(int32 EntryPoint, class APlayerState* K2Node_CustomEvent_Player, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerRow_C", "ExecuteUbergraph_PlayerRow");

	Params::UPlayerRow_C_ExecuteUbergraph_PlayerRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


