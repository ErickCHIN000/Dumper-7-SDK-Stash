#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerButton.PlayerButton_C
// (None)

class UClass* UPlayerButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerButton_C");

	return Clss;
}


// PlayerButton_C PlayerButton.Default__PlayerButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerButton_C* UPlayerButton_C::GetDefaultObj()
{
	static class UPlayerButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerButton_C*>(UPlayerButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerButton.PlayerButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerButton.PlayerButton_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPlayerButton_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerButton_C", "BndEvt__PlayerButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerButton.PlayerButton_C.ExecuteUbergraph_PlayerButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobbyGM_C*                  K2Node_DynamicCast_AsLobby_GM                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerButton_C::ExecuteUbergraph_PlayerButton(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobbyGM_C* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerButton_C", "ExecuteUbergraph_PlayerButton");

	Params::UPlayerButton_C_ExecuteUbergraph_PlayerButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GM = K2Node_DynamicCast_AsLobby_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


