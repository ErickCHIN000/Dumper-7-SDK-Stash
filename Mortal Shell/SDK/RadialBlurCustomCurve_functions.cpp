#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadialBlurCustomCurve.RadialBlurCustomCurve_C
// (Actor)

class UClass* ARadialBlurCustomCurve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialBlurCustomCurve_C");

	return Clss;
}


// RadialBlurCustomCurve_C RadialBlurCustomCurve.Default__RadialBlurCustomCurve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARadialBlurCustomCurve_C* ARadialBlurCustomCurve_C::GetDefaultObj()
{
	static class ARadialBlurCustomCurve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARadialBlurCustomCurve_C*>(ARadialBlurCustomCurve_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RadialBlurCustomCurve.RadialBlurCustomCurve_C.SetBlurWithCurveValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeY                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_ProjectWorldToScreen_ScreenPosition                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectWorldToScreen_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARadialBlurCustomCurve_C::SetBlurWithCurveValue(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialBlurCustomCurve_C", "SetBlurWithCurveValue");

	Params::ARadialBlurCustomCurve_C_SetBlurWithCurveValue_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetViewportSize_SizeX = CallFunc_GetViewportSize_SizeX;
	Parms.CallFunc_GetViewportSize_SizeY = CallFunc_GetViewportSize_SizeY;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_ProjectWorldToScreen_ScreenPosition = CallFunc_ProjectWorldToScreen_ScreenPosition;
	Parms.CallFunc_ProjectWorldToScreen_ReturnValue = CallFunc_ProjectWorldToScreen_ReturnValue;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = CallFunc_Divide_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialBlurCustomCurve.RadialBlurCustomCurve_C.UpdateTimeAndDestroyActorIfDurationHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARadialBlurCustomCurve_C::UpdateTimeAndDestroyActorIfDurationHit(float DeltaTime, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialBlurCustomCurve_C", "UpdateTimeAndDestroyActorIfDurationHit");

	Params::ARadialBlurCustomCurve_C_UpdateTimeAndDestroyActorIfDurationHit_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialBlurCustomCurve.RadialBlurCustomCurve_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ARadialBlurCustomCurve_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialBlurCustomCurve_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadialBlurCustomCurve.RadialBlurCustomCurve_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARadialBlurCustomCurve_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialBlurCustomCurve_C", "ReceiveTick");

	Params::ARadialBlurCustomCurve_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialBlurCustomCurve.RadialBlurCustomCurve_C.OnEquipmentMenuPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Close                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARadialBlurCustomCurve_C::OnEquipmentMenuPressed(bool Close, enum class Enum_EquipmentMenuType Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialBlurCustomCurve_C", "OnEquipmentMenuPressed");

	Params::ARadialBlurCustomCurve_C_OnEquipmentMenuPressed_Params Parms{};

	Parms.Close = Close;
	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialBlurCustomCurve.RadialBlurCustomCurve_C.OnRadialBlurChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARadialBlurCustomCurve_C::OnRadialBlurChanged(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialBlurCustomCurve_C", "OnRadialBlurChanged");

	Params::ARadialBlurCustomCurve_C_OnRadialBlurChanged_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadialBlurCustomCurve.RadialBlurCustomCurve_C.ExecuteUbergraph_RadialBlurCustomCurve
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Close                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  K2Node_CustomEvent_Menu                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRadialBlur_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ARadialBlurCustomCurve_C::ExecuteUbergraph_RadialBlurCustomCurve(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool K2Node_CustomEvent_Close, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Menu, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetRadialBlur_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool K2Node_CustomEvent_Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialBlurCustomCurve_C", "ExecuteUbergraph_RadialBlurCustomCurve");

	Params::ARadialBlurCustomCurve_C_ExecuteUbergraph_RadialBlurCustomCurve_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_CustomEvent_Close = K2Node_CustomEvent_Close;
	Parms.K2Node_CustomEvent_Menu = K2Node_CustomEvent_Menu;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRadialBlur_ReturnValue = CallFunc_GetRadialBlur_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;

	UObject::ProcessEvent(Func, &Parms);

}

}


