#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Useable_Player_Death_TarVFX.Useable_Player_Death_TarVFX_C
// (Actor)

class UClass* AUseable_Player_Death_TarVFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Useable_Player_Death_TarVFX_C");

	return Clss;
}


// Useable_Player_Death_TarVFX_C Useable_Player_Death_TarVFX.Default__Useable_Player_Death_TarVFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUseable_Player_Death_TarVFX_C* AUseable_Player_Death_TarVFX_C::GetDefaultObj()
{
	static class AUseable_Player_Death_TarVFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUseable_Player_Death_TarVFX_C*>(AUseable_Player_Death_TarVFX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Useable_Player_Death_TarVFX.Useable_Player_Death_TarVFX_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      TeleportCommand                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUseable_Player_Death_TarVFX_C::OnActorUsed(class APlayerController* Controller, bool* Success, const class FString& TeleportCommand, bool CallFunc_OnActorUsed_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_TarVFX_C", "OnActorUsed");

	Params::AUseable_Player_Death_TarVFX_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.TeleportCommand = TeleportCommand;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Useable_Player_Death_TarVFX.Useable_Player_Death_TarVFX_C.OnWasUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              LocalRotation                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnWasUsed_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUseable_Player_Death_TarVFX_C::OnWasUsed(bool* Success, float LocalRotation, bool CallFunc_OnWasUsed_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_TarVFX_C", "OnWasUsed");

	Params::AUseable_Player_Death_TarVFX_C_OnWasUsed_Params Parms{};

	Parms.LocalRotation = LocalRotation;
	Parms.CallFunc_OnWasUsed_Success = CallFunc_OnWasUsed_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Useable_Player_Death_TarVFX.Useable_Player_Death_TarVFX_C.OnPickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUseable_Player_Death_TarVFX_C::OnPickedUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_TarVFX_C", "OnPickedUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Useable_Player_Death_TarVFX.Useable_Player_Death_TarVFX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUseable_Player_Death_TarVFX_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_TarVFX_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Useable_Player_Death_TarVFX.Useable_Player_Death_TarVFX_C.ExecuteUbergraph_Useable_Player_Death_TarVFX
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUseable_Player_Death_TarVFX_C::ExecuteUbergraph_Useable_Player_Death_TarVFX(int32 EntryPoint, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Useable_Player_Death_TarVFX_C", "ExecuteUbergraph_Useable_Player_Death_TarVFX");

	Params::AUseable_Player_Death_TarVFX_C_ExecuteUbergraph_Useable_Player_Death_TarVFX_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}

}


