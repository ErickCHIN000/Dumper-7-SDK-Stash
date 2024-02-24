#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpectatorFunctionLibrary.BP_SpectatorFunctionLibrary_C
// (None)

class UClass* UBP_SpectatorFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpectatorFunctionLibrary_C");

	return Clss;
}


// BP_SpectatorFunctionLibrary_C BP_SpectatorFunctionLibrary.Default__BP_SpectatorFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SpectatorFunctionLibrary_C* UBP_SpectatorFunctionLibrary_C::GetDefaultObj()
{
	static class UBP_SpectatorFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SpectatorFunctionLibrary_C*>(UBP_SpectatorFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SpectatorFunctionLibrary.BP_SpectatorFunctionLibrary_C.GetPhotoCameraPawn
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PhotoCamera_C*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PhotoCamera_C*           K2Node_DynamicCast_AsBP_Photo_Camera                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class ABP_PhotoCamera_C* UBP_SpectatorFunctionLibrary_C::GetPhotoCameraPawn(class UObject* __WorldContext, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_PhotoCamera_C* K2Node_DynamicCast_AsBP_Photo_Camera, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpectatorFunctionLibrary_C", "GetPhotoCameraPawn");

	Params::UBP_SpectatorFunctionLibrary_C_GetPhotoCameraPawn_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Photo_Camera = K2Node_DynamicCast_AsBP_Photo_Camera;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SpectatorFunctionLibrary.BP_SpectatorFunctionLibrary_C.GetCinematicPawn
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CinematicPawn_C*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CinematicPawn_C*         K2Node_DynamicCast_AsBP_Cinematic_Pawn                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class ABP_CinematicPawn_C* UBP_SpectatorFunctionLibrary_C::GetCinematicPawn(class UObject* __WorldContext, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ABP_CinematicPawn_C* K2Node_DynamicCast_AsBP_Cinematic_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpectatorFunctionLibrary_C", "GetCinematicPawn");

	Params::UBP_SpectatorFunctionLibrary_C_GetCinematicPawn_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Cinematic_Pawn = K2Node_DynamicCast_AsBP_Cinematic_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


