#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MeteorShowers.UMG_MeteorShowers_C
// (None)

class UClass* UUMG_MeteorShowers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MeteorShowers_C");

	return Clss;
}


// UMG_MeteorShowers_C UMG_MeteorShowers.Default__UMG_MeteorShowers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MeteorShowers_C* UUMG_MeteorShowers_C::GetDefaultObj()
{
	static class UUMG_MeteorShowers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MeteorShowers_C*>(UUMG_MeteorShowers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MeteorShowers.UMG_MeteorShowers_C.BlinkToShowShowersComing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MeteorShowers_C::BlinkToShowShowersComing(const struct FVector2D& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MeteorShowers_C", "BlinkToShowShowersComing");

	Params::UUMG_MeteorShowers_C_BlinkToShowShowersComing_Params Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MeteorShowers.UMG_MeteorShowers_C.Finished_9EB29E1B48915F1A2B2E0ABDEBD3CEB6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MeteorShowers_C::Finished_9EB29E1B48915F1A2B2E0ABDEBD3CEB6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MeteorShowers_C", "Finished_9EB29E1B48915F1A2B2E0ABDEBD3CEB6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MeteorShowers.UMG_MeteorShowers_C.Finished_A2518B9541AE4D63ADD0388E70CEAA65
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MeteorShowers_C::Finished_A2518B9541AE4D63ADD0388E70CEAA65()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MeteorShowers_C", "Finished_A2518B9541AE4D63ADD0388E70CEAA65");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MeteorShowers.UMG_MeteorShowers_C.BlinkyTextThenHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Direction                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MeteorShowers_C::BlinkyTextThenHide(const struct FVector2D& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MeteorShowers_C", "BlinkyTextThenHide");

	Params::UUMG_MeteorShowers_C_BlinkyTextThenHide_Params Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MeteorShowers.UMG_MeteorShowers_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MeteorShowers_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MeteorShowers_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MeteorShowers.UMG_MeteorShowers_C.ExecuteUbergraph_UMG_MeteorShowers
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_Direction                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearlyZero2D_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusGameState_C*       CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MeteorShowers_C::ExecuteUbergraph_UMG_MeteorShowers(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector2D& K2Node_CustomEvent_Direction, bool CallFunc_IsNearlyZero2D_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_IcarusGameState_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MeteorShowers_C", "ExecuteUbergraph_UMG_MeteorShowers");

	Params::UUMG_MeteorShowers_C_ExecuteUbergraph_UMG_MeteorShowers_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Direction = K2Node_CustomEvent_Direction;
	Parms.CallFunc_IsNearlyZero2D_ReturnValue = CallFunc_IsNearlyZero2D_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


