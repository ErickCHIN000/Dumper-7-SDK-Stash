#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Usable_Glimpse.Usable_Glimpse_C
// (Actor)

class UClass* AUsable_Glimpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Usable_Glimpse_C");

	return Clss;
}


// Usable_Glimpse_C Usable_Glimpse.Default__Usable_Glimpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUsable_Glimpse_C* AUsable_Glimpse_C::GetDefaultObj()
{
	static class AUsable_Glimpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsable_Glimpse_C*>(AUsable_Glimpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Usable_Glimpse.Usable_Glimpse_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Glimpse_C::OnActorUsed(class APlayerController* Controller, bool* Success, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_OnActorUsed_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Glimpse_C", "OnActorUsed");

	Params::AUsable_Glimpse_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Glimpse.Usable_Glimpse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUsable_Glimpse_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Glimpse_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Glimpse.Usable_Glimpse_C.ExecuteUbergraph_Usable_Glimpse
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Glimpse_C::ExecuteUbergraph_Usable_Glimpse(int32 EntryPoint, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Glimpse_C", "ExecuteUbergraph_Usable_Glimpse");

	Params::AUsable_Glimpse_C_ExecuteUbergraph_Usable_Glimpse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


