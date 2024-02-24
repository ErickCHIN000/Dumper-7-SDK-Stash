#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuffLifeStealForNextXHit.BuffLifeStealForNextXHit_C
// (None)

class UClass* UBuffLifeStealForNextXHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffLifeStealForNextXHit_C");

	return Clss;
}


// BuffLifeStealForNextXHit_C BuffLifeStealForNextXHit.Default__BuffLifeStealForNextXHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffLifeStealForNextXHit_C* UBuffLifeStealForNextXHit_C::GetDefaultObj()
{
	static class UBuffLifeStealForNextXHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffLifeStealForNextXHit_C*>(UBuffLifeStealForNextXHit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffLifeStealForNextXHit.BuffLifeStealForNextXHit_C.GetIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  Output_Get                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EComboTypes             CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffLifeStealForNextXHit_C::GetIcon(class UTexture2D** Output_Get, enum class EComboTypes Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EComboTypes CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffLifeStealForNextXHit_C", "GetIcon");

	Params::UBuffLifeStealForNextXHit_C_GetIcon_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon = CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;

}


// Function BuffLifeStealForNextXHit.BuffLifeStealForNextXHit_C.OnBuffedActorHitsTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffLifeStealForNextXHit_C::OnBuffedActorHitsTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffLifeStealForNextXHit_C", "OnBuffedActorHitsTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffLifeStealForNextXHit.BuffLifeStealForNextXHit_C.OnBuffEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffLifeStealForNextXHit_C::OnBuffEnd(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffLifeStealForNextXHit_C", "OnBuffEnd");

	Params::UBuffLifeStealForNextXHit_C_OnBuffEnd_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffLifeStealForNextXHit.BuffLifeStealForNextXHit_C.OnBuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffLifeStealForNextXHit_C::OnBuffStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffLifeStealForNextXHit_C", "OnBuffStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffLifeStealForNextXHit.BuffLifeStealForNextXHit_C.Reinit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HitCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffLifeStealForNextXHit_C::Reinit(int32 HitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffLifeStealForNextXHit_C", "Reinit");

	Params::UBuffLifeStealForNextXHit_C_Reinit_Params Parms{};

	Parms.HitCount = HitCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffLifeStealForNextXHit.BuffLifeStealForNextXHit_C.ExecuteUbergraph_BuffLifeStealForNextXHit
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIcon_Output_Get                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInterrupted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameplayGM_GameModeRef                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameplayGM_GameModeRef_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameplayGM_GameModeRef_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_HitCount                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UBuffLifeStealForNextXHit_C::ExecuteUbergraph_BuffLifeStealForNextXHit(int32 EntryPoint, class UTexture2D* CallFunc_GetIcon_Output_Get, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_Event_bInterrupted, class AGameplayGM_C* CallFunc_GetGameplayGM_GameModeRef, class AGameplayGM_C* CallFunc_GetGameplayGM_GameModeRef_1, int32 CallFunc_AddStatusIcon_IconID, class AGameplayGM_C* CallFunc_GetGameplayGM_GameModeRef_2, int32 K2Node_CustomEvent_HitCount, bool CallFunc_LessEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffLifeStealForNextXHit_C", "ExecuteUbergraph_BuffLifeStealForNextXHit");

	Params::UBuffLifeStealForNextXHit_C_ExecuteUbergraph_BuffLifeStealForNextXHit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcon_Output_Get = CallFunc_GetIcon_Output_Get;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Event_bInterrupted = K2Node_Event_bInterrupted;
	Parms.CallFunc_GetGameplayGM_GameModeRef = CallFunc_GetGameplayGM_GameModeRef;
	Parms.CallFunc_GetGameplayGM_GameModeRef_1 = CallFunc_GetGameplayGM_GameModeRef_1;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.CallFunc_GetGameplayGM_GameModeRef_2 = CallFunc_GetGameplayGM_GameModeRef_2;
	Parms.K2Node_CustomEvent_HitCount = K2Node_CustomEvent_HitCount;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


