#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraModifier_PhotoMode.CameraModifier_PhotoMode_C
// (None)

class UClass* UCameraModifier_PhotoMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModifier_PhotoMode_C");

	return Clss;
}


// CameraModifier_PhotoMode_C CameraModifier_PhotoMode.Default__CameraModifier_PhotoMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraModifier_PhotoMode_C* UCameraModifier_PhotoMode_C::GetDefaultObj()
{
	static class UCameraModifier_PhotoMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraModifier_PhotoMode_C*>(UCameraModifier_PhotoMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraModifier_PhotoMode.CameraModifier_PhotoMode_C.BlueprintModifyPostProcess
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PostProcessBlendWeight                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        PostProcessSettings                                              (Parm, OutParm)
// struct FVector4                    K2Node_MakeStruct_Vector4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)

void UCameraModifier_PhotoMode_C::BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings, const struct FVector4& K2Node_MakeStruct_Vector4, float CallFunc_SelectFloat_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue_1, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifier_PhotoMode_C", "BlueprintModifyPostProcess");

	Params::UCameraModifier_PhotoMode_C_BlueprintModifyPostProcess_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.K2Node_MakeStruct_Vector4 = K2Node_MakeStruct_Vector4;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;
	Parms.CallFunc_MakeVector4_ReturnValue_1 = CallFunc_MakeVector4_ReturnValue_1;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;

	UObject::ProcessEvent(Func, &Parms);

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = Parms.PostProcessBlendWeight;

	if (PostProcessSettings != nullptr)
		*PostProcessSettings = std::move(Parms.PostProcessSettings);

}

}


