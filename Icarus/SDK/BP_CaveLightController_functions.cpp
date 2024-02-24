#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CaveLightController.BP_CaveLightController_C
// (None)

class UClass* UBP_CaveLightController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CaveLightController_C");

	return Clss;
}


// BP_CaveLightController_C BP_CaveLightController.Default__BP_CaveLightController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CaveLightController_C* UBP_CaveLightController_C::GetDefaultObj()
{
	static class UBP_CaveLightController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CaveLightController_C*>(UBP_CaveLightController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CaveLightController.BP_CaveLightController_C.GetAtmosphereController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_AtmosphereController_C*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AtmosphereController_C*  K2Node_DynamicCast_AsBP_Atmosphere_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class ABP_AtmosphereController_C* UBP_CaveLightController_C::GetAtmosphereController(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_AtmosphereController_C* K2Node_DynamicCast_AsBP_Atmosphere_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaveLightController_C", "GetAtmosphereController");

	Params::UBP_CaveLightController_C_GetAtmosphereController_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Atmosphere_Controller = K2Node_DynamicCast_AsBP_Atmosphere_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CaveLightController.BP_CaveLightController_C.AtmosphereControllerInput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    SunDirection                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Entrance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CaveLightController_C::AtmosphereControllerInput(struct FRotator& SunDirection, float& Intensity, struct FLinearColor& Color, float& Entrance, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FRotator& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, float K2Node_Select_Default_2, float CallFunc_Lerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaveLightController_C", "AtmosphereControllerInput");

	Params::UBP_CaveLightController_C_AtmosphereControllerInput_Params Parms{};

	Parms.SunDirection = SunDirection;
	Parms.Intensity = Intensity;
	Parms.Color = Color;
	Parms.Entrance = Entrance;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaveLightController.BP_CaveLightController_C.SunLightDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    SunDirection                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CaveLightController_C::SunLightDirection(const struct FRotator& SunDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaveLightController_C", "SunLightDirection");

	Params::UBP_CaveLightController_C_SunLightDirection_Params Parms{};

	Parms.SunDirection = SunDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaveLightController.BP_CaveLightController_C.EventSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CaveLightController_C::EventSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaveLightController_C", "EventSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CaveLightController.BP_CaveLightController_C.SunLightColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CaveCover                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CaveLightController_C::SunLightColor(const struct FLinearColor& Color, float Intensity, float CaveCover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaveLightController_C", "SunLightColor");

	Params::UBP_CaveLightController_C_SunLightColor_Params Parms{};

	Parms.Color = Color;
	Parms.Intensity = Intensity;
	Parms.CaveCover = CaveCover;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaveLightController.BP_CaveLightController_C.WeatherManTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CaveLightController_C::WeatherManTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaveLightController_C", "WeatherManTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CaveLightController.BP_CaveLightController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_CaveLightController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaveLightController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CaveLightController.BP_CaveLightController_C.ExecuteUbergraph_BP_CaveLightController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FRotator                    K2Node_CustomEvent_SunDirection                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Intensity                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_CaveCover                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AtmosphereController_C*  CallFunc_GetAtmosphereController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AtmosphereController_C*  CallFunc_GetAtmosphereController_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CaveLightController_C::ExecuteUbergraph_BP_CaveLightController(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FRotator& K2Node_CustomEvent_SunDirection, const struct FLinearColor& K2Node_CustomEvent_Color, float K2Node_CustomEvent_Intensity, float K2Node_CustomEvent_CaveCover, class ABP_AtmosphereController_C* CallFunc_GetAtmosphereController_ReturnValue, class ABP_AtmosphereController_C* CallFunc_GetAtmosphereController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaveLightController_C", "ExecuteUbergraph_BP_CaveLightController");

	Params::UBP_CaveLightController_C_ExecuteUbergraph_BP_CaveLightController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_SunDirection = K2Node_CustomEvent_SunDirection;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_CustomEvent_Intensity = K2Node_CustomEvent_Intensity;
	Parms.K2Node_CustomEvent_CaveCover = K2Node_CustomEvent_CaveCover;
	Parms.CallFunc_GetAtmosphereController_ReturnValue = CallFunc_GetAtmosphereController_ReturnValue;
	Parms.CallFunc_GetAtmosphereController_ReturnValue_1 = CallFunc_GetAtmosphereController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaveLightController.BP_CaveLightController_C.LightDetails__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity_Out                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color_Out                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Sun_Direction_Out                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CaveLightController_C::LightDetails__DelegateSignature(float Intensity_Out, const struct FLinearColor& Color_Out, const struct FRotator& Sun_Direction_Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaveLightController_C", "LightDetails__DelegateSignature");

	Params::UBP_CaveLightController_C_LightDetails__DelegateSignature_Params Parms{};

	Parms.Intensity_Out = Intensity_Out;
	Parms.Color_Out = Color_Out;
	Parms.Sun_Direction_Out = Sun_Direction_Out;

	UObject::ProcessEvent(Func, &Parms);

}

}


