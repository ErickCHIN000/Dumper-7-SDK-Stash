#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadialBlurCustomCurve_UnlockNotification.RadialBlurCustomCurve_UnlockNotification_C
// (Actor)

class UClass* ARadialBlurCustomCurve_UnlockNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialBlurCustomCurve_UnlockNotification_C");

	return Clss;
}


// RadialBlurCustomCurve_UnlockNotification_C RadialBlurCustomCurve_UnlockNotification.Default__RadialBlurCustomCurve_UnlockNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARadialBlurCustomCurve_UnlockNotification_C* ARadialBlurCustomCurve_UnlockNotification_C::GetDefaultObj()
{
	static class ARadialBlurCustomCurve_UnlockNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARadialBlurCustomCurve_UnlockNotification_C*>(ARadialBlurCustomCurve_UnlockNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RadialBlurCustomCurve_UnlockNotification.RadialBlurCustomCurve_UnlockNotification_C.SetBlurWithCurveValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ARadialBlurCustomCurve_UnlockNotification_C::SetBlurWithCurveValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialBlurCustomCurve_UnlockNotification_C", "SetBlurWithCurveValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RadialBlurCustomCurve_UnlockNotification.RadialBlurCustomCurve_UnlockNotification_C.ExecuteUbergraph_RadialBlurCustomCurve_UnlockNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARadialBlurCustomCurve_UnlockNotification_C::ExecuteUbergraph_RadialBlurCustomCurve_UnlockNotification(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialBlurCustomCurve_UnlockNotification_C", "ExecuteUbergraph_RadialBlurCustomCurve_UnlockNotification");

	Params::ARadialBlurCustomCurve_UnlockNotification_C_ExecuteUbergraph_RadialBlurCustomCurve_UnlockNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


